//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface XDCCancelInstallRequest : PBRequest
{
    NSString *_bundleID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000116afb
- (unsigned long long)hash;	// IMP=0x0010000000116ade
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000116a44
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001169cc
- (void)writeTo:(id)arg1;	// IMP=0x00100000001169af
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000011683a
- (id)dictionaryRepresentation;	// IMP=0x00100000001167de
- (id)description;	// IMP=0x001000000011672f

@end

