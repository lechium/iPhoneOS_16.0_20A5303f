//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEORating : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_uRL;	// 24 = 0x18
    double _maxScore;	// 32 = 0x20
    NSString *_provider;	// 40 = 0x28
    NSString *_ratingCategoryId;	// 48 = 0x30
    NSMutableArray *_reviews;	// 56 = 0x38
    double _score;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    int _numberOfRatings;	// 84 = 0x54
    int _numberOfReviews;	// 88 = 0x58
    struct {
        unsigned int has_maxScore:1;
        unsigned int has_score:1;
        unsigned int has_numberOfRatings:1;
        unsigned int has_numberOfReviews:1;
        unsigned int read_unknownFields:1;
        unsigned int read_uRL:1;
        unsigned int read_provider:1;
        unsigned int read_ratingCategoryId:1;
        unsigned int read_reviews:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 92 = 0x5c
}

- (void).cxx_destruct;	// IMP=0x0000000001034a8a
- (unsigned long long)hash;	// IMP=0x0000000001034797
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001034580
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010341a1
- (void)writeTo:(id)arg1;	// IMP=0x0000000001033e1b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001033e0c
- (id)jsonRepresentation;	// IMP=0x0000000001033a8b
- (id)dictionaryRepresentation;	// IMP=0x00000000010332bc
- (id)description;	// IMP=0x000000000103320d
- (id)initWithData:(id)arg1;	// IMP=0x0000000001032414
- (id)init;	// IMP=0x00000000010323b8
- (id)initWithSampleSizeForUserRatingScore:(unsigned int)arg1 normalizedUserRatingScore:(float)arg2;	// IMP=0x00000000012caef7

@end
