//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLFunctionConstant.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MTLFunctionConstantInternal : MTLFunctionConstant
{
    NSString *_name;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    unsigned long long _index;	// 24 = 0x18
    _Bool _required;	// 32 = 0x20
}

- (_Bool)required;	// IMP=0x00000000000a21fc
- (unsigned long long)index;	// IMP=0x00000000000a21eb
- (unsigned long long)type;	// IMP=0x00000000000a21da
- (id)name;	// IMP=0x00000000000a21c9
- (id)description;	// IMP=0x00000000000a21b5
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000a2009
- (void)dealloc;	// IMP=0x00000000000a1fc7
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 index:(unsigned long long)arg3 required:(_Bool)arg4;	// IMP=0x00000000000a1f38

@end
