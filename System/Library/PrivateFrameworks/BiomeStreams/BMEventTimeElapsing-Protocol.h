//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMStreamValidating-Protocol.h>

@class NSDateInterval;

@protocol BMEventTimeElapsing <BMStreamValidating>
@property(nonatomic) double duration;
@property(nonatomic) double absoluteTimestamp;
@property(copy, nonatomic) NSDateInterval *dateInterval;
@end

