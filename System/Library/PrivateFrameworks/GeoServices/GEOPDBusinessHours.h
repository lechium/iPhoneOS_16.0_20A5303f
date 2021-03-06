//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLocalizedString, GEOPDHoursThreshold, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBusinessHours : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    unsigned long long _end;	// 24 = 0x18
    GEOPDHoursThreshold *_hoursThreshold;	// 32 = 0x20
    GEOLocalizedString *_message;	// 40 = 0x28
    GEOLocalizedString *_shortMessage;	// 48 = 0x30
    unsigned long long _start;	// 56 = 0x38
    NSMutableArray *_weeklyHours;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    int _hoursType;	// 84 = 0x54
    struct {
        unsigned int has_end:1;
        unsigned int has_start:1;
        unsigned int has_hoursType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_hoursThreshold:1;
        unsigned int read_message:1;
        unsigned int read_shortMessage:1;
        unsigned int read_weeklyHours:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 88 = 0x58
}

+ (id)businessHoursForPlaceData:(id)arg1;	// IMP=0x0010000000a71979
- (void).cxx_destruct;	// IMP=0x0000000000b8b81e
- (unsigned long long)hash;	// IMP=0x0000000000b8b510
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b8b338
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b8af5f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b8aa73
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b8aa64
- (id)jsonRepresentation;	// IMP=0x0000000000b8921f
- (id)dictionaryRepresentation;	// IMP=0x0000000000b88af6
- (id)description;	// IMP=0x0000000000b88a47
- (id)initWithData:(id)arg1;	// IMP=0x0000000000b87855
- (id)init;	// IMP=0x0000000000b877f9

@end

