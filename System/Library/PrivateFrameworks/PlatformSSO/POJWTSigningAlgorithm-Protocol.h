//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PlatformSSO/NSObject-Protocol.h>

@class NSData, NSString;

@protocol POJWTSigningAlgorithm <NSObject>
- (_Bool)verifySignature:(NSData *)arg1 onData:(NSData *)arg2 usingCertificateString:(NSString *)arg3;
- (_Bool)verifySignature:(NSData *)arg1 onData:(NSData *)arg2 usingKey:(struct __SecKey *)arg3;
- (NSData *)signData:(NSData *)arg1 usingKey:(struct __SecKey *)arg2;
@end
