//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, NSDictionary, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface CSEndpointerAssetManager : NSObject
{
    CSAsset *_currentHEPAsset;	// 8 = 0x8
    CSAsset *_currentOEPAsset;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSDictionary *_asrDatapackInstallationStatus;	// 32 = 0x20
    NSHashTable *_observers;	// 40 = 0x28
}

+ (id)sharedManager;	// IMP=0x002000000008237d
- (void).cxx_destruct;	// IMP=0x0020000000084392
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSDictionary *asrDatapackInstallationStatus; // @synthesize asrDatapackInstallationStatus=_asrDatapackInstallationStatus;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSAsset *currentOEPAsset; // @synthesize currentOEPAsset=_currentOEPAsset;
@property(retain, nonatomic) CSAsset *currentHEPAsset; // @synthesize currentHEPAsset=_currentHEPAsset;
- (id)_getFakeEndpointAsset;	// IMP=0x00100000000841f4
- (id)_getOEPVersionFromPath:(id)arg1;	// IMP=0x0010000000083f0b
- (_Bool)_isOSDIncludedInAsset:(id)arg1;	// IMP=0x0010000000083e6e
- (id)_getModelPathFromInstallationStatusString:(id)arg1;	// IMP=0x0010000000083d5a
- (id)_fetchEndpointMobileAssetWithLanguage:(id)arg1;	// IMP=0x0010000000083b79
- (void)_notifyAssetsUpdate;	// IMP=0x001000000008375d
- (void)_updateOEPAssetsWithLanguage:(id)arg1;	// IMP=0x001000000008340d
- (void)_updateAssetWithLanguage:(id)arg1 assetType:(unsigned long long)arg2;	// IMP=0x001000000008337a
- (void)_updateAssetWithCurrentLanguageForAssetType:(unsigned long long)arg1;	// IMP=0x0010000000083312
- (id)_getCurrentHEPAsset;	// IMP=0x001000000008314f
- (void)assetStatus:(id)arg1;	// IMP=0x0010000000082f68
- (void)CSFirstUnlockMonitor:(id)arg1 didReceiveFirstUnlock:(_Bool)arg2;	// IMP=0x0010000000082e67
- (void)CSAssetManagerDidDownloadNewAsset:(id)arg1;	// IMP=0x0010000000082d80
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;	// IMP=0x0010000000082c2b
- (id)getCurrentEndpointerAsset;	// IMP=0x0010000000082ab3
- (id)getCurrentOSDAsset;	// IMP=0x001000000008295d
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000082881
- (void)addObserver:(id)arg1;	// IMP=0x00100000000827a5
- (void)checkFirstUnlocked;	// IMP=0x001000000008260f
- (id)init;	// IMP=0x00100000000823d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
