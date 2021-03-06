//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthKit/NSCopying-Protocol.h>
#import <AuthKit/NSObject-Protocol.h>
#import <AuthKit/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@protocol AKCredentialRequestProtocol <NSObject, NSSecureCoding, NSCopying>
@property(readonly, copy, nonatomic) NSUUID *transactionID;
@property(readonly, copy, nonatomic) NSUUID *requestIdentifier;
@property(readonly, copy, nonatomic) NSString *altDSID;
@property(copy, nonatomic) NSString *userIdentifier;
@end

