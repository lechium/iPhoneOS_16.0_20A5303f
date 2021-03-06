//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BCCloudData-Protocol.h"

@class NSString;

@protocol BCAssetReview <BCCloudData>
@property(readonly, copy, nonatomic) NSString *reviewBody;
@property(readonly, copy, nonatomic) NSString *reviewTitle;
@property(readonly, nonatomic) double normalizedStarRating;
@property(readonly, nonatomic) short starRating;
@property(readonly, copy, nonatomic) NSString *assetReviewID;
@end

