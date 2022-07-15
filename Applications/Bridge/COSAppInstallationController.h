//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSNumber, NSString;

@interface COSAppInstallationController : NSObject
{
    _Bool _availableInStoreResult;	// 8 = 0x8
    _Bool _needsAvailableInStoreCheck;	// 9 = 0x9
    NSHashTable *_observers;	// 16 = 0x10
    NSString *_bundleIndentifier;	// 24 = 0x18
    NSNumber *_storeIdentifier;	// 32 = 0x20
}

+ (void)getAppAvailabilityStatusWithBundleID:(id)arg1 andStoreIdentifier:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0020000000081ceb
- (void).cxx_destruct;	// IMP=0x0020000000082716
@property(nonatomic) _Bool needsAvailableInStoreCheck; // @synthesize needsAvailableInStoreCheck=_needsAvailableInStoreCheck;
@property(nonatomic) _Bool availableInStoreResult; // @synthesize availableInStoreResult=_availableInStoreResult;
@property(retain, nonatomic) NSNumber *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(copy, nonatomic) NSString *bundleIndentifier; // @synthesize bundleIndentifier=_bundleIndentifier;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x00100000000824f5
- (void)removeObserver:(id)arg1;	// IMP=0x00100000000824df
- (void)addObserver:(id)arg1;	// IMP=0x00100000000824c9
- (void)notifyObserversThatAppAvailabilityChanged:(_Bool)arg1;	// IMP=0x0010000000082304
- (void)notifyObserversThatControllerDidBeginInstallationWithSuccess:(_Bool)arg1;	// IMP=0x0010000000082148
- (void)notifyObserversThatControllerDidInitiatePurchase;	// IMP=0x0010000000081fa6
- (void)notifyObserversThatControllerDidCompleteInstallationWithSuccess:(_Bool)arg1;	// IMP=0x0010000000081dea
- (void)checkAvailabilityInStore:(CDUnknownBlockType)arg1;	// IMP=0x0010000000081cc5
- (unsigned long long)isAvailableInStore;	// IMP=0x0010000000081bd0
- (id)amsPromise;	// IMP=0x00100000000819c9
- (void)_performAvailabilityCheck:(CDUnknownBlockType)arg1;	// IMP=0x00100000000817e4
- (void)_setAvailableInStoreResult:(_Bool)arg1;	// IMP=0x00100000000817af
- (void)startInstalling;	// IMP=0x0010000000081041
- (void)_checkAwaitingInstallsWithUserInfo:(id)arg1;	// IMP=0x0010000000080e1e
- (id)versionString;	// IMP=0x0010000000080cac
- (_Bool)installInProgress;	// IMP=0x0010000000080b38
- (_Bool)isInstalled;	// IMP=0x00100000000809a7
- (void)dealloc;	// IMP=0x0010000000080919
- (id)initWithBundleID:(id)arg1 andStoreIdentifier:(id)arg2;	// IMP=0x0010000000080803

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
