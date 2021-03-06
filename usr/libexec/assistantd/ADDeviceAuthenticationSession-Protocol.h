//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol ADDeviceAuthenticationSession <NSObject>
@property(readonly, nonatomic) unsigned long long strategyVersion;
@property(readonly, nonatomic) unsigned long long sessionState;
- (NSData *)signData:(NSData *)arg1 error:(id *)arg2;
- (_Bool)completeWithHandshakeResponse:(NSData *)arg1 error:(id *)arg2;
- (NSData *)handshakeRequestWithCertificateData:(NSData *)arg1 error:(id *)arg2;
@end

