//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, NSString, UIColor;

@protocol PXProtoFeature <NSObject>
@property(readonly, nonatomic) long long featureGroupIndex;
@property(readonly, nonatomic) long long featureKind;

@optional
@property(readonly, nonatomic) UIColor *featureSelectedTintColor;
@property(readonly, nonatomic) UIColor *featureTintColor;
@property(readonly, nonatomic) double featureScore;
@property(readonly, nonatomic) NSArray *featurePeople;
@property(readonly, nonatomic) NSString *featureLocalizedTitle;
@end

