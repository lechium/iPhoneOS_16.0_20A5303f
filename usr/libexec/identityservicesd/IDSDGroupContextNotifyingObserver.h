//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IDSDGroupContextNotifyingObserverDelegate;

@interface IDSDGroupContextNotifyingObserver : NSObject
{
    id <IDSDGroupContextNotifyingObserverDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001e0cc0
@property(retain, nonatomic) id <IDSDGroupContextNotifyingObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)groupContextDidReceiveRegistrationIdentityUpdate:(id)arg1;	// IMP=0x00100000001e0c10
- (void)groupContext:(id)arg1 didReceiveDecryptionFailureForGroup:(id)arg2;	// IMP=0x00100000001e0b90
- (void)groupContext:(id)arg1 didUpdateGroup:(id)arg2 withNewGroup:(id)arg3;	// IMP=0x00100000001e0ae0
- (void)groupContext:(id)arg1 didCacheGroup:(id)arg2;	// IMP=0x00100000001e0a60
- (void)groupContext:(id)arg1 didCreateGroup:(id)arg2;	// IMP=0x00100000001e09e0
- (void)dealloc;	// IMP=0x00100000001e0990
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000001e08d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

