//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/IDSBaseMessage.h>

@class MISSING_TYPE, NSData, NSString;

@interface IDSProfileMessage : IDSBaseMessage
{
    NSData *_pushCert;	// 232 = 0xe8
    struct __SecKey *_pushKey;	// 240 = 0xf0
    struct __SecKey *_pushPublicKey;	// 248 = 0xf8
    NSData *_pushToken;	// 256 = 0x100
    NSString *_authToken;	// 264 = 0x108
    NSString *_profileID;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x0020000000152280
@property(copy, nonatomic) NSString *profileID; // @synthesize profileID=_profileID;
@property(copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(copy, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(nonatomic) struct __SecKey *pushPublicKey; // @synthesize pushPublicKey=_pushPublicKey;
@property(nonatomic) struct __SecKey *pushPrivateKey; // @synthesize pushPrivateKey=_pushKey;
@property(copy, nonatomic) NSData *pushCertificate; // @synthesize pushCertificate=_pushCert;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x0010000000152000
- (id)additionalMessageHeaders;	// IMP=0x0010000000151d40
- (id)additionalMessageHeadersForOutgoingPush;	// IMP=0x00100000001519e0
- (_Bool)hasRequiredKeys:(id *)arg1;	// IMP=0x0010000000151850
- (MISSING_TYPE *)responseCommand;	// IMP=0x0010000000151830
- (long long)command;	// IMP=0x0010000000151810
- (_Bool)wantsBinaryPush;	// IMP=0x00100000001517f0
- (_Bool)wantsCompressedBody;	// IMP=0x00100000001517d0
- (_Bool)wantsHTTPHeaders;	// IMP=0x00100000001517b0
- (_Bool)wantsBagKey;	// IMP=0x0010000000151790
- (void)dealloc;	// IMP=0x00100000001515b0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001513c0
- (id)init;	// IMP=0x0010000000151270

@end

