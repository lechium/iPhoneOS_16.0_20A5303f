//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NFCHardwareManager, NSNumber, NSString;
@protocol NFTag, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NFCNDEFTag : NSObject
{
    id <NFTag> _tag;	// 8 = 0x8
    NSNumber *_sessionKey;	// 16 = 0x10
    _Bool _writeLocked;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 32 = 0x20
    NFCHardwareManager *_hardwareManager;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000014ba7
- (void).cxx_destruct;	// IMP=0x0000000000016310
@property(readonly, nonatomic) NFCHardwareManager *hardwareManager; // @synthesize hardwareManager=_hardwareManager;
- (void)dispatchBlockOnDelegateQueueAsync:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016164
- (_Bool)isMatchingSession:(id)arg1 outError:(id *)arg2;	// IMP=0x000000000001607f
- (_Bool)_disconnectWithError:(id *)arg1;	// IMP=0x0000000000015ffb
- (void)_connectWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015dbd
- (_Bool)_connectWithError:(id *)arg1;	// IMP=0x0000000000015c9f
- (id)_getInternalReaderSession;	// IMP=0x0000000000015c0a
- (id)_updateNdefStatusWithSession:(id)arg1;	// IMP=0x0000000000015b83
- (void)_setDelegateQueue:(id)arg1;	// IMP=0x0000000000015b72
- (void)_setSession:(id)arg1;	// IMP=0x0000000000015b3d
- (void)_setTag:(id)arg1;	// IMP=0x0000000000015b2c
- (void)writeNDEF:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001586b
- (void)writeLockWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000155ca
- (void)readNDEFWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000152ed
- (void)queryNDEFStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001510a
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000014f18
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000014eaa
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000014baf
- (id)initWithSession:(id)arg1 tag:(id)arg2 startupConfig:(long long)arg3;	// IMP=0x00000000000148ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

