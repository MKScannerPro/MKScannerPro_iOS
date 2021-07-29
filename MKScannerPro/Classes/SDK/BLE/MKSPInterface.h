//
//  MKSPInterface.h
//  MKScannerPro_Example
//
//  Created by aa on 2021/7/4.
//  Copyright © 2021 aadyx2007@163.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MKSPInterface : NSObject

#pragma mark ****************************************Device Service Information************************************************
/// Read device firmware information
/// @param sucBlock Success callback
/// @param failedBlock Failure callback
+ (void)sp_readFirmwareWithSucBlock:(void (^)(id returnData))sucBlock
                        failedBlock:(void (^)(NSError *error))failedBlock;

/// Read device hardware information
/// @param sucBlock Success callback
/// @param failedBlock Failure callback
+ (void)sp_readHardwareWithSucBlock:(void (^)(id returnData))sucBlock
                        failedBlock:(void (^)(NSError *error))failedBlock;

/// Read the broadcast name of the device.
/// @param sucBlock Success callback
/// @param failedBlock Failure callback
+ (void)sp_readDeviceNameWithSucBlock:(void (^)(id returnData))sucBlock
                          failedBlock:(void (^)(NSError *error))failedBlock;

#pragma mark ****************************************自定义协议读取************************************************

/// Read SSID of WIFI.
/// @param sucBlock Success callback
/// @param failedBlock Failure callback
+ (void)sp_readWIFISSIDWithSucBlock:(void (^)(id returnData))sucBlock
                        failedBlock:(void (^)(NSError *error))failedBlock;

/// Read password of WIFI.
/// @param sucBlock Success callback
/// @param failedBlock Failure callback
+ (void)sp_readWIFIPasswordWithSucBlock:(void (^)(id returnData))sucBlock
                            failedBlock:(void (^)(NSError *error))failedBlock;

/// Read the device tcp communication encryption method.
/*
 @{
 @"mode":@"0"
 }
 @"0":TCP
 @"1":SSL.Do not verify the server certificate.
 @"2":SSL.Verify the server's certificate.
 @"3":SSL.Two-way authentication
 */
/// @param sucBlock Success callback
/// @param failedBlock Failure callback
+ (void)sp_readConnectModeWithSucBlock:(void (^)(id returnData))sucBlock
                           failedBlock:(void (^)(NSError *error))failedBlock;

/// Read the domain name of the MQTT server.
/// @param sucBlock Success callback
/// @param failedBlock Failure callback
+ (void)sp_readServerHostWithSucBlock:(void (^)(id returnData))sucBlock
                          failedBlock:(void (^)(NSError *error))failedBlock;

/// Read the port number of the MQTT server.
/// @param sucBlock Success callback
/// @param failedBlock Failure callback
+ (void)sp_readServerPortWithSucBlock:(void (^)(id returnData))sucBlock
                          failedBlock:(void (^)(NSError *error))failedBlock;

/// Read clean session status of the  MQTT server.
/// @param sucBlock Success callback
/// @param failedBlock Failure callback
+ (void)sp_readServerCleanSessionWithSucBlock:(void (^)(id returnData))sucBlock
                                  failedBlock:(void (^)(NSError *error))failedBlock;

/// Read Keep Alive of the MQTT server.
/// @param sucBlock Success callback
/// @param failedBlock Failure callback
+ (void)sp_readServerKeepAliveWithSucBlock:(void (^)(id returnData))sucBlock
                               failedBlock:(void (^)(NSError *error))failedBlock;

/// Read Qos of the MQTT server.
/// @param sucBlock Success callback
/// @param failedBlock Failure callback
+ (void)sp_readServerQosWithSucBlock:(void (^)(id returnData))sucBlock
                         failedBlock:(void (^)(NSError *error))failedBlock;

/// Read Client ID of the MQTT server.
/// @param sucBlock Success callback
/// @param failedBlock Failure callback
+ (void)sp_readClientIDWithSucBlock:(void (^)(id returnData))sucBlock
                        failedBlock:(void (^)(NSError *error))failedBlock;

/// Device ID.Alibaba Cloud server needs this parameter to distinguish different messages.
/// @param sucBlock Success callback
/// @param failedBlock Failure callback
+ (void)sp_readDeviceIDWithSucBlock:(void (^)(id returnData))sucBlock
                        failedBlock:(void (^)(NSError *error))failedBlock;

/// Read the subscription topic of the device.
/// @param sucBlock Success callback
/// @param failedBlock Failure callback
+ (void)sp_readSubscibeTopicWithSucBlock:(void (^)(id returnData))sucBlock
                             failedBlock:(void (^)(NSError *error))failedBlock;

/// Read the publishing theme of the device.
/// @param sucBlock Success callback
/// @param failedBlock Failure callback
+ (void)sp_readPublishTopicWithSucBlock:(void (^)(id returnData))sucBlock
                            failedBlock:(void (^)(NSError *error))failedBlock;

/// Read NTP server domain name.
/// @param sucBlock Success callback
/// @param failedBlock Failure callback
+ (void)sp_readNTPServerHostWithSucBlock:(void (^)(id returnData))sucBlock
                             failedBlock:(void (^)(NSError *error))failedBlock;

/// Read the current time zone to the device.
/// @param sucBlock Success callback
/// @param failedBlock Failure callback
+ (void)sp_readTimeZoneWithSucBlock:(void (^)(id returnData))sucBlock
                        failedBlock:(void (^)(NSError *error))failedBlock;

/// Read the mac address of the device.
/// @param sucBlock Success callback
/// @param failedBlock Failure callback
+ (void)sp_readDeviceMacAddressWithSucBlock:(void (^)(id returnData))sucBlock
                                failedBlock:(void (^)(NSError *error))failedBlock;

/// Read device type.
/// @param sucBlock Success callback
/// @param failedBlock Failure callback
+ (void)sp_readDeviceTypeWithSucBlock:(void (^)(id returnData))sucBlock
                          failedBlock:(void (^)(NSError *error))failedBlock;

@end

NS_ASSUME_NONNULL_END
