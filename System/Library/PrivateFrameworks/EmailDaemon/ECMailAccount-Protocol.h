//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailDaemon/ECAccountPropertyProviding-Protocol.h>
#import <EmailDaemon/NSCopying-Protocol.h>
#import <EmailDaemon/NSObject-Protocol.h>

@class ACAccount, NSArray, NSString;

@protocol ECMailAccount <NSObject, NSCopying, ECAccountPropertyProviding>
@property(readonly, nonatomic) ACAccount *systemAccount;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSString *password;
@property(copy, nonatomic) NSString *hostname;
@property(readonly, copy, nonatomic) NSArray *emailAddressStrings;
@end
