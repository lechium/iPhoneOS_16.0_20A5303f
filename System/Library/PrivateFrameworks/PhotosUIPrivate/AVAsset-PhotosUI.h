//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFoundation/AVAsset.h>

@class NSValue;

@interface AVAsset (PhotosUI)
- (void)pu_loadDurationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0030000000023316
- (CDStruct_1b6d18a9)pu_duration;	// IMP=0x003000000002322b
@property(readonly, nonatomic) NSValue *pu_cachedDuration;
- (void)_pu_setCachedDuration:(id)arg1;	// IMP=0x0030000000023204
- (struct TransformMetadataItemPair)pu_stillAssetTransformMetadataPair;	// IMP=0x0030000000119368
- (CDStruct_d80e62f2)pu_perspectiveTransformForMetadata:(id)arg1;	// IMP=0x00300000001191ec
- (_Bool)_pu_getVitalityTransform:(out CDStruct_d80e62f2 *)arg1 dimensions:(out struct CGSize *)arg2;	// IMP=0x0030000000118fbf
- (_Bool)_pu_isVitalityLimitingAllowed;	// IMP=0x0030000000118ea8
- (void)_pu_handleRequiredPropertiesLoadedWithAdditionalNormalizedTransform:(CDStruct_d80e62f2)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0030000000117cfc
- (void)pu_loadNormalizedVitalityPerspectiveTransformWithAdditionalNormalizedTransform:(CDStruct_d80e62f2)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0030000000117c3b
- (id)pu_stillImageTransformAssetTrack;	// IMP=0x0030000000117968
@property(readonly, nonatomic) _Bool pu_supportsVitality;
@end

