//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CameraUI/NSObject-Protocol.h>

@class CUCaptureController;

@protocol CAMCaptureInterruptionDelegate <NSObject>

@optional
- (void)captureControllerInterruptionEnded:(CUCaptureController *)arg1;
- (void)captureControllerWasInterrupted:(CUCaptureController *)arg1;
@end

