//
//  SBSDKBarcodeScannerViewController.h
//  ScanbotSDK
//
//  Created by Yevgeniy Knizhnik on 29.11.19.
//  Copyright © 2019 doo GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SBSDKBaseScannerViewController.h"
#import "SBSDKBarcodeScanner.h"
#import "SBSDKBarcodeImageGenerationType.h"
#import "SBSDKBarcodeAdditionalParameters.h"
#import "SBSDKBarcodeOverlayFormat.h"

@class SBSDKBarcodeScannerViewController;
/**
 * A delegate protocol to customize the behavior, look and feel of the SBSDKBarcodeScannerViewControllerDelegate.
 */
@protocol SBSDKBarcodeScannerViewControllerDelegate <NSObject>

/**
 * Informs the delegate that the receiver has detected some barcodes.
 * If the receivers selectionOverlayEnabled property is set to YES and its automaticSelectionEnabled property is
 * set to NO, this method is not called unless the user taps on a barcode in the selection overlay.
 * @param controller The calling SBSDKBarcodeScannerViewController.
 * @param codes Array of SBSDKBarcodeScannerResult containing the detected barcodes.
 */
- (void)barcodeScannerController:(nonnull SBSDKBarcodeScannerViewController *)controller
               didDetectBarcodes:(nonnull NSArray<SBSDKBarcodeScannerResult *> *)codes;

@optional
/**
 * Asks the delegate if the receiver should detect barcodes on the next video frame.
 * Optional.
 * @param controller The calling SBSDKBarcodeScannerViewController.
 * @return YES, if barcodes should be detected on the next video frame. No otherwise.
 */
- (BOOL)barcodeScannerControllerShouldDetectBarcodes:(nonnull SBSDKBarcodeScannerViewController *)controller;

/**
 * Asks the delegate to filter the detected barcodes.
 * Optional.
 * @param controller The calling SBSDKBarcodeScannerViewController.
 * @param codes Array of SBSDKBarcodeScannerResult containing the detected barcodes.
 * @return The filtered array of barcodes to be delivered to the post-processing.
 */
- (nonnull NSArray<SBSDKBarcodeScannerResult *> *)barcodeScannerController:(nonnull SBSDKBarcodeScannerViewController *)controller 
                                                             filterResults:(nonnull NSArray<SBSDKBarcodeScannerResult *> *)codes;

/**
 * Asks the delegate whether to highlight a barcode on the selection overlay or not.
 * Called only if the receivers selectionOverlayEnabled property is set to YES and custom-cell mode is disabled.
 * @param controller The calling SBSDKBarcodeScannerViewController.
 * @param code The barcode scanner result that may be highlighted or not.
 * @return YES, if the provided barcode result should be highlighted on the selection overlay. NO otherwise.
 */
- (BOOL)barcodeScannerController:(nonnull SBSDKBarcodeScannerViewController *)controller 
           shouldHighlightResult:(nonnull SBSDKBarcodeScannerResult *)code;

/**
 * Asks the delegate for the string to be displayed for the given barcode result on the selection overlay.
 * Called only if the receivers selectionOverlayEnabled property is set to YES and custom-cell mode is disabled.
 * @param controller The calling SBSDKBarcodeScannerViewController.
 * @param code The barcode scanner result the returned text will be displayed for.
 * @return A string to be displayed on the selection overlay for the given barcode result. 
 * Return an empty, non-nil string of you want to display no text.
 * If you return nil, the text is automatically generated from the selectionOverlayTextFormat property.
 * Otherwise the setting of the selectionOverlayTextFormat property is ignored.
 */
- (nullable NSString *)barcodeScannerController:(nonnull SBSDKBarcodeScannerViewController *)controller
                        selectionOverlayTextFor:(nonnull SBSDKBarcodeScannerResult *)code;

/**
 * Informs the delegate that a barcode has been tapped on the barcode selection overlay.
 * Optional.
 * Called only if the receivers selectionOverlayEnabled property is set to YES and
 * its automaticSelectionEnabled property is set to NO.
 * @param controller The calling SBSDKBarcodeScannerViewController.
 * @param code The SBSDKBarcodeScannerResult the user has tapped on.
 */
