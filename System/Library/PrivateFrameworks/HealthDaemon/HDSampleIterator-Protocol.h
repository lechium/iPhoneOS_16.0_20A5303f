//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HKIterator-Protocol.h>

@class HKSample;

@protocol HDSampleIterator <HKIterator>
@property(readonly, nonatomic) long long objectID;
@property(readonly, nonatomic) HKSample *sample;
@end
