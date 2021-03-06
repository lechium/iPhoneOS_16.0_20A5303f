//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _SYMessageTimerTable : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CDUnknownBlockType _callback;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_rwlock;	// 24 = 0x18
    NSMutableDictionary *_bySeqno;	// 32 = 0x20
    NSMutableDictionary *_byIdent;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000096e5f
@property(readonly, nonatomic) unsigned long long timerCount;
- (void)cancelAllTimers;	// IMP=0x0000000000096c86
- (void)cancelTimerForIdentifier:(id)arg1;	// IMP=0x0000000000096b42
- (void)cancelTimerForSequenceNumber:(unsigned long long)arg1;	// IMP=0x0000000000096a0d
- (void)setIdentifier:(id)arg1 forSequenceNumber:(unsigned long long)arg2;	// IMP=0x0000000000096766
- (void)_cleanupTimerForSeqno:(unsigned long long)arg1;	// IMP=0x00000000000964e8
- (void)_fireCallbackForSeqno:(unsigned long long)arg1;	// IMP=0x00000000000961b6
- (void)addTimerWithFireDate:(id)arg1 forSequenceNumber:(unsigned long long)arg2;	// IMP=0x0000000000095f0f
- (void)dealloc;	// IMP=0x0000000000095e76
- (id)initWithQueue:(id)arg1 timerCallback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000095d4a
- (id)init;	// IMP=0x0000000000095ca9

@end

