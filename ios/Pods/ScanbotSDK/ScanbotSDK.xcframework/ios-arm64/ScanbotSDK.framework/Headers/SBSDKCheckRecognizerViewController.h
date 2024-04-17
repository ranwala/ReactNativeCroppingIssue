//
//  SBSDKCheckRecognizerViewController.h
//  ScanbotSDK
//
//  Created by Seifeddine Bouzid on 12.04.22.
//  Copyright © 2022 doo GmbH. All rights reserved.
//
#import <UIKit/UIKit.h>

#import "SBSDKBaseScannerViewController.h"
#import "SBSDKCheckRecognizerResult.h"

NS_ASSUME_NONNULL_BEGIN

@class SBSDKCheckRecognizerViewController;

/**
 * The live recognition state of the check recognizer.
 */
typedef NS_ENUM(NSUInteger, SBSDKCheckRecognizerState) {
    /** The check scanner searches for a check. */
    SBSDKCheckRecognizerStateSearching,
    
    /** The check scanner recognizes a check. */
    SBSDKCheckRecognizerStateRecognizing,
    
    /** The check scanner captures a high-res photo of a check. */
    SBSDKCheckRecognizerStateCapturing,
    
    /** The check scanner is in energy saving mode. */
    SBSDKCheckRecognizerStateEnergySaving,
    
    /** The check scanner paused the detection and recognition. */
    SBSDKCheckRecognizerStatePaused
};

/**
 * The delegation protocol for the `SBSDKCheckRecognizerViewController` class.
 */
@protocol SBSDKCheckRecognizerViewControllerDelegate <NSObject>

/**
 * Informs the delegate, that the check scanner has successfully
 * detected and recognized a check.
 * @param controller The check scanner viewcontroller which recognized the check.
 * @param result The check scanner result that have been recognized.
 */
- (void)checkRecognizerViewController:(SBSDKCheckRecognizerViewController *)controller 
                    didRecognizeCheck:(SBSDKCheckRecognizerResult *)result;

@optional
/**
 * Optional.
 * Informs the delegate, that the check scanner has changed its detection/recognition state.
 * @param controller The check scanner viewcontroller that changed its state.
 * @param state The current state of the check scanner.
 */
- (void)checkRecognizerViewController:(SBSDKCheckRecognizerViewController *)controller
                       didChangeState:(SBSDKCheckRecognizerState)state;

@optional

/**
 * Asks the delegate if the check recognizer should scan the next video frame.
 * Optional.
 * @param controller The calling SBSDKCheckRecognizerViewController.
 * @return Return YES to run the recognition on the next video frame, NO otherwise. Can be used to pause the detection.
 */
- (BOOL)checkRecognizerViewControllerShouldRecognize:(nonnull SBSDKCheckRecognizerViewController *)controller;

@end


/**
 * Classic UI view controller that can be used to detect and recognize bank checks. Can be configured to
 * recognize on video frames or, for better accuracy, on high-res photos that are automatically captured.
 */
@interface SBSDKCheckRecognizerViewController : SBSDKBaseScannerViewController

/** The current state of the check scanner. */
@property(nonatomic, readonly) SBSDKCheckRecognizerState state;

/** An array of accepted check types. By default all check types are allowed. */
@property(nonatomic, copy) NSArray<SBSDKCheckDocumentRootType *>* acceptedCheckTypes;

/**
 * If set to YES a high-resolution photo of the check is captured to run the recognition on.
 * Upon successful recognition the recognition result also contains a high-resolution image of the check.
 * If set to NO, the video frames will be used for recognition and result image delivery.
 * The default value is YES.
 */
@property(nonatomic, assign) BOOL captureHighResolutionImage;

/**
 * If set to YES, check recognition results that failed their validation will not be provided to the delegate.
 * Set to NO, if you are interested also in invalid results. The default value is YES. 
 */
@property(nonatomic, assign) BOOL ignoreInvalidResults;

/** The delegate of the receiver. */
@property(nullable, nonatomic, weak) id<SBSDKCheckRecognizerViewControllerDelegate>delegate;

/**
 * Installs the receiver as child view controller onto the parent view controllers view using its entire bounds area.
 * @param parentViewController The view controller the newly created instance is embedded into.
 * @param parentView The view the newly created instance is embedded into.
 * @param delegate The delegate of the receiver.
 * @return New instance of SBSDKCheckRecognizerViewController.
 */
- (nullable instancetype)initWithParentViewController:(nonnull UIViewController *)parentViewController
                                           parentView:(nonnull UIView *)parentView
                                             delegate:(nullable id<SBSDKCheckRecognizerViewControllerDelegate>)delegate;
@end

NS_ASSUME_NONNULL_END

