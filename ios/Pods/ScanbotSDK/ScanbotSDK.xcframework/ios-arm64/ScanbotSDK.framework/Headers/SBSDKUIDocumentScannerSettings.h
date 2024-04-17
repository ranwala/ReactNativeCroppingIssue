//
//  SBSDKUIDocumentScannerSettings.h
//  ScanbotSDK
//
//  Created by Sebastian Husche on 17.04.23.
//  Copyright © 2023 doo GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * A snapshot of the current settings of an SBSDKUIDocumentScannerViewControllers instance.
 * Can be used to persist and restore changes made by the user.  
 */
@interface SBSDKUIDocumentScannerSettings : NSObject

/** Whether the flash light is enabled or not. */
@property (nonatomic, assign) BOOL flashEnabled;

/** Whether multi-page capturing is enabled or not. */
@property (nonatomic, assign) BOOL multiPageEnabled;

/** Whether automatic image capturing is enabled or not. */
@property (nonatomic, assign) BOOL autoSnappingEnabled;

@end

NS_ASSUME_NONNULL_END
