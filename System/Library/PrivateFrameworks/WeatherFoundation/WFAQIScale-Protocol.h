//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WeatherFoundation/NSObject-Protocol.h>

@class NSString, WFAQIScaleCategory;

@protocol WFAQIScale <NSObject>
@property(readonly, nonatomic) NSString *name;
- (WFAQIScaleCategory *)scaleCategoryForCategoryIndex:(unsigned long long)arg1 localizedCategoryDescription:(NSString *)arg2;
@end