- (void)barcodeScannerController:(nonnull SBSDKBarcodeScannerViewController *)controller 
                 didTapOnBarcode:(nonnull SBSDKBarcodeScannerResult *)code;


/**
 * Informs the delegate that the receiver has updated the detected barcodes.
 * Called only if the receivers selectionOverlayEnabled property is set to YES and
 * its automaticSelectionEnabled property is set to NO.
 * @param controller The calling SBSDKBarcodeScannerViewController.
 * @param codes Array of SBSDKBarcodeScannerResult containing the currently detected barcodes.
 */
- (void)barcodeScannerController:(nonnull SBSDKBarcodeScannerViewController *)controller 
       didUpdateDetectedBarcodes:(nonnull NSArray<SBSDKBarcodeScannerResult *> *)codes;

/**
 * Asks the delegate to configure your custom cell for a barcode. Only called in custom-cell mode.
 * Called only if the receivers selectionOverlayEnabled property is set to YES and custom-cell mode is enabled.
 * Must be implemented if custom-cell mode is enabled!
 * @param controller The calling SBSDKBarcodeScannerViewController.
 * @param cell The UICollectionViewCell to be configured with the barcode. Must be casted to your custom cells class.
 * @param code The barcode scanner result that should be represented by the cell.
 * @param path The UIBezierPath of the actual barcodes outline in the view space of the cell with an unmodified frame.
 */
- (void)barcodeScannerController:(nonnull SBSDKBarcodeScannerViewController *)controller
             configureCustomCell:(nonnull UICollectionViewCell *)cell
                      forBarcode:(nonnull SBSDKBarcodeScannerResult *)code
          withBarcodePolygonPath:(nonnull UIBezierPath *)path;

/**
 * Asks the delegate to modify the frame of a custom cell.
 * Called only if the receivers selectionOverlayEnabled property is set to YES and custom-cell mode is enabled.
 * @param controller The calling SBSDKBarcodeScannerViewController.
 * @param frame The proposed frame of a custom selection overlay cell in view space.
 * @return The final frame of the cell.
 */
- (CGRect)barcodeScannerController:(nonnull SBSDKBarcodeScannerViewController *)controller
   customCellFrameForProposedFrame:(CGRect)frame;

@end

NS_ASSUME_NONNULL_BEGIN


/**
 * A UIViewController subclass to show a camera screen with the barcode detector.
 * This class cannot be instanced from a storyboard.
 * Instead it is installing itself as a child view controller onto a given parent view controller.
 */
@interface SBSDKBarcodeScannerViewController : SBSDKBaseScannerViewController
/**
 * The delegate. See SBSDKBarcodeScannerViewControllerDelegate protocol. Weak.
 */
@property (nullable, nonatomic, weak) id<SBSDKBarcodeScannerViewControllerDelegate> delegate;

/**
 * Machine code types (EAN, DataMatrix, Aztec, QR, etc) that can be returned in `didDetectBarcodes`
 * delegate method. 
 * The default value is nil, the common code types are being detected; see [SBSBDKBarcodeType commonTypes]. 
 */
@property (nonatomic, strong, nullable) NSArray<SBSDKBarcodeType *> *acceptedBarcodeTypes;

/**
 * Additional parameters for tweaking the detection of barcodes.
 */
@property (nonatomic, strong, nonnull) SBSDKBarcodeAdditionalParameters *additionalDetectionParameters;

/**
 * Bar code document types to limit detection results to. When nil or empty - all document can be returned.
 * Default is nil.
 */
@property (nonatomic, strong, nullable) NSArray<SBSDKBarcodeDocumentType *> *acceptedDocumentTypes;

/**
 * The barcode detectors engine mode.
 * The default value is SBSDKBarcodeEngineModeNextGen.
 */
@property (nonatomic, assign) SBSDKBarcodeEngineMode engineMode;

