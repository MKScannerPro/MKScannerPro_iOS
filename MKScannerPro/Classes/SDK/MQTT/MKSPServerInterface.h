//
//  MKSPServerInterface.h
//  MKScannerPro_Example
//
//  Created by aa on 2021/7/17.
//  Copyright © 2021 aadyx2007@163.com. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "MKSPServerConfigDefines.h"

NS_ASSUME_NONNULL_BEGIN

@interface MKSPServerInterface : NSObject

#pragma mark - Read

/// Read device information.
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_readDeviceInfoWithDeviceID:(NSString *)deviceID
                           macAddress:(NSString *)macAddress
                                topic:(NSString *)topic
                             sucBlock:(void (^)(id returnData))sucBlock
                          failedBlock:(void (^)(NSError *error))failedBlock;

/// Read device UTC time.
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_readDeviceUTCWithDeviceID:(NSString *)deviceID
                          macAddress:(NSString *)macAddress
                               topic:(NSString *)topic
                            sucBlock:(void (^)(id returnData))sucBlock
                         failedBlock:(void (^)(NSError *error))failedBlock;

/// Read LED indicator status.
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_readIndicatorLightStatusWithDeviceID:(NSString *)deviceID
                                     macAddress:(NSString *)macAddress
                                          topic:(NSString *)topic
                                       sucBlock:(void (^)(id returnData))sucBlock
                                    failedBlock:(void (^)(NSError *error))failedBlock;

/// Read the reporting interval of the device's network status.
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_readNetworkStatusReportingIntervalWithDeviceID:(NSString *)deviceID
                                               macAddress:(NSString *)macAddress
                                                    topic:(NSString *)topic
                                                 sucBlock:(void (^)(id returnData))sucBlock
                                              failedBlock:(void (^)(NSError *error))failedBlock;

/// Read scan parameters.
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_readScanSwitchPramsWithDeviceID:(NSString *)deviceID
                                macAddress:(NSString *)macAddress
                                     topic:(NSString *)topic
                                  sucBlock:(void (^)(id returnData))sucBlock
                               failedBlock:(void (^)(NSError *error))failedBlock;

/// Read scan data timeout reporting time.
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_readDataReportingTimeoutWithDeviceID:(NSString *)deviceID
                                     macAddress:(NSString *)macAddress
                                          topic:(NSString *)topic
                                       sucBlock:(void (^)(id returnData))sucBlock
                                    failedBlock:(void (^)(NSError *error))failedBlock;

/// Read scan data report content option.
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_readUploadDataOptionWithDeviceID:(NSString *)deviceID
                                 macAddress:(NSString *)macAddress
                                      topic:(NSString *)topic
                                   sucBlock:(void (^)(id returnData))sucBlock
                                failedBlock:(void (^)(NSError *error))failedBlock;

/// Read scan repeat data parameters.
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_readDuplicateDataFilterWithDeviceID:(NSString *)deviceID
                                    macAddress:(NSString *)macAddress
                                         topic:(NSString *)topic
                                      sucBlock:(void (^)(id returnData))sucBlock
                                   failedBlock:(void (^)(NSError *error))failedBlock;

/// Read type filter selection.
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_readBeaconTypeFilterDatasWithDeviceID:(NSString *)deviceID
                                      macAddress:(NSString *)macAddress
                                           topic:(NSString *)topic
                                        sucBlock:(void (^)(id returnData))sucBlock
                                     failedBlock:(void (^)(NSError *error))failedBlock;

/// Read scan filter condition relationship.
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_readScanFilterConditionsWithDeviceID:(NSString *)deviceID
                                     macAddress:(NSString *)macAddress
                                          topic:(NSString *)topic
                                       sucBlock:(void (^)(id returnData))sucBlock
                                    failedBlock:(void (^)(NSError *error))failedBlock;

/// Read scan filter conditions.
/// @param type A/B
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_readFilterConditions:(mk_sp_filterConditionsType)type
                       deviceID:(NSString *)deviceID
                     macAddress:(NSString *)macAddress
                          topic:(NSString *)topic
                       sucBlock:(void (^)(id returnData))sucBlock
                    failedBlock:(void (^)(NSError *error))failedBlock;

/// Read the MQTT server information of the device.
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_readDeviceMQTTServerInfoWithDeviceID:(NSString *)deviceID
                                     macAddress:(NSString *)macAddress
                                          topic:(NSString *)topic
                                       sucBlock:(void (^)(id returnData))sucBlock
                                    failedBlock:(void (^)(NSError *error))failedBlock;

/// Read the network connection timeout period.
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_readConnectionTimeoutWithDeviceID:(NSString *)deviceID
                                  macAddress:(NSString *)macAddress
                                       topic:(NSString *)topic
                                    sucBlock:(void (^)(id returnData))sucBlock
                                 failedBlock:(void (^)(NSError *error))failedBlock;

