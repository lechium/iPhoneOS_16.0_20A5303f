//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDCallCenterObserver, CSDSandboxExtensionDirectory, NSDictionary, NSSet, NSString;
@protocol CSDCallProviderManagerDataSourceDelegate, OS_dispatch_queue;

@interface CSDCallProviderManagerDataSource : NSObject
{
    id <CSDCallProviderManagerDataSourceDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CSDSandboxExtensionDirectory *_ringtonesSandboxExtensionDirectory;	// 24 = 0x18
    CSDCallCenterObserver *_callCenterObserver;	// 32 = 0x20
    NSSet *_providerIdentifiersForExistingCalls;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000018c5d4
@property(copy, nonatomic) NSSet *providerIdentifiersForExistingCalls; // @synthesize providerIdentifiersForExistingCalls=_providerIdentifiersForExistingCalls;
@property(readonly, nonatomic) CSDCallCenterObserver *callCenterObserver; // @synthesize callCenterObserver=_callCenterObserver;
@property(readonly, nonatomic) CSDSandboxExtensionDirectory *ringtonesSandboxExtensionDirectory; // @synthesize ringtonesSandboxExtensionDirectory=_ringtonesSandboxExtensionDirectory;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSDCallProviderManagerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didChangeRelayCallingAvailability;	// IMP=0x001000000018c509
- (void)callsChangedForCallCenterObserver:(id)arg1;	// IMP=0x001000000018c1f6
- (void)handleApplicationUnregisteredNotification:(id)arg1;	// IMP=0x001000000018c134
- (id)_providersForPreferenceKey:(const struct __CFString *)arg1;	// IMP=0x001000000018bd48
- (void)_saveProviders:(id)arg1 forPreferenceKey:(const struct __CFString *)arg2;	// IMP=0x001000000018bad2
- (_Bool)isProviderInstalled:(id)arg1;	// IMP=0x001000000018b9e8
- (void)removeLinksForFilenamesNotInArray:(id)arg1;	// IMP=0x001000000018b8f2
- (id)createLinkIfNecessaryWithFilename:(id)arg1 toURL:(id)arg2;	// IMP=0x001000000018b76b
- (_Bool)isSymbolicLinkAtURL:(id)arg1;	// IMP=0x001000000018b5f5
- (void)openUserActivity:(id)arg1 usingApplicationWithBundleIdentifier:(id)arg2 frontBoardOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000018b422
@property(readonly, nonatomic, getter=isDevicePasscodeLocked) _Bool devicePasscodeLocked;
- (id)dialAssistedDialRequestForDialRequest:(id)arg1;	// IMP=0x001000000018b39d
@property(copy, nonatomic) NSDictionary *registeredPairedHostDeviceProvidersByIdentifier;
@property(copy, nonatomic) NSDictionary *registeredLocalProvidersByIdentifier;
@property(readonly, nonatomic, getter=isRelayCallingGuaranteed) _Bool relayCallingGuaranteed;
- (void)dealloc;	// IMP=0x001000000018aa5d
- (id)initWithSerialQueue:(id)arg1;	// IMP=0x001000000018a879

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

