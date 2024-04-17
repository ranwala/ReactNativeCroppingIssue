//
//  SBSDKBarocdeOverlayFormatType.h
//  ScanbotSDK
//
//  Created by Seifeddine Bouzid on 29.11.22.
//  Copyright © 2022 doo GmbH. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN
/** 
 * The barcode text format overlay.
 */
typedef NS_ENUM(NSInteger, SBSDKBarcodeOverlayFormat) {
    /** Show only the barcode overlay frame. */
    SBSDKBarcodeOverlayFormatNone = 0,
    /** Show the barcode value. */
    SBSDKBarcodeOverlayFormatCode = 1,
    /** Show the barcode value with the barcode format. */
    SBSDKBarcodeOverlayFormatCodeAndType = 2
};

NS_ASSUME_NONNULL_END
