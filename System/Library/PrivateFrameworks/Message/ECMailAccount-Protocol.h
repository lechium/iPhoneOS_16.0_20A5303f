//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Message/ECAccountPropertyProviding-Protocol.h>
#import <Message/NSCopying-Protocol.h>
#import <Message/NSObject-Protocol.h>

@class ACAccount, NSArray, NSString;

@protocol ECMailAccount <NSObject, NSCopying, ECAccountPropertyProviding>
@property(nonatomic, readonly) ACAccount *systemAccount;
@property(nonatomic, readonly) NSString *identifier;
@property(nonatomic, copy) NSString *password;
@property(nonatomic, copy) NSString *hostname;
@property(nonatomic, readonly) NSArray *emailAddressStrings;
@end

