//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaMiningKit/NSObject-Protocol.h>

@class CLSInvestigation, NSIndexSet;

@protocol CLSInvestigationInterviewDelegate <NSObject>

@optional
- (NSIndexSet *)sampleOfItemsInInvestigation:(CLSInvestigation *)arg1;
- (unsigned long long)numberOfItemsInInvestigation:(CLSInvestigation *)arg1;
@end
