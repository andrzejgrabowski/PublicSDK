//
//  GTFirmwareDownloadTaskManager.h
//  NewiOSTests
//
//  Created by JOSHUA M MAKINDA on 3/3/16.
//  Copyright © 2016 JOSHUA M MAKINDA. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GTFirmwareRetrieveProtocol.h"
#import "GTFirmwareInstallationProgressProtocol.h"

/// Handles tasks related to the download of firmware.
@interface GTFirmwareDownloadTaskManager : NSObject

/**
 ###Manager instance
 
 Use this for to create access the common instance of this class.
 
 @return Singleton instance
 */
+ (instancetype)manager;

/**
 ###Retrieved And Store Firmware
 
 Call this and pass in an object that conforms to the GTFirmwareRetrieveProtocol to retrieve and store firmware with a completion block
 
 @param retriever           object that conforms to GTFirmwareRetrieveProtocol
 @param retrievalCompletion completion block
 */
- (void)retrieveAndStoreFirmwareUsingRetriever:(id<GTFirmwareRetrieveProtocol>)retriever onCompletion:(RetrievalCompletion)retrievalCompletion;

/**
 ###Download Firmware Last Retrieved
 
 Call this and pass in an object that conforms to the GTFirmwareRetrieveProtocol to download the last retrieved firmware
 
 @param progressDelegate object that conforms to GTFirmwareInstallationProgressProtocol
 */
- (void)downloadLastRetrievedFirmwareWithProgressDelegate:(id<GTFirmwareInstallationProgressProtocol>)progressDelegate;

/**
 ###Is Installing Firmware
 
 Call this to check whether the GTFirmwareDownloadTaskManager is installing firmware
 
 @return BOOL
 */
- (BOOL)isInstallingFirmware;

@end
