//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIApps/PLResourceIdentity-Protocol.h>

@class NSDate, NSString;
@protocol PLAssetID, PLResourceDataStore, PLResourceDataStoreKey;

@protocol PLResource <PLResourceIdentity>
- (float)scaleGivenAssetHasAdjustments:(_Bool)arg1 currentWidth:(long long)arg2 currentHeight:(long long)arg3;
- (_Bool)isPlayableVideo;
- (_Bool)isDerivative;
- (_Bool)isDefaultOrientation;
- (_Bool)isInCloud;
@property(nonatomic, readonly) short utiConformanceHint;
@property(nonatomic, readonly) NSDate *trashedDate;
@property(nonatomic, readonly) short trashedState;
@property(nonatomic, readonly) long long estimatedDataLength;
@property(nonatomic, readonly) long long dataLength;
@property(nonatomic, readonly) NSString *codecFourCharCodeName;
@property(nonatomic, readonly) int qualitySortValue;
@property(nonatomic, readonly) short remoteAvailabilityTarget;
@property(nonatomic, readonly) short remoteAvailability;
@property(nonatomic, readonly) short localAvailabilityTarget;
@property(nonatomic, readonly) short localAvailability;
@property(nonatomic, readonly) unsigned int recipeID;
@property(nonatomic, readonly) id <PLResourceDataStoreKey> dataStoreKey;
@property(nonatomic, readonly) long long dataStoreSubtype;
@property(nonatomic, readonly) id <PLResourceDataStore> dataStore;
@property(nonatomic, readonly) id <PLAssetID> assetID;
@property(nonatomic, readonly) float scale;
@property(nonatomic, readonly) long long orientedHeight;
@property(nonatomic, readonly) long long orientedWidth;
@property(nonatomic, readonly) long long unorientedHeight;
@property(nonatomic, readonly) long long unorientedWidth;
@property(nonatomic, readonly) unsigned int orientation;
@end

