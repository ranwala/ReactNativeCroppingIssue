//
//  SBSDKSharingActivity.h
//  ScanbotSDK
//
//  Created by Sebastian Husche on 24.03.23.
//  Copyright © 2023 doo GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Shares files at the specified URLs using the UIActivityController. For debug and testing purposes.
 :nodoc:
 */
@interface SBSDKSharingActivity : NSObject

/**
 Shares files at the specified URLs using the UIActivityController. For debug and testing purposes.
 :nodoc:
 */
+ (void)shareFilesAtURLs:(NSArray<NSURL *> *)urls presenter:(UIViewController *)presenter;

@end

NS_ASSUME_NONNULL_END
