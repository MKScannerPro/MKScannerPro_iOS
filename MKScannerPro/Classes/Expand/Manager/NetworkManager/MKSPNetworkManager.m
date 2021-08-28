//
//  MKSPNetworkManager.m
//  MKScannerPro_Example
//
//  Created by aa on 2021/7/9.
//  Copyright © 2021 aadyx2007@163.com. All rights reserved.
//

#import "MKSPNetworkManager.h"
#import <SystemConfiguration/CaptiveNetwork.h>

NSString *const MKSPNetworkStatusChangedNotification = @"MKSPNetworkStatusChangedNotification";

@interface NSObject (MKSPNetworkManager)

@end

@implementation NSObject (MKSPNetworkManager)

+ (void)load{
    [MKSPNetworkManager sharedInstance];
}

@end

@interface MKSPNetworkManager()

@property(nonatomic, assign)AFNetworkReachabilityStatus currentNetStatus;//当前网络状态

@end

@implementation MKSPNetworkManager

+ (MKSPNetworkManager *)sharedInstance{
    static MKSPNetworkManager *manager = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        if (!manager) {
            manager = [MKSPNetworkManager new];
            [manager startMonitoring];
        }
    });
    return manager;
}

#pragma mark - public method

+ (NSString *)currentWifiSSID{
    CFArrayRef tempArray = CNCopySupportedInterfaces();
    if (!tempArray) {
        return @"<<NONE>>";
    }
    CFStringRef interfaceName = CFArrayGetValueAtIndex(tempArray, 0);
    CFDictionaryRef captiveNtwrkDict = CNCopyCurrentNetworkInfo(interfaceName);
    NSDictionary* wifiDic = (__bridge NSDictionary *) captiveNtwrkDict;
    NSLog(@"%@",wifiDic);
    if (!wifiDic || wifiDic.allValues.count == 0) {
        CFRelease(tempArray);
        return @"<<NONE>>";
    }
    CFRelease(tempArray);
    return wifiDic[@"SSID"];
}

- (BOOL)currentNetworkAvailable{
    if (self.currentNetStatus == AFNetworkReachabilityStatusUnknown
        || self.currentNetStatus == AFNetworkReachabilityStatusNotReachable) {
        return NO;
    }
    return YES;
}

- (BOOL)currentNetworkIsWifi{
    return (self.currentNetStatus == AFNetworkReachabilityStatusReachableViaWiFi);
}

#pragma mark 网络监听相关方法
- (void)startMonitoring{
    [[AFNetworkReachabilityManager sharedManager] setReachabilityStatusChangeBlock:^(AFNetworkReachabilityStatus status) {
        // 当网络状态改变了, 就会调用这个block
        self.currentNetStatus = status;
        [[NSNotificationCenter defaultCenter] postNotificationName:MKSPNetworkStatusChangedNotification object:nil];
    }];
    [[AFNetworkReachabilityManager sharedManager] startMonitoring];
}

@end
