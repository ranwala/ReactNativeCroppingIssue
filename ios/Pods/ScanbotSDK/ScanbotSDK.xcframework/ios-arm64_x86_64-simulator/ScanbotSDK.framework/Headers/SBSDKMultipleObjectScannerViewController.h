//
//  SBSDKMultipleObjectScannerViewController.h
//  ScanbotSDKBeta
//
//  Created by Yevgeniy Knizhnik on 11/27/18.
//  Copyright © 2018 doo GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SBSDKBaseScannerViewController.h"
#import "SBSDKImageStoring.h"
#import "SBSDKAspectRatioRange.h"
#import "SBSDKStorageCrypting.h"

@class SBSDKMultipleObjectScannerViewController;

/** The delegate protocol for SBSDKMultipleObjectScannerViewController. */
@protocol SBSDKMultipleObjectScannerViewControllerDelegate <NSObject>
@optional

/**
 * Asks the delegate whether to detect on the next video frame or not.
 * Return NO if you don't want detection on video frames, e.g. when a view controller is presented modally or when your
 * view controller's view currently is not in the view hierarchy.
 * @param controller The calling SBSDKMultipleObjectScannerViewController.
 * @return YES if the video frame should be analyzed, NO otherwise.
 */
- (BOOL)scannerControllerShouldAnalyseVideoFrame:(nonnull SBSDKMultipleObjectScannerViewController *)controller;

/**
 * Tells the delegate that a still image is about to be captured. Here you can change the appearance of you custom
 * shutter button or HUD to reflect in the UI that we are now busy taking an image.
 * @param controller The calling SBSDKMultipleObjectScannerViewController.
 */
- (void)scannerControllerWillCaptureImage:(nonnull SBSDKMultipleObjectScannerViewController *)controller;

/**
 * Tells the delegate that a still image has been captured and its orientation has been corrected. Optional.
 * @param controller The calling SBSDKMultipleObjectScannerViewController.
 * @param originalImage The whole captured image.
 */
- (void)scannerController:(nonnull SBSDKMultipleObjectScannerViewController *)controller
  didCaptureOriginalImage:(nonnull UIImage *)originalImage;


/**
 * Tells the delegate that object images have been captured and placed into the image storage. Optional.
 * @param controller The calling SBSDKMultipleObjectScannerViewController.
 * @param imageStorage The image storage containing the captured object images.
 */
- (void)scannerController:(nonnull SBSDKMultipleObjectScannerViewController *)controller
didCaptureObjectImagesInStorage:(nonnull id<SBSDKImageStoring>)imageStorage;

/**
 * Asks the delegate for custom shutter release button. Optional.
 * @param controller The calling SBSDKMultipleObjectScannerViewController.
 * @return An instance of your custom shutter release button. Target and action are set automatically by controller.
 * If you return nil, the built-in standard button is used.
 */
- (nullable UIButton *)scannerControllerCustomShutterButton:(nonnull SBSDKMultipleObjectScannerViewController *)controller;
@end


/** A UIViewController subclass to scan multiple objects on a single captured still image. **/
@interface SBSDKMultipleObjectScannerViewController : SBSDKBaseScannerViewController
/**
 * The delegate. See SBSDKMultipleObjectScannerViewController protocol. Weak.
 */
@property (nullable, nonatomic, weak) id<SBSDKMultipleObjectScannerViewControllerDelegate> delegate;

/**
 * Hides or unhides the shutter button.
 */
@property (nonatomic, assign) BOOL shutterButtonHidden;

/**
 * Defines aspect ratio range. Only objects that are within this range will be detected. The default range is `1:2 - 2:1`.;
 */
@property (nonatomic, strong, nonnull) SBSDKAspectRatioRange *aspectRatioRange;

/** Foreground color of the detected objects polygon. */
@property (nonnull, nonatomic, strong) UIColor *polygonColor;

/** Background color of the detected objects polygon, when the polygons quality is not acceptable. */
@property (nonnull, nonatomic, strong) UIColor *polygonBackgroundColor;

/** Width of the detected objects polygon in points. */
@property (nonatomic, assign) CGFloat polygonLineWidth;

/** The encrypter object to encrypt/decrypt stored images. If nil, no encryption or decryption takes place. */
@property (nullable, nonatomic, readonly) id<SBSDKStorageCrypting> encrypter;


/**
 * Creates a new instance of SBSDKMultipleObjectScannerViewController.
 * @param encrypter The encrypter object to encrypt/decrypt stored images. If nil, no encryption or decryption takes place.
 * @param delegate The delegate of the receiver. If nil and parentViewController conforms to the 
 * SBSDKMultipleObjectScannerViewControllerDelegate protocol, the parentViewController is automatically set 
 * as delegate.
 */
- (nullable instancetype)initWithEncrypter:(nullable id<SBSDKStorageCrypting>)encrypter
                                  delegate:(nullable id<SBSDKMultipleObjectScannerViewControllerDelegate>)delegate;

/**
 * Installs the receiver as child view controller onto the parent view controllers view using its entire bounds area.
 * @param parentViewController The view controller the newly created instance is embedded into.
 * @param parentView The view the newly created instance is embedded into.
 * @param delegate The delegate of the receiver. If nil and parentViewController conforms to the 
 * SBSDKMultipleObjectScannerViewControllerDelegate protocol, the parentViewController is automatically set 
 * as delegate.
 */
- (nullable instancetype)initWithParentViewController:(nonnull UIViewController *)parentViewController
                                           parentView:(nonnull UIView *)parentView
                                             delegate:(nullable id<SBSDKMultipleObjectScannerViewControllerDelegate>)delegate;

/**
 * Installs the receiver as child view controller onto the parent view controllers view using its entire bounds area.
 * @param parentViewController The view controller the newly created instance is embedded into.
 * @param parentView The view the newly created instance is embedded into.
 * @param encrypter The encrypter object to encrypt/decrypt stored images. If nil, no encryption or decryption takes place.
 * @param delegate The delegate of the receiver. If nil and parentViewController conforms to the 
 * SBSDKMultipleObjectScannerViewControllerDelegate protocol, the parentViewController is automatically set as 
 * delegate.
 */
- (nullable instancetype)initWithParentViewController:(nonnull UIViewController *)parentViewController
                                           parentView:(nonnull UIView *)parentView
                                            encrypter:(nullable id<SBSDKStorageCrypting>)encrypter
                                             delegate:(nullable id<SBSDKMultipleObjectScannerViewControllerDelegate>)delegate;

@end
