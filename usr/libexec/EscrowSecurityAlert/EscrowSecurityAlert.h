//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, SecTapToRadar, SecureBackup;
@protocol EscrowSecurityAlertDelegateProtocol, OS_dispatch_queue;

@interface EscrowSecurityAlert : NSObject
{
    id <EscrowSecurityAlertDelegateProtocol> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_notifyQueue;	// 16 = 0x10
    SecureBackup *_sb;	// 24 = 0x18
    NSDictionary *_results;	// 32 = 0x20
    SecTapToRadar *_tapToRadar;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000004816
@property(retain) SecTapToRadar *tapToRadar; // @synthesize tapToRadar=_tapToRadar;
@property(retain) NSDictionary *results; // @synthesize results=_results;
@property(readonly, retain) SecureBackup *sb; // @synthesize sb=_sb;
@property(readonly, retain) NSObject<OS_dispatch_queue> *notifyQueue; // @synthesize notifyQueue=_notifyQueue;
@property(retain) id <EscrowSecurityAlertDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void)handleNotification:(id)arg1;	// IMP=0x00100000000043ec
- (void)handleTimerEvent;	// IMP=0x0010000000003da3
- (id)pcsRecoverabilityMetrics:(id)arg1 tapToRadar:(_Bool *)arg2;	// IMP=0x0010000000003460
- (void)foreachStingrayService:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003334
- (id)tLKRecoverabilityMetrics:(id)arg1 tapToRadar:(_Bool *)arg2;	// IMP=0x0010000000002de3
- (id)init;	// IMP=0x0010000000002980
- (id)metrics;	// IMP=0x001000000000278e
- (_Bool)inCircle;	// IMP=0x0010000000002751

@end

