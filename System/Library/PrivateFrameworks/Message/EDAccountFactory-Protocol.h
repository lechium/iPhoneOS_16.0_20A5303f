//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, NSString;
@protocol EDAccount;

@protocol EDAccountFactory
- (id <EDAccount>)accountWithSystemAccount:(ACAccount *)arg1;
- (id <EDAccount>)accountWithIdentifier:(NSString *)arg1;
@end

