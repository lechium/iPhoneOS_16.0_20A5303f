//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_LSRecordEnumerator.h"

@class LSApplicationRecord;

__attribute__((visibility("hidden")))
@interface _LSExtensionPointRecordEnumerator : _LSRecordEnumerator
{
    struct vector<unsigned int, std::allocator<unsigned int>> _extensionIDs;	// 8 = 0x8
    LSApplicationRecord *_parentApplicationRecord;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x00000000000da9db
- (void).cxx_destruct;	// IMP=0x00000000000da99a
@property(retain) LSApplicationRecord *parentApplicationRecord; // @synthesize parentApplicationRecord=_parentApplicationRecord;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000da8ff
- (_Bool)_getObject:(id *)arg1 atIndex:(unsigned long long)arg2 context:(struct LSContext *)arg3;	// IMP=0x00000000000da85c
- (_Bool)_prepareWithContext:(struct LSContext *)arg1 error:(id *)arg2;	// IMP=0x00000000000da622

@end
