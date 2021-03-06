//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ADDeviceSyncCommandPullGenerationsResponse : NSObject
{
    NSDictionary *_generationsByDataType;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000002b1a54
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b17e5
- (void).cxx_destruct;	// IMP=0x00100000002b1b69
@property(readonly, copy, nonatomic) NSDictionary *generationsByDataType; // @synthesize generationsByDataType=_generationsByDataType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002b1b3c
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002b1a5c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000002b1a49
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000002b19a6
- (unsigned long long)hash;	// IMP=0x00100000002b1990
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00100000002b190a
- (id)description;	// IMP=0x00100000002b18f6
- (id)initWithGenerationsByDataType:(id)arg1;	// IMP=0x00100000002b1846
- (id)init;	// IMP=0x00100000002b1832
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b16f1
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b1c6f

@end

