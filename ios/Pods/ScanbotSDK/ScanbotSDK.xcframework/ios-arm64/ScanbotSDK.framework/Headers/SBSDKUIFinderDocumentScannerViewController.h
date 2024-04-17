//
//  SBSDKUIFinderDocumentScannerViewController.h
//  SBSDK Internal Demo
//
//  Created by Yevgeniy Knizhnik on 2/28/18.
//  Copyright © 2018 doo GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SBSDKUIFinderDocumentScannerConfiguration.h"
#import "SBSDKUIViewController.h"
#import "SBSDKUIDocument.h"
#import "SBSDKUICameraViewController.h"

@class SBSDKUIFinderDocumentScannerViewController;

/** Delegate protocol for 'SBSDKUIFinderDocumentScannerViewController'. */
@protocol SBSDKUIFinderDocumentScannerViewControllerDelegate <SBSDKUIViewControllerDelegate>
/**
 * Informs the delegate that the document scanning view controller has scanned document pages
 * and the view controller has dismissed.
 * @param viewController The 'SBSDKUIFinderDocumentScannerViewController' which generated the scanned pages and dismissed.
 * @param document The document containing the scanned pages.
 */
- (void)finderScanningViewController:(nonnull SBSDKUIFinderDocumentScannerViewController *)viewController
                   didFinishWithDocument:(nonnull SBSDKUIDocument *)document;

@optional
/**
 * Optional: informs the delegate that the 'SBSDKUIFinderDocumentScannerViewController' has been cancelled and dismissed.
 * @param viewController The 'SBSDKUIFinderDocumentScannerViewController' that did dismiss.
 */
- (void)finderScanningViewControllerDidCancel:(nonnull SBSDKUIFinderDocumentScannerViewController *)viewController;

@end

/**
 * A highly customizable camera-based view controller to scan a single documents of a certain aspect ratio.
 * An edge-detection based algorithm finds documents in the camera stream within the view finder.
 * A manual or automatic high resolution snapshot can be made. Based on the detected area of the document in the photo,
 * the photo is cropped and perspective-corrected, so that a nice flattened image of the document only is created.
 */
@interface SBSDKUIFinderDocumentScannerViewController : SBSDKUICameraViewController

/**
 * Creates a new instance of 'SBSDKUIFinderDocumentScannerViewController' and presents it modally.
 * @param presenter The view controller the new instance should be presented on.
 * @param document The document to which the scanned pages will be added. If nil the receiver creates a new document.
 * @param configuration The configuration to define look and feel of the new scanning view controller.
 * @param delegate The delegate of the new scanning view controller.
 * @return A new instance of 'SBSDKUIFinderDocumentScannerViewController'.
 */
+ (nonnull instancetype)presentOn:(nonnull UIViewController *)presenter
                     withDocument: (nullable SBSDKUIDocument *)document
                withConfiguration:(nonnull SBSDKUIFinderDocumentScannerConfiguration *)configuration
                      andDelegate:(nullable id<SBSDKUIFinderDocumentScannerViewControllerDelegate>)delegate;

/**
 * Creates a new instance of 'SBSDKUIFinderDocumentScannerViewController' and presents it modally. Creates a new
 * 'SBSDKUIDocument' instance.
 * @param presenter The view controller the new instance should be presented on.
 * @param configuration The configuration to define look and feel of the new scanning view controller.
 * @param delegate The delegate of the new scanning view controller.
 * @return A new instance of 'SBSDKUIFinderDocumentScannerViewController'.
 */
+ (nonnull instancetype)presentOn:(nonnull UIViewController *)presenter
                withConfiguration:(nonnull SBSDKUIFinderDocumentScannerConfiguration *)configuration
                      andDelegate:(nullable id<SBSDKUIFinderDocumentScannerViewControllerDelegate>)delegate;

/**
 * Creates a new instance of 'SBSDKUIFinderDocumentScannerViewController'.
 * @param document The document to which the scanned pages will be added. If nil the receiver creates a new document.
 * @param configuration The configuration to define look and feel of the new scanning view controller.
 * @param delegate The delegate of the new scanning view controller.
 * @return A new instance of 'SBSDKUIFinderDocumentScannerViewController'.
 */
+ (nonnull instancetype)createNewWithDocument:(nullable SBSDKUIDocument *)document
                                configuration:(nonnull SBSDKUIFinderDocumentScannerConfiguration *)configuration
                                  andDelegate:(nullable id<SBSDKUIFinderDocumentScannerViewControllerDelegate>)delegate;

/**
 * Creates a new instance of 'SBSDKUIFinderDocumentScannerViewController'. Generates a new instance of 'SBSDKUIDocument'.
 * @param configuration The configuration to define look and feel of the new scanning view controller.
 * @param delegate The delegate of the new scanning view controller.
 * @return A new instance of 'SBSDKUIFinderDocumentScannerViewController'.
 */
+ (nonnull instancetype)createNewWithConfiguration:(nonnull SBSDKUIFinderDocumentScannerConfiguration *)configuration
                                       andDelegate:(nullable id<SBSDKUIFinderDocumentScannerViewControllerDelegate>)delegate;

/** The receivers delegate. */
@property (nullable, nonatomic, weak) id <SBSDKUIFinderDocumentScannerViewControllerDelegate> delegate;

@end
