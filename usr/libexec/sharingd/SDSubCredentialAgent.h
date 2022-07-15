//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SBSRemoteAlertHandle, SDStatusMonitor;
@protocol OS_dispatch_queue;

@interface SDSubCredentialAgent : NSObject
{
    SBSRemoteAlertHandle *_alertHandle;	// 8 = 0x8
    _Bool _prefAppInfoDownload;	// 16 = 0x10
    NSString *_prefAppStoreURL;	// 24 = 0x18
    NSString *_prefWalletLaunchURL;	// 32 = 0x20
    SDStatusMonitor *_statusMonitor;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 48 = 0x30
}

+ (id)sharedAgent;	// IMP=0x00200000001a3b72
- (void).cxx_destruct;	// IMP=0x00200000001a4f17
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x00100000001a4d75
- (void)remoteAlertHandleDidDeactivate:(id)arg1;	// IMP=0x00100000001a4c30
- (void)remoteAlertHandleDidActivate:(id)arg1;	// IMP=0x00100000001a4aeb
- (_Bool)_uiShowing;	// IMP=0x00100000001a4add
- (void)_uiPresentWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a416f
- (void)uiPresentWithParamsDirect:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a415d
- (void)uiPresentWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a4085
- (void)prefsChanged;	// IMP=0x00100000001a3e2b
- (void)_invalidate;	// IMP=0x00100000001a3dd5
- (void)invalidate;	// IMP=0x00100000001a3d74
- (void)_activate;	// IMP=0x00100000001a3d04
- (void)activate;	// IMP=0x00100000001a3ca3
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x00100000001a3bc7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
