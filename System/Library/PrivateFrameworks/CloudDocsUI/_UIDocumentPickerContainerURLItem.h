//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIDocumentPickerContainerItem.h"

@class NSArray, NSDate, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerContainerURLItem : _UIDocumentPickerContainerItem
{
    NSURL *_url;	// 8 = 0x8
    long long _cachedType;	// 16 = 0x10
    NSString *_cachedTitle;	// 24 = 0x18
    NSString *_cachedSubtitle;	// 32 = 0x20
    NSString *_cachedSubtitle2;	// 40 = 0x28
    NSArray *_cachedTags;	// 48 = 0x30
    unsigned long long _cachedIndentation;	// 56 = 0x38
    NSString *_cachedSortPath;	// 64 = 0x40
    NSString *_cachedContentType;	// 72 = 0x48
    NSDate *_cachedContentModifiedDate;	// 80 = 0x50
    _Bool _cachedIsAlias;	// 88 = 0x58
    id _generationIdentifier;	// 96 = 0x60
}

+ (id)defaultKeys;	// IMP=0x0060000000027aae
- (void).cxx_destruct;	// IMP=0x0000000000028672
- (_Bool)renameable;	// IMP=0x00000000000285b9
- (id)sortPath;	// IMP=0x00000000000284e5
- (id)sortPathComponents;	// IMP=0x00000000000283d1
- (unsigned long long)indentationLevel;	// IMP=0x0000000000028367
- (void)_cacheIndentationLevelWithSortPathComponents:(id)arg1;	// IMP=0x0000000000028339
- (void)_modelChanged;	// IMP=0x0000000000028287
- (id)modificationDate;	// IMP=0x0000000000028272
- (id)tags;	// IMP=0x000000000002825d
- (id)urlInLocalContainer;	// IMP=0x0000000000028248
- (id)url;	// IMP=0x0000000000028233
- (id)subtitle2;	// IMP=0x000000000002821e
- (id)subtitle;	// IMP=0x0000000000028209
- (id)title;	// IMP=0x00000000000281f4
- (_Bool)isAlias;	// IMP=0x00000000000281e4
- (id)contentType;	// IMP=0x00000000000281cf
- (long long)type;	// IMP=0x00000000000281be
- (void)cacheValues;	// IMP=0x0000000000027b96
- (_Bool)attributesModified:(id)arg1;	// IMP=0x0000000000027a45
- (void)_removeCachedValues;	// IMP=0x000000000002797e
- (id)initWithURL:(id)arg1;	// IMP=0x00000000000278eb

@end
