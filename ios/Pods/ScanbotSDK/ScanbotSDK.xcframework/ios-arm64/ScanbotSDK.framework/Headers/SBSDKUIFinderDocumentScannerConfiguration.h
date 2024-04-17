//
//  SBSDKUIFinderDocumentScannerConfiguration.h
//  SBSDK Internal Demo
//
//  Created by Yevgeniy Knizhnik on 3/1/18.
//  Copyright © 2018 doo GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SBSDKUIConfiguration.h"
#import "SBSDKUIFinderDocumentScannerUIConfiguration.h"
#import "SBSDKUIFinderDocumentScannerTextConfiguration.h"
#import "SBSDKUIFinderDocumentScannerBehaviorConfiguration.h"

/**
 * This class describes the look and feel, the behavior, as well as the textual contents of the detection
 * screen for documents.
 * Use the 'defaultConfiguration' class method to retrieve an instance and modify it.
 */
@interface SBSDKUIFinderDocumentScannerConfiguration : SBSDKUIConfiguration

/**
 * Designated initializer. Creates a new instance of 'SBSDKUIFinderDocumentScannerConfiguration' and returns it.
 * @param uiConfiguration A configuration for the user interface. Defines colors and sizes.
 * @param textConfiguration A configuration for text being displayed in the document scanning screen.
 * @param behaviorConfiguration A configuration for defining the behavior of the document scanning screen.
 * @param cameraConfiguration A configuration object for defining the camera of the document scanning screen.
 */
- (nonnull instancetype)initWithUIConfiguration:(nonnull SBSDKUIFinderDocumentScannerUIConfiguration *)uiConfiguration
                              textConfiguration:(nonnull SBSDKUIFinderDocumentScannerTextConfiguration *)textConfiguration
                         behaviorConfiguration:(nonnull SBSDKUIFinderDocumentScannerBehaviorConfiguration *)behaviorConfiguration
                            cameraConfiguration:(nonnull SBSDKUICameraConfiguration *)cameraConfiguration NS_DESIGNATED_INITIALIZER;

/**
 * The default configuration.
 * @return A mutable instance of 'SBSDKUIFinderDocumentScannerConfiguration' with default values.
 */
+ (nonnull SBSDKUIFinderDocumentScannerConfiguration *)defaultConfiguration;

/** The user interface subconfiguration. */
@property (nonnull, nonatomic, strong, readonly) SBSDKUIFinderDocumentScannerUIConfiguration *uiConfiguration;

/** The configuration for displayed texts. */
@property (nonnull, nonatomic, strong, readonly) SBSDKUIFinderDocumentScannerTextConfiguration *textConfiguration;

/** The configuration controlling the scanning screens behavior. */
@property (nonnull, nonatomic, strong, readonly) SBSDKUIFinderDocumentScannerBehaviorConfiguration *behaviorConfiguration;

@end
