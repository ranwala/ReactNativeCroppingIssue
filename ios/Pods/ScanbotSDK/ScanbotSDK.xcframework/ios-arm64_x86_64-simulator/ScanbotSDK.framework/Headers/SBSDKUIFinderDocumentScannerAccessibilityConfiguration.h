//
//  SBSDKUIFinderDocumentScannerAccessibilityConfiguration.h
//  ScanbotSDK
//
//  Created by Yevgeniy Knizhnik on 16.03.21.
//  Copyright © 2021 doo GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

/** Configuration for the accessibility labels and hints. */
@interface SBSDKUIFinderDocumentScannerAccessibilityConfiguration : NSObject

/** Text, that is used as an accessibility label for the flash button. The default value is "Flash". */
@property (nullable, nonatomic, strong) NSString *flashButtonAccessibilityLabel;

/** Text, that is used as an accessibility hint for the flash button. The default value is "Turns the flashlight on or off". */
@property (nullable, nonatomic, strong) NSString *flashButtonAccessibilityHint;

/** Text, that is used as an accessibility label for the cancel button. The default value is "Cancel". */
@property (nullable, nonatomic, strong) NSString *cancelButtonAccessibilityLabel;

/** Text, that is used as an accessibility hint for the cancel button. The default value is "Dismisses the screen". */
@property (nullable, nonatomic, strong) NSString *cancelButtonAccessibilityHint;

/** Text, that is used as an accessibility label for the shutter button. The default value is "Shutter release". */
@property (nullable, nonatomic, strong) NSString *shutterButtonAccessibilityLabel;

/** Text, that is used as an accessibility hint for the shutter button. The default value is "Makes a scan". */
@property (nullable, nonatomic, strong) NSString *shutterButtonAccessibilityHint;

@end