/// Bluetooth scan timeout and restart time.
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_readScanTimeoutOptionWithDeviceID:(NSString *)deviceID
                                  macAddress:(NSString *)macAddress
                                       topic:(NSString *)topic
                                    sucBlock:(void (^)(id returnData))sucBlock
                                 failedBlock:(void (^)(NSError *error))failedBlock;

#pragma mark ****************************************Configuration************************************************

/// Reset.
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_configDeviceResetWithDeviceID:(NSString *)deviceID
                              macAddress:(NSString *)macAddress
                                   topic:(NSString *)topic
                                sucBlock:(void (^)(id returnData))sucBlock
                             failedBlock:(void (^)(NSError *error))failedBlock;

/// Configure device OTA.
/// @param type type
/// @param host 1-64 Characters
/// @param port 0~65535
/// @param catalogue catalogue,1-100 Characters
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_configOTA:(mk_sp_otaType)type
                host:(NSString *)host
                port:(NSInteger)port
           catalogue:(NSString *)catalogue
            deviceID:(NSString *)deviceID
          macAddress:(NSString *)macAddress
               topic:(NSString *)topic
            sucBlock:(void (^)(id returnData))sucBlock
         failedBlock:(void (^)(NSError *error))failedBlock;

/// Configure the UTC time zone of the device, and the device will reset the time according to the time zone.
/// @param timeZone -12~12
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_configDeviceTimeZone:(NSInteger)timeZone
                       deviceID:(NSString *)deviceID
                     macAddress:(NSString *)macAddress
                          topic:(NSString *)topic
                       sucBlock:(void (^)(id returnData))sucBlock
                    failedBlock:(void (^)(NSError *error))failedBlock;

/// Configure indicator status.
/// @param protocol protocol
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_configIndicatorLightStatus:(id <sp_indicatorLightStatusProtocol>)protocol
                             deviceID:(NSString *)deviceID
                           macAddress:(NSString *)macAddress
                                topic:(NSString *)topic
                             sucBlock:(void (^)(id returnData))sucBlock
                          failedBlock:(void (^)(NSError *error))failedBlock;

/// Configure the reporting interval of device networking status.
/// @param interval If set to 0, it means that the report is closed.Range : 10s~86400s
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_configNetworkStatusReportingInterval:(NSInteger)interval
                                       deviceID:(NSString *)deviceID
                                     macAddress:(NSString *)macAddress
                                          topic:(NSString *)topic
                                       sucBlock:(void (^)(id returnData))sucBlock
                                    failedBlock:(void (^)(NSError *error))failedBlock;

/// Configure scan parameters.
/// @param isOn isOn
/// @param scanTime Scan time length，1s~65535s
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_configScanSwitchStatus:(BOOL)isOn
                         scanTime:(NSInteger)scanTime
                         deviceID:(NSString *)deviceID
                       macAddress:(NSString *)macAddress
                            topic:(NSString *)topic
                         sucBlock:(void (^)(id returnData))sucBlock
                      failedBlock:(void (^)(NSError *error))failedBlock;

/// Configure scan data timeout reporting time.
/// @param interval 0ms~3000ms
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_configDataReportingTimeout:(NSInteger)interval
                             deviceID:(NSString *)deviceID
                           macAddress:(NSString *)macAddress
                                topic:(NSString *)topic
                             sucBlock:(void (^)(id returnData))sucBlock
                          failedBlock:(void (^)(NSError *error))failedBlock;

/// Configure scan data report content options.
/// @param protocol protocol
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_configUploadDataOption:(id <sp_uploadDataOptionProtocol>)protocol
                         deviceID:(NSString *)deviceID
                       macAddress:(NSString *)macAddress
                            topic:(NSString *)topic
                         sucBlock:(void (^)(id returnData))sucBlock
                      failedBlock:(void (^)(NSError *error))failedBlock;

/// Configure scan duplicate data parameters.
/// @param filter filter
/// @param period 1s~86400s
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_configDuplicateDataFilter:(mk_sp_duplicateDataFilter)filter
                              period:(long long)period
                            deviceID:(NSString *)deviceID
                          macAddress:(NSString *)macAddress
                               topic:(NSString *)topic
                            sucBlock:(void (^)(id returnData))sucBlock
                         failedBlock:(void (^)(NSError *error))failedBlock;

/// Configuration type filter selection.
/// @param protocol protocol
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_configBeaconTypeFilter:(id <sp_beaconTypeFilterProtocol>)protocol
                         deviceID:(NSString *)deviceID
                       macAddress:(NSString *)macAddress
                            topic:(NSString *)topic
                         sucBlock:(void (^)(id returnData))sucBlock
                      failedBlock:(void (^)(NSError *error))failedBlock;

/// Configure scan filter condition relationship.
/// @param condition OR/AND
/// @param interval 0ms~3000ms
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_configScanFilterConditions:(mk_sp_scanFilterConditionShip)condition
                             deviceID:(NSString *)deviceID
                           macAddress:(NSString *)macAddress
                                topic:(NSString *)topic
                             sucBlock:(void (^)(id returnData))sucBlock
                          failedBlock:(void (^)(NSError *error))failedBlock;

