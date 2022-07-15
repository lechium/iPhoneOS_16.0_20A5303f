//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, SHSignature;
@protocol OS_dispatch_source, SHMediaTimelineDelegate;

__attribute__((visibility("hidden")))
@interface SHMediaTimeline : NSObject
{
    _Bool _finished;	// 8 = 0x8
    id <SHMediaTimelineDelegate> _delegate;	// 16 = 0x10
    SHSignature *_querySignature;	// 24 = 0x18
    NSArray *_mediaItems;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_timerDispatchSource;	// 40 = 0x28
}

+ (double)nextEventForRange:(id)arg1 atMatchOffset:(double)arg2;	// IMP=0x006000000000cf25
+ (double)countdownForMatchedMediaItem:(id)arg1;	// IMP=0x006000000000cc0d
+ (id)blankMediaItemWhenNothingIsInScope:(id)arg1;	// IMP=0x006000000000c9d7
- (void).cxx_destruct;	// IMP=0x000000000000d015
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timerDispatchSource; // @synthesize timerDispatchSource=_timerDispatchSource;
@property(readonly, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(readonly, nonatomic) SHSignature *querySignature; // @synthesize querySignature=_querySignature;
@property(nonatomic) __weak id <SHMediaTimelineDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
- (id)earliestInscopeRangeForMatchedMediaItem:(id)arg1;	// IMP=0x000000000000c7b0
- (id)sortMediaItems:(id)arg1;	// IMP=0x000000000000c5b5
@property(readonly, nonatomic) NSArray *inScopeMediaItems;
@property(readonly, nonatomic) NSNumber *timeToNextMediaItemScopeChange;
- (void)cancelTimerSource;	// IMP=0x000000000000c03d
- (void)startTimerForNextEvent;	// IMP=0x000000000000bda5
- (_Bool)finished;	// IMP=0x000000000000bd72
- (void)stopGenerating;	// IMP=0x000000000000bd60
- (void)startGenerating;	// IMP=0x000000000000bd4e
- (id)initWithMatch:(id)arg1;	// IMP=0x000000000000bbd7
- (void)dealloc;	// IMP=0x000000000000bb99

@end
