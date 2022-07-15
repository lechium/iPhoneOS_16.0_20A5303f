//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NMMessage : PBCodable
{
    double _enqueuedTimeInterval;	// 8 = 0x8
    double _sentTimestamp;	// 16 = 0x10
    NSMutableArray *_arguments;	// 24 = 0x18
    NSMutableArray *_compressedArguments;	// 32 = 0x20
    int _priority;	// 40 = 0x28
    NSString *_senderUUID;	// 48 = 0x30
    int _type;	// 56 = 0x38
    struct {
        unsigned int enqueuedTimeInterval:1;
        unsigned int sentTimestamp:1;
        unsigned int priority:1;
        unsigned int type:1;
    } _has;	// 60 = 0x3c
}

+ (Class)compressedArgumentType;	// IMP=0x00200000000185d4
+ (Class)argumentType;	// IMP=0x0010000000018502
- (void).cxx_destruct;	// IMP=0x001000000001a77d
@property(nonatomic) double enqueuedTimeInterval; // @synthesize enqueuedTimeInterval=_enqueuedTimeInterval;
@property(nonatomic) double sentTimestamp; // @synthesize sentTimestamp=_sentTimestamp;
@property(retain, nonatomic) NSString *senderUUID; // @synthesize senderUUID=_senderUUID;
@property(retain, nonatomic) NSMutableArray *compressedArguments; // @synthesize compressedArguments=_compressedArguments;
@property(retain, nonatomic) NSMutableArray *arguments; // @synthesize arguments=_arguments;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000001a408
- (unsigned long long)hash;	// IMP=0x001000000001a135
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000019f89
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000019bac
- (void)copyTo:(id)arg1;	// IMP=0x00100000000199ac
- (void)writeTo:(id)arg1;	// IMP=0x00100000000196ec
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000019278
- (id)dictionaryRepresentation;	// IMP=0x00100000000188b4
- (id)description;	// IMP=0x0010000000018805
@property(nonatomic) _Bool hasEnqueuedTimeInterval;
@property(nonatomic) _Bool hasSentTimestamp;
- (int)StringAsPriority:(id)arg1;	// IMP=0x00100000000186d4
- (id)priorityAsString:(int)arg1;	// IMP=0x0010000000018667
@property(nonatomic) _Bool hasPriority;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) _Bool hasSenderUUID;
- (id)compressedArgumentAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000185b7
- (unsigned long long)compressedArgumentsCount;	// IMP=0x001000000001859a
- (void)addCompressedArgument:(id)arg1;	// IMP=0x0010000000018530
- (void)clearCompressedArguments;	// IMP=0x0010000000018513
- (id)argumentAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000184e5
- (unsigned long long)argumentsCount;	// IMP=0x00100000000184c8
- (void)addArgument:(id)arg1;	// IMP=0x001000000001845e
- (void)clearArguments;	// IMP=0x0010000000018441
- (int)StringAsType:(id)arg1;	// IMP=0x0010000000017dfc
- (id)typeAsString:(int)arg1;	// IMP=0x00100000000179f1
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)shortDebugDescription;	// IMP=0x001000000004da39
- (_Bool)decompressArguments;	// IMP=0x001000000004d88e
- (void)addArgument:(id)arg1 withCompressionType:(int)arg2;	// IMP=0x001000000004d80c
- (id)argumentForTag:(int)arg1;	// IMP=0x001000000004d6af
- (long long)IDSMessagePriority;	// IMP=0x001000000004d658

@end
