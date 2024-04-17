//
//  SBSDKUIFinderDocumentScannerUIConfiguration.h
//  SBSDK Internal Demo
//
//  Created by Yevgeniy Knizhnik on 3/1/18.
//  Copyright © 2018 doo GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SBSDKOrientationLock.h"
#import "SBSDKAspectRatio.h"

/** Configuration for the user interface of the document scanning screen. */
@interface SBSDKUIFinderDocumentScannerUIConfiguration : NSObject

/** Whether the view finder is enabled or not. */
@property (nonatomic) BOOL finderEnabled;

/** Foreground color of the detection overlay. */
@property (nonnull, nonatomic, strong) UIColor *finderLineColor;

/** Width of finder frame border. Default is 2. */
@property (nonatomic) CGFloat finderLineWidth;

/**
 * Aspect ratio of finder frame (width \ height), which is used to build actual finder frame.
 * Default is 1 - it is a square frame, which is good for QR capturing.
 */
@property (nonnull, nonatomic, strong) SBSDKAspectRatio *finderAspectRatio;

/** Background color of the top bar. */
@property (nonnull, nonatomic, strong) UIColor *topBarBackgroundColor;

/** Foreground color of disabled items in the top bar. */
@property (nonnull, nonatomic, strong) UIColor *topBarButtonsInactiveColor;

/** Foreground color of enabled items in the top bar. */
@property (nonnull, nonatomic, strong) UIColor *topBarButtonsActiveColor;

/** Whether the flash button is hidden or not. */
@property (nonatomic, assign, getter=isFlashButtonHidden) BOOL flashButtonHidden;

/**
 * Hides the shutter button if set to YES. Shows it otherwise. Defaults to NO.
 * If set to YES, auto-snapping is enabled and the property autoSnappingEnabled of the behavior configuration will
 * have no effect.
 * Also the auto-snapping button will be hidden.
 */
@property (nonatomic, assign, getter=isShutterButtonHidden) BOOL shutterButtonHidden;

/** Color of the shutter buttons outer ring in auto-capture mode. */
@property (nonnull, nonatomic, strong) UIColor *shutterButtonAutoOuterColor;

/** Color of the shutter buttons inner ring in auto-capture mode. */
@property (nonnull, nonatomic, strong) UIColor *shutterButtonAutoInnerColor;

/** Color of the shutter buttons outer ring in manual-capture mode. */
@property (nonnull, nonatomic, strong) UIColor *shutterButtonManualOuterColor;

/** Color of the shutter buttons inner ring in manual-capture mode. */
@property (nonnull, nonatomic, strong) UIColor *shutterButtonManualInnerColor;

/** Color of the shutter buttons activity indicator when capturing an image. */
@property (nonnull, nonatomic, strong) UIColor *shutterButtonIndicatorColor;

/** Background color of the camera view. **/
@property (nonnull, nonatomic, strong) UIColor *cameraBackgroundColor;

/** Overlay color of the camera view. **/
@property (nonnull, nonatomic, strong) UIColor *cameraOverlayColor;

/** Whether displaying of the polygon is enabled or not. **/
@property (nonatomic, assign) BOOL polygonEnabled;

/** Foreground color of the detected documents polygon, when the polygons quality is acceptable. **/
@property (nonnull, nonatomic, strong) UIColor *polygonColorOK;

/** Foreground color of the detected documents polygon, when the polygons quality is not acceptable. **/
@property (nonnull, nonatomic, strong) UIColor *polygonColor;

/** Background color of the detected documents polygon, when the polygons quality is acceptable. **/
@property (nonnull, nonatomic, strong) UIColor *polygonBackgroundColorOK;

/** Background color of the detected documents polygon, when the polygons quality is not acceptable. **/
@property (nonnull, nonatomic, strong) UIColor *polygonBackgroundColor;

/** Width of the detected documents polygon in points. */
@property (nonatomic, assign) CGFloat polygonLineWidth;

/**
 * The radius to use when drawing rounded corners of the detected documents polygon. Default is 8.0.
 */
@property (nonatomic, assign) CGFloat polygonCornerRadius;

/** Background color of the user guidance label. */
@property (nonnull, nonatomic, strong) UIColor *userGuidanceBackgroundColor;

/** Foreground/text color of the user guidance label. */
@property (nonnull, nonatomic, strong) UIColor *userGuidanceTextColor;

/** Allowed orientations for automatic interface rotations. **/
@property (nonatomic, assign) SBSDKOrientationLock orientationLockMode;

/** Stroke color of polygon auto snap progress animation. */
@property (nonnull, nonatomic, strong) UIColor *autoSnapProgressColor;

/** Line width of polygon auto snap progress animation. Default is 5.0. */
@property (nonatomic, assign) CGFloat autoSnapProgressLineWidth;

/** Whether polygon auto snap progress animation is enabled or no. Default is enabled.*/
@property (nonatomic, assign, getter=isAutoSnapProgressEnabled) BOOL autoSnapProgressEnabled;

@end
