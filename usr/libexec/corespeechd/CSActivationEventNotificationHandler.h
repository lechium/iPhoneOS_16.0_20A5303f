//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSActivationEvent, NSMapTable;
@protocol OS_dispatch_queue;

@interface CSActivationEventNotificationHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMapTable *_delegates;	// 16 = 0x10
    CSActivationEvent *_pendingActivationEvent;	// 24 = 0x18
    CDUnknownBlockType _pendingCompletion;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0040000000070235
- (void).cxx_destruct;	// IMP=0x00200000000711a6
@property(copy, nonatomic) CDUnknownBlockType pendingCompletion; // @synthesize pendingCompletion=_pendingCompletion;
@property(retain, nonatomic) CSActivationEvent *pendingActivationEvent; // @synthesize pendingActivationEvent=_pendingActivationEvent;
@property(retain, nonatomic) NSMapTable *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)_hasPendingActivationForType:(unsigned long long)arg1;	// IMP=0x00100000000710ce
- (void)_stopMonitoring;	// IMP=0x001000000007104f
- (void)_startMonitoring;	// IMP=0x0010000000070fd0
- (_Bool)_isVoiceTriggerEvent:(id)arg1;	// IMP=0x0010000000070eb9
- (void)_notifyActivationEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000070842
- (void)notifyActivationEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000070690
- (void)setDelegate:(id)arg1 forType:(unsigned long long)arg2;	// IMP=0x001000000007045f
- (void)stop;	// IMP=0x00100000000703f3
- (void)start;	// IMP=0x0010000000070387
- (void)dealloc;	// IMP=0x0010000000070349
- (id)init;	// IMP=0x001000000007028a

@end

