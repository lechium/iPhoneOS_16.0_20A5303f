//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class TASKInput;

@interface TASKRequest : PBRequest
{
    TASKInput *_input;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000070950
@property(retain, nonatomic) TASKInput *input; // @synthesize input=_input;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000708ce
- (unsigned long long)hash;	// IMP=0x00100000000708b1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000070817
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007079f
- (void)copyTo:(id)arg1;	// IMP=0x001000000007077c
- (void)writeTo:(id)arg1;	// IMP=0x001000000007075f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000070752
- (id)dictionaryRepresentation;	// IMP=0x0010000000070507
- (id)description;	// IMP=0x0010000000070458

@end

