//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLStructType.h"

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MTLStructTypeInternal : MTLStructType
{
    unsigned long long _dataType;	// 8 = 0x8
    NSDictionary *_dictionary;	// 16 = 0x10
    NSArray *_members;	// 24 = 0x18
    _Bool _isIndirectArgumentBuffer;	// 32 = 0x20
    NSString *_typeName;	// 40 = 0x28
}

@property(readonly) NSString *typeName; // @synthesize typeName=_typeName;
@property _Bool isIndirectArgumentBuffer; // @synthesize isIndirectArgumentBuffer=_isIndirectArgumentBuffer;
- (unsigned long long)dataType;	// IMP=0x00000000000d292c
- (_Bool)isStructLayoutThreadSafeWith:(id)arg1;	// IMP=0x00000000000d261e
- (id)members;	// IMP=0x00000000000d260d
- (id)description;	// IMP=0x00000000000d25f9
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000d22d7
- (void)dealloc;	// IMP=0x00000000000d2271
- (id)memberByName:(id)arg1;	// IMP=0x00000000000d2254
- (void)setMembers:(id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000d2089
- (id)init;	// IMP=0x00000000000d204b
- (id)initWithMembers:(id *)arg1 count:(unsigned long long)arg2 typeName:(id)arg3;	// IMP=0x00000000000d2004
- (id)initWithMembers:(id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000d1e1a

@end
