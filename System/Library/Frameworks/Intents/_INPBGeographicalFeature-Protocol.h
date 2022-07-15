//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBString;

@protocol _INPBGeographicalFeature <NSObject>
+ (Class)geographicalFeatureDescriptorsType;
@property(readonly, nonatomic) _Bool hasGeographicalFeatureType;
@property(retain, nonatomic) _INPBString *geographicalFeatureType;
@property(readonly, nonatomic) unsigned long long geographicalFeatureDescriptorsCount;
@property(copy, nonatomic) NSArray *geographicalFeatureDescriptors;
- (_INPBString *)geographicalFeatureDescriptorsAtIndex:(unsigned long long)arg1;
- (void)addGeographicalFeatureDescriptors:(_INPBString *)arg1;
- (void)clearGeographicalFeatureDescriptors;
@end
