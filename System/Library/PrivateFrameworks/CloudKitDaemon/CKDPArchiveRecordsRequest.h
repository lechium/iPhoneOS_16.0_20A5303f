//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray;

@interface CKDPArchiveRecordsRequest : PBRequest
{
    NSMutableArray *_idsToArchives;	// 8 = 0x8
}

+ (Class)idsToArchiveType;	// IMP=0x001000000004f2ed
+ (id)options;	// IMP=0x001000000004f1dc
- (void).cxx_destruct;	// IMP=0x000000000004fd80
@property(retain, nonatomic) NSMutableArray *idsToArchives; // @synthesize idsToArchives=_idsToArchives;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004fc26
- (unsigned long long)hash;	// IMP=0x000000000004fc09
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004fb6f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004f9ac
- (void)copyTo:(id)arg1;	// IMP=0x000000000004f8e5
- (void)writeTo:(id)arg1;	// IMP=0x000000000004f7b5
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004f7a8
- (id)dictionaryRepresentation;	// IMP=0x000000000004f3ad
- (id)description;	// IMP=0x000000000004f2fe
- (id)idsToArchiveAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004f2d0
- (unsigned long long)idsToArchivesCount;	// IMP=0x000000000004f2b3
- (void)addIdsToArchive:(id)arg1;	// IMP=0x000000000004f249
- (void)clearIdsToArchives;	// IMP=0x000000000004f22c

@end

