//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@protocol EDAccountsProvider
@property(readonly, nonatomic) _Bool hasActiveAccounts;
@property(readonly, copy, nonatomic) NSArray *receivingAddresses;
- (NSArray *)mailAccounts;
@end

