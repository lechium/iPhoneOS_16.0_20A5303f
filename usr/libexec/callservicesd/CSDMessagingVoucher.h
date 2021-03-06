//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CSDMessagingHandle, NSData, NSString, TUVoucher;

@interface CSDMessagingVoucher : PBCodable
{
    NSData *_encryptedData;	// 8 = 0x8
    CSDMessagingHandle *_handle;	// 16 = 0x10
    NSString *_tokenPrefixedURI;	// 24 = 0x18
    NSData *_unsafeData;	// 32 = 0x20
}

+ (id)voucherWithTUVoucher:(id)arg1;	// IMP=0x0020000000003940
- (void).cxx_destruct;	// IMP=0x001000000012fc86
@property(retain, nonatomic) NSData *encryptedData; // @synthesize encryptedData=_encryptedData;
@property(retain, nonatomic) NSData *unsafeData; // @synthesize unsafeData=_unsafeData;
@property(retain, nonatomic) NSString *tokenPrefixedURI; // @synthesize tokenPrefixedURI=_tokenPrefixedURI;
@property(retain, nonatomic) CSDMessagingHandle *handle; // @synthesize handle=_handle;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000012fb35
- (unsigned long long)hash;	// IMP=0x001000000012fab1
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000012f985
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000012f89b
- (void)copyTo:(id)arg1;	// IMP=0x000000000012f7f8
- (void)writeTo:(id)arg1;	// IMP=0x001000000012f761
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000012f754
- (id)dictionaryRepresentation;	// IMP=0x001000000012f413
- (id)description;	// IMP=0x001000000012f364
@property(readonly, nonatomic) _Bool hasEncryptedData;
@property(readonly, nonatomic) _Bool hasUnsafeData;
@property(readonly, nonatomic) _Bool hasTokenPrefixedURI;
@property(readonly, nonatomic) _Bool hasHandle;
@property(readonly, nonatomic) TUVoucher *tuVoucher;

@end

