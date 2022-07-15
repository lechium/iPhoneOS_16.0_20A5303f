//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "INImage.h"

@class NSData, NSUUID;

__attribute__((visibility("hidden")))
@interface _INDataImage : INImage
{
    NSUUID *_sha256HashUUID;	// 8 = 0x8
    NSData *_imageData;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000142a36
- (void).cxx_destruct;	// IMP=0x0000000000142a05
@property(readonly, copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000142959
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001428dc
- (id)_sha256HashUUID;	// IMP=0x00000000001427ee
- (_Bool)_isEligibleForProxying;	// IMP=0x00000000001427e6
- (void)_setImageData:(id)arg1;	// IMP=0x000000000014277b
- (id)_imageData;	// IMP=0x0000000000142769
- (id)_copyWithSubclass:(Class)arg1;	// IMP=0x000000000014269d
- (id)_dictionaryRepresentation;	// IMP=0x000000000014250e
- (id)_identifier;	// IMP=0x00000000001424be
- (void)_retrieveImageDataWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000001424a5
- (_Bool)_requiresRetrieval;	// IMP=0x0000000000142472
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001423c6
- (id)initWithImageData:(id)arg1;	// IMP=0x0000000000142356
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002a980e

@end
