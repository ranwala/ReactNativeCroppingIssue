//
//  SBSDKGenericDocumentRecognizerViewController.h
//  ScanbotSDK
//
//  Created by Sebastian Husche on 16.04.21.
//  Copyright © 2021 doo GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SBSDKGenericDocumentRecognizer.h"
#import "SBSDKBaseScannerViewController.h"

NS_ASSUME_NONNULL_BEGIN

@class SBSDKGenericDocumentRecognizerViewController;

/** The delegate protocol for the SBSDKGenericDocumentRecognizerViewController. */
@protocol SBSDKGenericDocumentRecognizerViewControllerDelegate <NSObject>

/**
 * Informs the delegate that a document has been recognized successfully.
 * @param controller The SBSDKGenericDocumentRecognizerViewController instance that recognized the document.
 * @param result The recognition result.
 * @param image The original image where the document has been recognized on.
 */
- (void)documentRecognizerViewController:(SBSDKGenericDocumentRecognizerViewController *)controller
                      didRecognizeResult:(SBSDKGenericDocumentRecognitionResult *)result
                                 onImage:(UIImage *)image;

@optional

/**
 * Asks the delegate if the generic document recognizer should scan the next video frame.
 * Optional.
 * @param controller The generic document recognizer view controller that will receive the video frame.
 * @return Return YES to run the recognition on the next video frame, NO otherwise. Can be used to pause the detection.
 */
- (BOOL)genericDocumentRecognizerViewControllerShouldRecognize:(nonnull SBSDKGenericDocumentRecognizerViewController *)controller;

@end


/**
 * A UIViewController subclass to recognize  documents, e.g. German passports, ID cards and driver's licenses on video frames.
 */
@interface SBSDKGenericDocumentRecognizerViewController : SBSDKBaseScannerViewController

/** The receivers delegate. */
@property (nullable, nonatomic, weak) id<SBSDKGenericDocumentRecognizerViewControllerDelegate> delegate;

/**
 * The accepted minimal sharpness score. Images with a score less than that will
 * be rejected with blurry status.
 *
 * 0 - any image will be accepted.
 * 80 - a good compromise; the recommended setting.
 * 100 - only very sharp images will be accepted.
 *
 * The default value is 80.
 */
@property (nonatomic, assign) CGFloat sharpnessAcceptanceFactor;

/**
 * The array of recognizable document types. 
 * If nil, all document types will be recognized.
 */
@property (nonnull, nonatomic, copy) NSArray<SBSDKGenericDocumentRootType *>* acceptedDocumentTypes;

/**
 * An array of normalized names for the document field types that should not be recognized. 
 * If nil all the fields are going to be recognized.
 */
@property (nullable, nonatomic, copy) NSArray<NSString *> *excludedFieldTypes;

/**
 * Installs the receiver as child view controller onto the parent view controllers view using its entire bounds area.
 * @param acceptedDocumentTypes Array of document types to be recognized. If nil, all document types will be recognized.
 * @param excludedFieldTypes An array of normalized names for the document field types that should not be recognized.
 * @param delegate The delegate of the receiver.
*/
- (nullable instancetype)initWithAcceptedDocumentTypes:(nullable NSArray<SBSDKGenericDocumentRootType*> *)acceptedDocumentTypes
                                    excludedFieldTypes:(nullable NSArray<NSString *> *)excludedFieldTypes
                                              delegate:(nullable id<SBSDKGenericDocumentRecognizerViewControllerDelegate>)delegate;

/**
 * Installs the receiver as child view controller onto the parent view controllers view using its entire bounds area.
 * @param parentViewController The view controller the newly created instance is embedded into.
 * @param parentView The view the newly created instance is embedded into.
 * @param delegate The delegate of the receiver.
*/
- (nullable instancetype)initWithParentViewController:(nonnull UIViewController *)parentViewController
                                           parentView:(nonnull UIView *)parentView
                                             delegate:(nullable id<SBSDKGenericDocumentRecognizerViewControllerDelegate>)delegate;

/**
 * Installs the receiver as child view controller onto the parent view controllers view using its entire bounds area.
 * @param parentViewController The view controller the newly created instance is embedded into.
 * @param parentView The view the newly created instance is embedded into.
 * @param acceptedDocumentTypes Array of document types to be recognized. If nil, all document types will be recognized.
 * @param excludedFieldTypes An array of normalized names for the document field types that should not be recognized.
 * @param delegate The delegate of the receiver.
*/
- (nullable instancetype)initWithParentViewController:(nonnull UIViewController *)parentViewController
                                           parentView:(nonnull UIView *)parentView
                                acceptedDocumentTypes:(nullable NSArray<SBSDKGenericDocumentRootType*> *)acceptedDocumentTypes
                                   excludedFieldTypes:(nullable NSArray<NSString *> *)excludedFieldTypes
                                             delegate:(nullable id<SBSDKGenericDocumentRecognizerViewControllerDelegate>)delegate;

/**
 * Resets the recognized-documents-accumulator.
 */
- (void)resetDocumentAccumulation;

@end

NS_ASSUME_NONNULL_END
