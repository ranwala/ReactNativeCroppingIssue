//
//  SBSDKHealthInsuranceCardScannerViewController.h
//  ScanbotSDK
//
//  Created by Danil Voitenko on 11.04.22.
//  Copyright © 2022 doo GmbH. All rights reserved.
//

#import "SBSDKBaseScannerViewController.h"
#import "SBSDKHealthInsuranceCardRecognizer.h"

NS_ASSUME_NONNULL_BEGIN

@class SBSDKHealthInsuranceCardScannerViewController;

/**
 * The delegation protocol for the `SBSDKHealthInsuranceCardScannerViewController` class.
 */
@protocol SBSDKHealthInsuranceCardScannerViewControllerDelegate <NSObject>

/**
 * Informs the delegate that a health insurance card has been scanned.
 * @param controller The SBSDKHealthInsuranceCardScannerViewController instance that scanned the health insurance card.
 * @param card The result of the scan.
 */
- (void)healthInsuranceCardScannerViewController:(SBSDKHealthInsuranceCardScannerViewController *)viewController
                      didScanHealthInsuranceCard:(SBSDKHealthInsuranceCardRecognitionResult *)card;

@optional

/**
 * Asks the delegate if the health insurance card scanner should scan the next video frame.
 * Optional.
 * @param controller The calling SBSDKHealthInsuranceCardScannerViewController.
 * @return Return YES to run the recognition on the next video frame, NO otherwise. Can be used to pause the detection.
 */
- (BOOL)healthInsuranceCardScannerViewControllerShouldRecognize:(nonnull SBSDKHealthInsuranceCardScannerViewController *)controller;

@end

/**
 * A UIViewController subclass to scan health insurance cards with the camera.
 */
@interface SBSDKHealthInsuranceCardScannerViewController : SBSDKBaseScannerViewController
/**
 * The delegate. See SBSDKHealthInsuranceCardScannerViewController protocol. Weak.
 */
@property(nullable, nonatomic, weak) id<SBSDKHealthInsuranceCardScannerViewControllerDelegate>delegate;

/**
 * Installs the receiver as child view controller onto the parent view controllers view using its entire bounds area.
 * @param parentViewController The view controller the newly created instance is embedded into.
 * @param parentView The view the newly created instance is embedded into. 
 * @param delegate The delegate of the receiver.
 * @return New instance of SBSDKHealthInsuranceCardScannerViewController.
*/
- (nullable instancetype)initWithParentViewController:(nonnull UIViewController *)parentViewController
                                           parentView:(nonnull UIView *)parentView
                                             delegate:(nullable id<SBSDKHealthInsuranceCardScannerViewControllerDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END

