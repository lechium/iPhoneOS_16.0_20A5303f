//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSCoding-Protocol.h>
#import <GeoServices/NSObject-Protocol.h>

@protocol GEOServerCondition, GEOServerFormattedString;

@protocol GEOServerConditionalString <NSObject, NSCoding>
@property(readonly, nonatomic) id <GEOServerCondition> condition;
@property(readonly, nonatomic) id <GEOServerFormattedString> formattedString;
@end

