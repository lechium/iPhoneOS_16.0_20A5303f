//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface CSDMessagingEncryptedConversationMessage : PBCodable
{
    NSData *_conversationMessageBytes;	// 8 = 0x8
    NSData *_publicKey;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000005673
@property(retain, nonatomic) NSData *conversationMessageBytes; // @synthesize conversationMessageBytes=_conversationMessageBytes;
@property(retain, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000055c6
- (unsigned long long)hash;	// IMP=0x0010000000005579
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000054b1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000005413
- (void)copyTo:(id)arg1;	// IMP=0x00100000000053b0
- (void)writeTo:(id)arg1;	// IMP=0x0010000000005353
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000005346
- (id)dictionaryRepresentation;	// IMP=0x001000000000512f
- (id)description;	// IMP=0x0010000000005080
@property(readonly, nonatomic) _Bool hasConversationMessageBytes;
@property(readonly, nonatomic) _Bool hasPublicKey;

@end

