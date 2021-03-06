//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CameraUI/NSObject-Protocol.h>

@protocol CAMStillImageCapturingVideoDelegate <NSObject>

@optional
- (void)stillImageRequestsDidStopCapturingCTMVideo;
- (void)stillImageRequestWillStartCapturingCTMVideoWithCaptureInFlight:(_Bool)arg1;
- (void)stillImageRequestsWillRequestCTMVideoCaptureEnd;
- (void)stillImageRequestsWillRequestCTMVideoCaptureStart;
- (void)stillImageRequestsDidCompleteCapturingLivePhotoVideo;
- (void)stillImageRequestsWillStartCapturingLivePhotoVideo;
@end

