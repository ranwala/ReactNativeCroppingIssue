//
//  SBSDKVideoFrameResolution.h
//  ScanbotSDK
//
//  Created by Sebastian Husche on 17.01.23.
//  Copyright © 2023 doo GmbH. All rights reserved.
//

#ifndef SBSDKVideoFrameResolution_h
#define SBSDKVideoFrameResolution_h

/** An enum describing the resolution of a video or camera stream. */
typedef enum: NSUInteger {
    
    /** Select the video resolution automatically between device specific, full HD and UHD. */
    SBSDKVideoFrameResolutionAuto,
    
    /** Select a full HD (1920x1080) video resolution. */
    SBSDKVideoFrameResolutionFullHD,
    
    /** Select a 4k UHD (3840x2160) video resolution. */
    SBSDKVideoFrameResolutionUHD,
    
} SBSDKVideoFrameResolution;


#endif /* SBSDKVideoFrameResolution_h */
