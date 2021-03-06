//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class NSError;
@protocol MPCVideoOutput, UIViewControllerTransitionCoordinator;

@protocol MPCVideoOutputDelegate <NSObject>

@optional
- (_Bool)videoOutputShouldDismiss:(id <MPCVideoOutput>)arg1;
- (void)videoOutput:(id <MPCVideoOutput>)arg1 failedToStartPictureInPictureWithError:(NSError *)arg2;
- (void)videoOutputDidStopPictureInPicture:(id <MPCVideoOutput>)arg1;
- (void)videoOutputWillStopPictureInPicture:(id <MPCVideoOutput>)arg1;
- (void)videoOutputDidStartPictureInPicture:(id <MPCVideoOutput>)arg1;
- (void)videoOutputWillStartPictureInPicture:(id <MPCVideoOutput>)arg1;
- (_Bool)videoOutputShouldAutomaticallyDismissAtPictureInPictureStart:(id <MPCVideoOutput>)arg1;
- (void)videoOutput:(id <MPCVideoOutput>)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (void)videoOutput:(id <MPCVideoOutput>)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
@end

