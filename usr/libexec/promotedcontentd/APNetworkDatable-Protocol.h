//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSDate;

@protocol APNetworkDatable <NSObject>
+ (NSDate *)dateFromNetworkDate:(NSDate *)arg1 withOffset:(double)arg2;
+ (NSDate *)networkDateFromDate:(NSDate *)arg1 withOffset:(double)arg2;
+ (NSDate *)networkDate;
+ (void)updateOffsetFromNTP:(void (^)(void))arg1;
@end

