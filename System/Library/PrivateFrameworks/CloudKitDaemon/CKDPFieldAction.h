//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPFieldActionDeleteListRange, CKDPFieldActionInsertIntoList, CKDPFieldActionReplaceListRange;

@interface CKDPFieldAction : PBCodable
{
    CKDPFieldActionDeleteListRange *_deleteListRange;	// 8 = 0x8
    CKDPFieldActionInsertIntoList *_insertIntoList;	// 16 = 0x10
    CKDPFieldActionReplaceListRange *_replaceListRange;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002237f8
@property(retain, nonatomic) CKDPFieldActionReplaceListRange *replaceListRange; // @synthesize replaceListRange=_replaceListRange;
@property(retain, nonatomic) CKDPFieldActionDeleteListRange *deleteListRange; // @synthesize deleteListRange=_deleteListRange;
@property(retain, nonatomic) CKDPFieldActionInsertIntoList *insertIntoList; // @synthesize insertIntoList=_insertIntoList;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002236b8
- (unsigned long long)hash;	// IMP=0x000000000022364b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000223553
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000022348f
- (void)copyTo:(id)arg1;	// IMP=0x000000000022340c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000223392
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000223385
- (id)dictionaryRepresentation;	// IMP=0x0000000000222ffb
- (id)description;	// IMP=0x0000000000222f4c
@property(readonly, nonatomic) _Bool hasReplaceListRange;
@property(readonly, nonatomic) _Bool hasDeleteListRange;
@property(readonly, nonatomic) _Bool hasInsertIntoList;

@end

