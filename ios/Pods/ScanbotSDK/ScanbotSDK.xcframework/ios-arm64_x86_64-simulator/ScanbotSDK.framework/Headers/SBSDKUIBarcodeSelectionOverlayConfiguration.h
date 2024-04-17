//
//  SBSDKUIBarcodeSelectionOverlayConfiguration.h
//  ScanbotSDK
//
//  Created by Sebastian Husche on 08.09.22.
//  Copyright © 2022 doo GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SBSDKBarcodeOverlayFormat.h"

NS_ASSUME_NONNULL_BEGIN

/** The configuration object for a barcode selection overlay. */
@interface SBSDKUIBarcodeSelectionOverlayConfiguration : NSObject

/**
 * Displays an augmented reality view that draws the frames, content and type text 
 * of the found barcodes when it finds them. Defaults to NO.
 */
@property (nonatomic, assign) BOOL overlayEnabled;

/**
 * If enabled, newly detected barcodes will be automatically selected.
 * Otherwise the user has to tap on a barcode on the selection overlay to select it.
 * Has no effect with disabled overlay.
 * Defaults to NO.
 */
@property (nonatomic, assign) BOOL automaticSelectionEnabled;

/**
 * The color for the results overlays polygons. The default color is a blueish green.
 */
@property (nonnull, nonatomic, strong) UIColor *polygonColor;

/**
 * The text color for the results overlays. The default color is black.
 */
@property (nonnull, nonatomic, strong) UIColor *textColor;

/**
 * The text background color for the results overlays. The default color is a blueish green.
 */
@property (nonnull, nonatomic, strong) UIColor *textContainerColor;

/**
 * The color for the results overlays polygons. The default color is red.
 */
@property (nonnull, nonatomic, strong) UIColor *highlightedPolygonColor;

/**
 * The text color for the results overlays. The default color is white.
 */
@property (nonnull, nonatomic, strong) UIColor *highlightedTextColor;

/**
 * The text background color for the results overlays. The default color is red.
 */
@property (nonnull, nonatomic, strong) UIColor *highlightedTextContainerColor;

/**
 * The text format for the results overlays. The default text format is SBSDKBarcodeOverlayFormatTypeCode.
 */
@property (nonatomic, assign) SBSDKBarcodeOverlayFormat overlayTextFormat;

@end

NS_ASSUME_NONNULL_END
