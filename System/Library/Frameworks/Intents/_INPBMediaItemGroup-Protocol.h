//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBMediaItemValue;

@protocol _INPBMediaItemGroup <NSObject>
+ (Class)valuesType;
@property(readonly, nonatomic) unsigned long long valuesCount;
@property(copy, nonatomic) NSArray *values;
- (_INPBMediaItemValue *)valuesAtIndex:(unsigned long long)arg1;
- (void)addValues:(_INPBMediaItemValue *)arg1;
- (void)clearValues;
@end

