//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DASearchQuery, NSArray, NSError, NSNumber;

@protocol DASearchQueryConsumer
- (void)searchQuery:(DASearchQuery *)arg1 finishedWithError:(NSError *)arg2;
- (void)searchQuery:(DASearchQuery *)arg1 returnedResults:(NSArray *)arg2;

@optional
- (void)searchQuery:(DASearchQuery *)arg1 returnedTotalCount:(NSNumber *)arg2;
@end
