//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngineEvent, MPCPlaybackEngineEventStream, NSString;

__attribute__((visibility("hidden")))
@interface _MPCPlaybackEngineEventStreamCursor : NSObject
{
    unsigned long long _startNS;	// 8 = 0x8
    unsigned long long _endNS;	// 16 = 0x10
    MPCPlaybackEngineEventStream *_eventStream;	// 24 = 0x18
    MPCPlaybackEngineEvent *_startEvent;	// 32 = 0x20
    MPCPlaybackEngineEvent *_endEvent;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000015d40a
@property(readonly, nonatomic) MPCPlaybackEngineEvent *endEvent; // @synthesize endEvent=_endEvent;
@property(readonly, nonatomic) MPCPlaybackEngineEvent *startEvent; // @synthesize startEvent=_startEvent;
@property(readonly, nonatomic) MPCPlaybackEngineEventStream *eventStream; // @synthesize eventStream=_eventStream;
- (id)findPreviousEventWithTypes:(id)arg1 matchingPayload:(id)arg2;	// IMP=0x000000000015d112
- (id)findPreviousEventWithType:(id)arg1 matchingPayload:(id)arg2;	// IMP=0x000000000015d032
- (void)enumeratePreviousEventsWithTypes:(id)arg1 matchingPayload:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000015cc9e
- (void)enumeratePreviousEventsWithTypes:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000015cc82
- (void)enumeratePreviousEventsWithType:(id)arg1 matchingPayload:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000015cb11
- (void)enumeratePreviousEventsWithType:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000015c9d6
- (long long)countOfPreviousEventsWithTypes:(id)arg1 matchingPayload:(id)arg2;	// IMP=0x000000000015c869
- (long long)countOfPreviousEventsWithType:(id)arg1 matchingPayload:(id)arg2;	// IMP=0x000000000015c753
- (id)cursorFromEvent:(id)arg1 untilEvent:(id)arg2;	// IMP=0x000000000015c5c7
- (id)cursorUntilEvent:(id)arg1;	// IMP=0x000000000015c566
@property(readonly, copy) NSString *description;
- (id)initWithEventStream:(id)arg1 startEvent:(id)arg2 endEvent:(id)arg3;	// IMP=0x000000000015c344

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

