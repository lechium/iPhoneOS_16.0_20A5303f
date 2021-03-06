//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface LSSliceInfo : NSObject
{
    int _type;	// 8 = 0x8
    int _subtype;	// 12 = 0xc
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000140e86
@property(readonly, nonatomic) int subtype; // @synthesize subtype=_subtype;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (struct LSSliceData)sliceValue;	// IMP=0x0000000000140f82
- (id)description;	// IMP=0x0000000000140f51
- (unsigned long long)hash;	// IMP=0x0000000000140f3a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000140e8e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000140e11
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000140d5a
- (id)initWithSliceDescData:(struct LSSliceData)arg1;	// IMP=0x0000000000140d40
- (id)initWithType:(int)arg1 subtype:(int)arg2;	// IMP=0x0000000000140cfa

@end

