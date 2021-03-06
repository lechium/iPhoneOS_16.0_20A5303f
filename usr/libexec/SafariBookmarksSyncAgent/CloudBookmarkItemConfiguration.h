//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSOrderedSet, NSSet, NSString;

@interface CloudBookmarkItemConfiguration : NSObject
{
    NSDictionary *_attributeKeysToGenerationKeys;	// 8 = 0x8
    NSDictionary *_attributeKeysToTransformers;	// 16 = 0x10
    NSDictionary *_identityHashKeysToTransformers;	// 24 = 0x18
    long long _itemType;	// 32 = 0x20
    long long _itemSubtype;	// 40 = 0x28
    NSString *_recordType;	// 48 = 0x30
    NSSet *_knownKeys;	// 56 = 0x38
    NSOrderedSet *_identityHashKeys;	// 64 = 0x40
    CDUnknownBlockType _recordTestBlock;	// 72 = 0x48
}

+ (id)tabGroupBookmarkConfiguration;	// IMP=0x002000000004552e
+ (id)tabGroupBookmarkFolderConfiguration;	// IMP=0x00100000000451b9
+ (id)tabGroupTabConfiguration;	// IMP=0x0010000000044e09
+ (id)tabGroupConfiguration;	// IMP=0x0010000000044af3
+ (id)cloudTabGroupConfigurations;	// IMP=0x0010000000044978
+ (id)bookmarkFolderConfigurationWithType:(long long)arg1;	// IMP=0x0010000000044324
+ (id)readingListItemConfiguration;	// IMP=0x0010000000043e4d
+ (id)bookmarkConfiguration;	// IMP=0x0010000000043b83
+ (id)cloudBookmarkConfigurations;	// IMP=0x00100000000439bb
- (void).cxx_destruct;	// IMP=0x0020000000046643
@property(readonly, copy, nonatomic) CDUnknownBlockType recordTestBlock; // @synthesize recordTestBlock=_recordTestBlock;
@property(readonly, copy, nonatomic) NSOrderedSet *identityHashKeys; // @synthesize identityHashKeys=_identityHashKeys;
@property(readonly, copy, nonatomic) NSSet *knownKeys; // @synthesize knownKeys=_knownKeys;
@property(readonly, copy, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
@property(readonly, nonatomic) long long itemSubtype; // @synthesize itemSubtype=_itemSubtype;
@property(readonly, nonatomic) long long itemType; // @synthesize itemType=_itemType;
- (id)identityHashComponentsForRecord:(id)arg1;	// IMP=0x001000000004626d
- (_Bool)canParseBookmark:(id)arg1;	// IMP=0x00100000000461e6
- (_Bool)canParseChange:(void *)arg1 usingDatabaseAccessor:(id)arg2;	// IMP=0x0010000000046165
- (_Bool)canParseItem:(void *)arg1 usingDatabaseAccessor:(id)arg2;	// IMP=0x00100000000460e4
- (_Bool)canParseRecord:(id)arg1;	// IMP=0x001000000004605c
- (_Bool)canParseRecordType:(id)arg1;	// IMP=0x0010000000046025
- (id)valueTransformerForIdentityHashKey:(id)arg1;	// IMP=0x0010000000045fbf
- (_Bool)canSaveIdentityHashAttributesInDictionary:(id)arg1;	// IMP=0x0010000000045db9
- (_Bool)isIdentityHashKey:(id)arg1;	// IMP=0x0010000000045da3
- (id)generationKeyForKey:(id)arg1;	// IMP=0x0010000000045d36
- (id)valueTransformerForAttributeKey:(id)arg1 record:(id)arg2;	// IMP=0x0010000000045cad
- (id)valueTransformerForAttributeKey:(id)arg1;	// IMP=0x0010000000045c47
- (id)_defaultTransformer;	// IMP=0x0010000000045bf2
- (unsigned long long)hash;	// IMP=0x0010000000045bbe
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000045ad1
- (id)initWithItemType:(long long)arg1 itemSubtype:(long long)arg2 recordType:(id)arg3 knownKeys:(id)arg4 identityHashKeys:(id)arg5 customAttributeGenerationKeys:(id)arg6 attributeValueTransformers:(id)arg7 identityHashValueTransformers:(id)arg8 forRecordsPassingTest:(CDUnknownBlockType)arg9;	// IMP=0x0010000000045932

@end

