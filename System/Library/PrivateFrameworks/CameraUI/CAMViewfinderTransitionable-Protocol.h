//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMPreviewView;

@protocol CAMViewfinderTransitionable
@property(readonly, nonatomic) long long desiredAspectRatio;
@property(readonly, nonatomic) CAMPreviewView *previewView;
- (void)prepareForResumingUsingCrossfade;
- (void)removeInflightBlurAnimations;
@end
