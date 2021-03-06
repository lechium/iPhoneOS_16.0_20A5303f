//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCMediaFoundationTranslator;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface MPCItemBookmarker : NSObject
{
    MPCMediaFoundationTranslator *_translator;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_bookmarkingTimer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001a9768
@property(retain, nonatomic) NSObject<OS_dispatch_source> *bookmarkingTimer; // @synthesize bookmarkingTimer=_bookmarkingTimer;
@property(retain, nonatomic) MPCMediaFoundationTranslator *translator; // @synthesize translator=_translator;
- (void)_teardownBookmarkingTimer;	// IMP=0x00000000001a96ad
- (void)_setupBookmarkingTimerForItem:(id)arg1;	// IMP=0x00000000001a946e
- (void)updateDurationSnapshotWithTime:(double)arg1 forItem:(id)arg2 rate:(float)arg3;	// IMP=0x00000000001a9356
- (void)playbackStateDidChangeFromState:(long long)arg1 toState:(long long)arg2 forItem:(id)arg3 time:(double)arg4 rate:(float)arg5;	// IMP=0x00000000001a91f2
- (void)playbackRateDidChangeToRate:(float)arg1 forItem:(id)arg2 time:(double)arg3;	// IMP=0x00000000001a90de
- (void)playbackDidStopForItem:(id)arg1 time:(double)arg2;	// IMP=0x00000000001a8fe0
- (void)playbackDidStartForItem:(id)arg1 time:(double)arg2 rate:(float)arg3;	// IMP=0x00000000001a8e2e
- (void)itemDidPlayToEnd:(id)arg1 time:(double)arg2;	// IMP=0x00000000001a8d5e
- (void)itemDidResignCurrent:(id)arg1 time:(double)arg2;	// IMP=0x00000000001a8d4c
- (void)itemDidBecomeCurrent:(id)arg1 time:(double)arg2;	// IMP=0x00000000001a8ba0
- (void)currentItemWillChangeFromItem:(id)arg1 toItem:(id)arg2 time:(double)arg3;	// IMP=0x00000000001a875a
- (void)userDidSkipDuringPlaybackFromItem:(id)arg1 direction:(long long)arg2;	// IMP=0x00000000001a864d
- (id)initWithTranslator:(id)arg1;	// IMP=0x00000000001a85e2

@end

