//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <APFoundation/NSObject-Protocol.h>

@class NSData;
@protocol APSigningAuthorizable;

@protocol APSigningAuthorityPoolManagement <NSObject>
- (id <APSigningAuthorizable>)signingAuthority;
- (NSData *)signatureForRawData:(NSData *)arg1 error:(id *)arg2;
- (NSData *)signatureForData:(NSData *)arg1 error:(id *)arg2;
- (_Bool)isValidSignature:(NSData *)arg1 forData:(NSData *)arg2 error:(id *)arg3;
- (void)rotate;
- (id)initWithPoolSize:(long long)arg1;
@end

