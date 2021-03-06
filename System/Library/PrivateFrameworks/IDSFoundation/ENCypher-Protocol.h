//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/NSObject-Protocol.h>
#import <IDSFoundation/NSSecureCoding-Protocol.h>

@class ENAccountIdentity, NSData, NSString;
@protocol ENDevicePublicKey;

@protocol ENCypher <NSSecureCoding, NSObject>
@property(readonly, nonatomic) NSString *identifier;
- (NSData *)decypherData:(NSData *)arg1 withAccountIdentity:(ENAccountIdentity *)arg2 signingDevicePublicKey:(id <ENDevicePublicKey>)arg3 identifier:(NSString *)arg4 error:(id *)arg5;
- (NSData *)cypherData:(NSData *)arg1 withAccountIdentity:(ENAccountIdentity *)arg2 identifier:(id *)arg3 error:(id *)arg4;
@end