/**
 Specifies the way of barcode images generation or disables this generation at all.
 Use, if you want to receive a full sized image with barcodes.
 Defaults to SBSDKBarcodeImageGenerationTypeNone.
 */
@property (nonatomic, assign) SBSDKBarcodeImageGenerationType barcodeImageGenerationType;

/**
 * Displays an augmented reality view that draws the frames, content and type text of the found barcodes when it finds them. 
 * Defaults to NO.
 */
@property (nonatomic, assign) BOOL selectionOverlayEnabled;

/**
 * If enabled, newly detected barcodes will be automatically selected and delivered to the delegate.
 * Otherwise the user has to tap on a barcode on the selection overlay to select it.
 * Defaults to NO.
 */
@property (nonatomic, assign) BOOL automaticSelectionEnabled;

/**
 * The color for the overlays polygons around the barcodes. The default color is a blueish green.
 */
@property (nonatomic, strong) UIColor *selectionPolygonColor;

/**
 * The color for the overlays polygons around the barcodes when highlighted. The default color is a blueish green.
 */
@property (nonatomic, strong) UIColor *selectionHighlightedPolygonColor;

/**
 * The text format for the selection overlay. The default text format is SBSDKBarcodeOverlayFormatTypeCode.
 * Has no effect if the delegate method barcodeScannerController:selectionOverlayTextFor: is implemented and returns a non-nil string.
 */
@property (nonatomic, assign) SBSDKBarcodeOverlayFormat selectionOverlayTextFormat;

/**
 * The text color for the selection overlay. The default color is black.
 */
@property (nonatomic, strong) UIColor *selectionTextColor;

/**
 * The text color for the selection overlay when highlighted. The default color is white.
 */
@property (nonatomic, strong) UIColor *selectionHighlightedTextColor;

/**
 * The background color for the selection overlay text. The default color is red.
 */
@property (nonatomic, strong) UIColor *selectionTextContainerColor;

/**
 * The background color for the selection overlay text when highlighted. The default color is red.
 */
@property (nonatomic, strong) UIColor *selectionHighlightedTextContainerColor;

/**
 * Installs the receiver as child view controller onto the parent view controllers view using its entire bounds area.
 * @param parentViewController The view controller the newly created instance is embedded into.
 * @param parentView The view the newly created instance is embedded into.
 * If parentViewController conforms to SBSDKBarcodeScannerViewControllerDelegate, it is automatically set as delegate.
 */
- (nullable instancetype)initWithParentViewController:(nonnull UIViewController *)parentViewController
                                           parentView:(nonnull UIView *)containerView;

/**
 * Installs the receiver as child view controller onto the parent view controllers view using its entire bounds area.
 * @param parentViewController The view controller the newly created instance is embedded into.
 * @param parentView The view the newly created instance is embedded into.
 * @param delegate The delegate for the receiver.
 * If parentViewController conforms to SBSDKBarcodeScannerViewControllerDelegate, it is automatically set as delegate.
 */
- (nullable instancetype)initWithParentViewController:(nonnull UIViewController *)parentViewController
                                           parentView:(nonnull UIView *)containerView
                                             delegate:(nullable id<SBSDKBarcodeScannerViewControllerDelegate>)delegate;

/**
 * Enables the custom-cell mode for the receivers selection overlay. Pass the nib and cell identifier for your custom
 * UICollectionViewCell. Your nib and cell identifier will be registered with the internal collection view and
 * cell instances will then be created automatically.
 * @param cellNib The UINib instance where your custom UICollectionViewCell is located.
 * @param cellIdentifier The cell identifier of your custom UICollectionViewCell.
 */
- (void)enableSelectionOverlayCustomCellMode:(nonnull UINib *)cellNib withIdentifier:(nonnull NSString *)cellIdentifier;

/**
 * Disabled the custom-cell mode for the receivers selection overlay and restores the usage of the default built-in cells.
 */
- (void)disableSelectionOverlayCustomCellMode;

@end

NS_ASSUME_NONNULL_END