/// Configure scan filter conditions.
/// @param type A/B
/// @param conditions conditions
/*

 1、Configure scan filter conditions to take effect.
 MKSPFilterConditionsStatusKey:@(YES)       //ON
 MKSPFilterConditionsStatusKey:@(NO)        //OFF
 2、Configure the device to filter based on RSSI(-127dBm~0dBm).
 MKSPFilterByRssiKey:@(-55)
 3、Configure filtering based on the device broadcast name, which should contain the filtered device name data (1~10 Characters) and filtering rules (mk_sp_filterRules enumeration type, currently there are closed filtering, forward filtering, and reverse filtering).
 MKSPFilterByAdvNameKey:@{
    MKSPFilterRulesKey:@(mk_sp_filterRules),
    @"name":@"xxxx"
 }
 4、The configuration is filtered according to the device’s Mac address of the device, which should contain the filtered device’s Mac address of the device data (1~6 HEX), filtering rules (mk_sp_filterRules enumeration type, currently there are closed filtering, forward filtering, reverse Filter).
 MKSPFilterByDeviceMacKey:@{
    MKSPFilterRulesKey:@(mk_sp_filterRules),
    @"mac":@"xxxx"
 }
 5、Configure filtering based on the UUID broadcast by iBeacon, which should contain filtered UUID data (1~16 HEX) and filtering rules (mk_sp_filterRules enumeration type, currently there are closed filtering, forward filtering, and reverse filtering).
 MKSPFilterByiBeaconUUIDKey:@{
    MKSPFilterRulesKey:@(mk_sp_filterRules),
    @"uuid":@"xxxx"
 }
 6、Filter according to the main value range of the configured iBeacon, which should contain the filtered Major minimum (0~65535), Major maximum (Major minimum~65535), filtering rules (mk_sp_filterRules enumeration type, currently has closed filtering, Forward filtering, reverse filtering).
 MKSPFilterByiBeaconMajorKey:@{
    MKSPFilterRulesKey:@(mk_sp_filterRules),
    @"max":@(200),
    @"min":@(10)
 }
 7、Filter according to the configured iBeacon sub-value range, which should contain the minimum value of the filtered Minor (0~65535), the maximum value of Minor (Minor value~65535), the filtering rules (mk_sp_filterRules enumeration type, currently there are closed filtering, positive (Toward filtering, reverse filtering).
 MKSPFilterByiBeaconMinorKey:@{
    MKSPFilterRulesKey:@(mk_sp_filterRules),
    @"max":@(200),
    @"min":@(10)
 }
 8、Start filtering based on the raw data broadcast by the device, which should contain up to five groups of raw data (must comply with the mk_sp_BLEFilterRawDataProtocol protocol), filtering rules (mk_sp_filterRules enumeration type, currently closed filtering, forward filtering, and reverse filtering).
 MKSPFilterByRawDataKey:@{
    MKSPFilterRulesKey:@(mk_sp_filterRules),
    dataList:@[
                id <mk_sp_BLEFilterRawDataProtocol>protocolModel1,
                id <mk_sp_BLEFilterRawDataProtocol>protocolModel2,
    ]
 }
 
 Note:All the above rules can be optional, and those that need to be configured must be filled in json according to the example.
 */
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_configFilterWithConditionsType:(mk_sp_filterConditionsType)type
                               conditions:(NSDictionary *)conditions
                                 deviceID:(NSString *)deviceID
                               macAddress:(NSString *)macAddress
                                    topic:(NSString *)topic
                                 sucBlock:(void (^)(id returnData))sucBlock
                              failedBlock:(void (^)(NSError *error))failedBlock;

/// Configure the network connection timeout period.
/// @param interval 0min~1440mins.
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_configConnectionTimeout:(NSInteger)interval
                          deviceID:(NSString *)deviceID
                        macAddress:(NSString *)macAddress
                             topic:(NSString *)topic
                          sucBlock:(void (^)(id returnData))sucBlock
                       failedBlock:(void (^)(NSError *error))failedBlock;

/// Configure the bluetooth scan timeout and restart duration.
/// @param interval 0min~1440mins.
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_configScanTimeoutOption:(NSInteger)interval
                          deviceID:(NSString *)deviceID
                        macAddress:(NSString *)macAddress
                             topic:(NSString *)topic
                          sucBlock:(void (^)(id returnData))sucBlock
                       failedBlock:(void (^)(NSError *error))failedBlock;

/// Reboot.
/// @param deviceID deviceID,1-32 Characters
/// @param macAddress Mac address of the device
/// @param topic topic 1-128 Characters
/// @param sucBlock Success callback
/// @param failedBlock Failed callback
+ (void)sp_rebootDeviceWithDeviceID:(NSString *)deviceID
                         macAddress:(NSString *)macAddress
                              topic:(NSString *)topic
                           sucBlock:(void (^)(id returnData))sucBlock
                        failedBlock:(void (^)(NSError *error))failedBlock;

@end

NS_ASSUME_NONNULL_END
