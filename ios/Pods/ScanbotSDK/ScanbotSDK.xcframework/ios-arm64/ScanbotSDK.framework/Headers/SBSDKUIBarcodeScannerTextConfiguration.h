//
//  SBSDKUIBarcodeScannerTextConfiguration.h
//  ScanbotSDKBundle
//
//  Created by Yevgeniy Knizhnik on 4/17/18.
//  Copyright © 2018 doo GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SBSDKUIEnableCameraTextConfiguration.h"

/**
 * Configuration for the textual contents of the detector screens for barcodes.
 */
@interface SBSDKUIBarcodeScannerTextConfiguration : SBSDKUIEnableCameraTextConfiguration

/** String being displayed as description. */
@property (nonnull, nonatomic, strong) NSString *finderTextHint;

/** String being displayed on the flash button. */
@property (nullable, nonatomic, strong) NSString *flashButtonTitle;

/** String being displayed on the cancel button. */
@property (nullable, nonatomic, strong) NSString *cancelButtonTitle;

/** The title of the confirmation dialog retry button. */
@property (nonnull, nonatomic, strong) NSString *confirmationDialogRetryButtonTitle;

/** The title of the confirmation dialog confirm button. */
@property (nonnull, nonatomic, strong) NSString *confirmationDialogConfirmButtonTitle;

@end
