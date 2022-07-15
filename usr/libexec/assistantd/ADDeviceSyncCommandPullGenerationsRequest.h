//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ADDeviceSyncCommandPullGenerationsRequest : NSObject
{
    NSArray *_dataTypes;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000a4903
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a4694
- (void).cxx_destruct;	// IMP=0x00100000000a4a06
@property(readonly, copy, nonatomic) NSArray *dataTypes; // @synthesize dataTypes=_dataTypes;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000a49d9
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000a490b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000a48f8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a4855
- (unsigned long long)hash;	// IMP=0x00100000000a483f
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00100000000a47b9
- (id)description;	// IMP=0x00100000000a47a5
- (id)initWithDataTypes:(id)arg1;	// IMP=0x00100000000a46f5
- (id)init;	// IMP=0x00100000000a46e1
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a45a0
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a4b0c

@end
