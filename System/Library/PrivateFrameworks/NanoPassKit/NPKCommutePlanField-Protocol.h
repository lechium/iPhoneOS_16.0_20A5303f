//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoPassKit/NPKPassItemField-Protocol.h>

@class NSArray, NSString;
@protocol NPKDateRange;

@protocol NPKCommutePlanField <NPKPassItemField>
@property(readonly, nonatomic) NSArray *details;
@property(readonly, nonatomic) _Bool isCountBasedCommutePlan;
@property(readonly, nonatomic) id <NPKDateRange> usageDateRange;
@property(readonly, nonatomic) NSString *detailLabel;
@end
