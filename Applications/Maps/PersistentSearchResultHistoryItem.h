//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class SearchResult;

@interface PersistentSearchResultHistoryItem : PBCodable
{
    SearchResult *_searchResult;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000996af9
@property(retain, nonatomic) SearchResult *searchResult; // @synthesize searchResult=_searchResult;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000996a7a
- (unsigned long long)hash;	// IMP=0x0010000000996a5d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000009969c3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000099694b
- (void)copyTo:(id)arg1;	// IMP=0x0010000000996921
- (void)writeTo:(id)arg1;	// IMP=0x00100000009968fd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000009968f0
- (id)dictionaryRepresentation;	// IMP=0x0010000000996691
- (id)description;	// IMP=0x00100000009965e2
@property(readonly, nonatomic) _Bool hasSearchResult;

@end
