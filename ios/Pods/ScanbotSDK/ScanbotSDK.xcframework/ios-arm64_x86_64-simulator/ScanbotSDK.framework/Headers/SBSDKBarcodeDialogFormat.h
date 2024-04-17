//
//  SBSDKBarcodeFormat.h
//  ScanbotSDK
//
//  Created by Seifeddine Bouzid on 08.12.22.
//  Copyright © 2022 doo GmbH. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN
/** 
 * The barcode text format dialog.
 */
typedef NS_ENUM(NSInteger, SBSDKBarcodeDialogFormat) {
    /** Show the barcode value only. */
    SBSDKBarcodeDialogFormatCode = 0,
    /** Show the barcode type and value. */
    SBSDKBarcodeDialogFormatTypeAndCode = 1
};

NS_ASSUME_NONNULL_END
