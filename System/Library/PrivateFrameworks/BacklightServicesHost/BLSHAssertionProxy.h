//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BacklightServicesHost/BLSAssertionServiceResponding-Protocol.h>

@class BLSAssertionDescriptor, BLSAssertionIdentifier, NSString;
@protocol BLSXPCAssertionServiceClientInterface;

__attribute__((visibility("hidden")))
@interface BLSHAssertionProxy : NSObject <BLSAssertionServiceResponding>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _valid;	// 12 = 0xc
    _Bool _acquired;	// 13 = 0xd
    BLSAssertionIdentifier *_identifier;	// 16 = 0x10
    BLSAssertionDescriptor *_descriptor;	// 24 = 0x18
    id <BLSXPCAssertionServiceClientInterface> _remoteTarget;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000281c8
@property(readonly, nonatomic) id <BLSXPCAssertionServiceClientInterface> remoteTarget; // @synthesize remoteTarget=_remoteTarget;
@property(readonly, nonatomic) BLSAssertionDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(retain, nonatomic) BLSAssertionIdentifier *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
- (oneway void)serviceDidResume;	// IMP=0x0000000000028084
- (oneway void)serviceDidPause;	// IMP=0x0000000000028050
- (oneway void)serviceDidCancelWithError:(id)arg1;	// IMP=0x0000000000027fe3
- (oneway void)serviceWillCancel;	// IMP=0x0000000000027faf
- (oneway void)serviceFailedToAcquireWithError:(id)arg1;	// IMP=0x0000000000027f68
- (oneway void)serviceDidAcquire;	// IMP=0x0000000000027f1a
@property(readonly, nonatomic) unsigned long long acquisitionState;
@property(readonly, nonatomic, getter=isAcquired) _Bool acquired; // @synthesize acquired=_acquired;
- (void)invalidate;	// IMP=0x0000000000027eb3
- (id)initWithIdentifier:(id)arg1 descriptor:(id)arg2 remoteTarget:(id)arg3;	// IMP=0x0000000000027dba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

