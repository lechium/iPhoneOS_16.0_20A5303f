//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSAsset, NSString;

@interface CSVoiceTriggerAssetHandlerDarwin
{
    CSAsset *_cachedAsset;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000d68cd
@property(retain) CSAsset *cachedAsset; // @synthesize cachedAsset=_cachedAsset;
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;	// IMP=0x00100000000d67ec
- (void)CSRemoteAssetManagerDidDownloadNewAsset:(id)arg1;	// IMP=0x00100000000d66f3
- (void)_checkNewAssetAvailablity;	// IMP=0x00100000000d63ef
- (void)_getVoiceTriggerAssetFromAssetManager:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d62e9
- (void)getVoiceTriggerAssetWithEndpointId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d6178
- (void)start;	// IMP=0x00100000000d60ec
- (id)init;	// IMP=0x00100000000d6054

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

