//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLMomentProcessingProtocol-Protocol.h>
#import <PhotoLibraryServices/PLMomentRefreshable-Protocol.h>
#import <PhotoLibraryServices/PLSharedAssetsContainer-Protocol.h>

@class CLLocation, NSArray, NSDate, NSObject, NSSet, NSString;
@protocol NSCopying, PLMomentAssetData, PLPhotosHighlightData;

@protocol PLMomentData <PLMomentRefreshable, PLMomentProcessingProtocol, PLSharedAssetsContainer>
+ (NSArray *)sortByTimeSortDescriptors;
@property(retain, nonatomic) NSString *uuid;
@property(nonatomic) int cachedVideosCount;
@property(nonatomic) int cachedPhotosCount;
@property(nonatomic) int cachedCount;
@property(readonly, nonatomic) id <PLPhotosHighlightData> highlight;
@property(readonly, retain, nonatomic) NSArray *batchedAssets;
@property(retain, nonatomic) NSSet *assets;
@property(nonatomic) float aggregationScore;
@property(nonatomic) short originatorState;
@property(nonatomic) double gpsHorizontalAccuracy;
@property(nonatomic) unsigned short processedLocation;
@property(retain, nonatomic) CLLocation *approximateLocation;
@property(nonatomic) double approximateLongitude;
@property(nonatomic) double approximateLatitude;
@property(readonly, retain, nonatomic) NSObject<NSCopying> *uniqueObjectID;
@property(retain, nonatomic) NSDate *representativeDate;
@property(readonly, retain, nonatomic) NSDate *localEndDate;
@property(readonly, retain, nonatomic) NSDate *localStartDate;
@property(nonatomic) int timeZoneOffset;
@property(retain, nonatomic) NSDate *endDate;
@property(retain, nonatomic) NSDate *startDate;
- (void)insertAssetData:(id <PLMomentAssetData>)arg1;
- (void)removeAssetData:(id <PLMomentAssetData>)arg1;
- (void)delete;
- (_Bool)isDeleted;

@optional
@property(retain, nonatomic) NSString *title;
@end
