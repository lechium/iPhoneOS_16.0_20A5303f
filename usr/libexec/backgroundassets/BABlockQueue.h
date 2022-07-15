//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableOrderedSet, NSString;

@interface BABlockQueue : NSObject
{
    _Bool _awaitingBlockCompletion;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    unsigned long long _queueRetainCount;	// 24 = 0x18
    NSLock *_blockQueueLock;	// 32 = 0x20
    NSMutableOrderedSet *_blockQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000000ab06
@property(nonatomic) _Bool awaitingBlockCompletion; // @synthesize awaitingBlockCompletion=_awaitingBlockCompletion;
@property(readonly, nonatomic) NSMutableOrderedSet *blockQueue; // @synthesize blockQueue=_blockQueue;
@property(readonly, nonatomic) NSLock *blockQueueLock; // @synthesize blockQueueLock=_blockQueueLock;
@property(readonly, nonatomic) unsigned long long queueRetainCount; // @synthesize queueRetainCount=_queueRetainCount;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_decrement;	// IMP=0x001000000000aa76
- (void)_increment;	// IMP=0x001000000000aa6c
- (void)drain;	// IMP=0x001000000000a968
- (_Bool)drainSpecificWithToken:(id)arg1;	// IMP=0x001000000000a632
- (_Bool)consumeToken:(id)arg1;	// IMP=0x001000000000a324
- (void)_dequeueNext;	// IMP=0x001000000000a17b
- (void)enqueue:(CDUnknownBlockType)arg1 waitLimitDate:(id)arg2;	// IMP=0x0010000000009e7f
- (void)enqueue:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009dc3
- (id)__enqueue:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009c8f
- (void)dealloc;	// IMP=0x0010000000009c51
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0010000000009bad

@end
