//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface IDSEncryptionQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_backingQueue;	// 8 = 0x8
    const char *_specific;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001e4210
@property(nonatomic) const char *specific; // @synthesize specific=_specific;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backingQueue; // @synthesize backingQueue=_backingQueue;
- (void)performSyncBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e40e0
- (void)performAsyncBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e4070
- (id)initWithName:(char *)arg1 qosClass:(unsigned int)arg2 specific:(char *)arg3;	// IMP=0x00100000001e3eb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

