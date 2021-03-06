//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SYLogMultiSuspendableQueueState : PBCodable
{
    NSString *_label;	// 8 = 0x8
    int _resumeCount;	// 16 = 0x10
    NSString *_target;	// 24 = 0x18
    struct {
        unsigned int resumeCount:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000095c3b
@property(retain, nonatomic) NSString *target; // @synthesize target=_target;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) int resumeCount; // @synthesize resumeCount=_resumeCount;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000095b5e
- (unsigned long long)hash;	// IMP=0x0000000000095ade
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000959e9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000095928
- (void)copyTo:(id)arg1;	// IMP=0x00000000000958a5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000095824
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000095817
- (id)dictionaryRepresentation;	// IMP=0x00000000000954fe
- (id)description;	// IMP=0x000000000009544f
@property(readonly, nonatomic) _Bool hasTarget;
@property(readonly, nonatomic) _Bool hasLabel;
@property(nonatomic) _Bool hasResumeCount;

@end

