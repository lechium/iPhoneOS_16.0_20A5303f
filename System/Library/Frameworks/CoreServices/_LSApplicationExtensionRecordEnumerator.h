//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_LSRecordEnumerator.h"

@class LSExtensionPointRecord, LSPropertyList, NSString;

__attribute__((visibility("hidden")))
@interface _LSApplicationExtensionRecordEnumerator : _LSRecordEnumerator
{
    NSString *_extensionPointID;	// 8 = 0x8
    unsigned int _platform;	// 16 = 0x10
    LSExtensionPointRecord *_extensionPointRecord;	// 24 = 0x18
    unsigned long long _options;	// 32 = 0x20
    CDUnknownBlockType _filterBlock;	// 40 = 0x28
    LSPropertyList *_propertyList;	// 48 = 0x30
    struct vector<unsigned int, std::allocator<unsigned int>> _plugins;	// 56 = 0x38
}

- (id).cxx_construct;	// IMP=0x00000000000ff1ec
- (void).cxx_destruct;	// IMP=0x00000000000ff17f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ff062
- (_Bool)_getObject:(id *)arg1 atIndex:(unsigned long long)arg2 context:(struct LSContext *)arg3;	// IMP=0x00000000000fef19
- (_Bool)_prepareWithContext:(struct LSContext *)arg1 error:(id *)arg2;	// IMP=0x00000000000febed
- (id)initWithExtensionPoint:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000000feaf1
- (id)initWithExtensionPointIdentifier:(id)arg1 options:(unsigned long long)arg2 platform:(unsigned int)arg3 filter:(CDUnknownBlockType)arg4;	// IMP=0x00000000000fe9e7
- (id)initWithExtensionPointIdentifier:(id)arg1 options:(unsigned long long)arg2 filter:(CDUnknownBlockType)arg3;	// IMP=0x00000000000fe9ce
- (id)initWithExtensionPointIdentifier:(id)arg1 options:(unsigned long long)arg2 platform:(unsigned int)arg3;	// IMP=0x00000000000fe9b8
- (id)initWithExtensionPointIdentifier:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000000fe9a2
- (_Bool)_evaluatePluginNoIO:(unsigned int)arg1 data:(const struct LSPluginData *)arg2 extensionPointID:(unsigned int)arg3 context:(struct LSContext *)arg4;	// IMP=0x00000000000ff362
- (_Bool)_getExtensionPointID:(unsigned int *)arg1 context:(struct LSContext *)arg2 error:(id *)arg3;	// IMP=0x00000000000ff29b

@end
