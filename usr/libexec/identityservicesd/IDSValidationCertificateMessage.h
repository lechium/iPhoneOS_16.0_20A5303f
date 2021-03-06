//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/IDSBaseMessage.h>

@class NSData;

@interface IDSValidationCertificateMessage : IDSBaseMessage
{
    NSData *_responseCertificateData;	// 232 = 0xe8
    NSData *_pushToken;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x002000000049a420
@property(copy, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(copy, nonatomic) NSData *responseCertificateData; // @synthesize responseCertificateData=_responseCertificateData;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x001000000049a2a0
- (id)additionalMessageHeaders;	// IMP=0x001000000049a1c0
- (id)messageBody;	// IMP=0x001000000049a160
- (id)requiredKeys;	// IMP=0x001000000049a100
- (id)bagKey;	// IMP=0x001000000049a0e0
- (long long)responseCommand;	// IMP=0x001000000049a0c0
- (long long)command;	// IMP=0x001000000049a0a0
- (_Bool)wantsHTTPGet;	// IMP=0x001000000049a080
- (_Bool)wantsBinaryPush;	// IMP=0x001000000049a060
- (_Bool)wantsCompressedBody;	// IMP=0x001000000049a040
- (_Bool)wantsHTTPHeaders;	// IMP=0x001000000049a020
- (_Bool)wantsBagKey;	// IMP=0x001000000049a000
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000499f00
- (id)init;	// IMP=0x0010000000499dd0

@end

