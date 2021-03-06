//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface WFTreeXMLDocumentStripper : NSObject
{
    struct _xmlDoc *xmlDocument;	// 8 = 0x8
    NSString *pageTitle;	// 16 = 0x10
    NSMutableDictionary *metaTagsLabeled;	// 24 = 0x18
    NSMutableArray *metaTagsUnlabeled;	// 32 = 0x20
    NSMutableArray *scriptBlocks;	// 40 = 0x28
    NSMutableArray *images;	// 48 = 0x30
    NSString *pageContent;	// 56 = 0x38
    NSMutableArray *links;	// 64 = 0x40
    _Bool hasFrameset;	// 72 = 0x48
    _Bool hasShortRefresh;	// 73 = 0x49
}

+ (id)treeStripperWithXMLDocument:(struct _xmlDoc *)arg1;	// IMP=0x001000000000612f
- (void)dealloc;	// IMP=0x0000000000006a95
- (id)description;	// IMP=0x0000000000006985
- (id)processXMLDocument:(struct _xmlDoc *)arg1 blockComments:(_Bool)arg2;	// IMP=0x00000000000063a0
- (void)processXMLDocument:(struct _xmlDoc *)arg1;	// IMP=0x00000000000062f3
- (void)strip;	// IMP=0x00000000000062dd
- (_Bool)hasShortRefresh;	// IMP=0x00000000000062d4
- (_Bool)hasFrameset;	// IMP=0x00000000000062cb
- (id)links;	// IMP=0x00000000000062c1
- (id)pageContent;	// IMP=0x00000000000062b7
- (id)images;	// IMP=0x00000000000062ad
- (id)scriptBlocks;	// IMP=0x00000000000062a3
- (id)metaTagsUnlabeled;	// IMP=0x0000000000006299
- (id)metaTagsLabeled;	// IMP=0x000000000000628f
- (id)metaTagRating;	// IMP=0x0000000000006272
- (id)metaTagKeywords;	// IMP=0x0000000000006255
- (id)metaTagDescription;	// IMP=0x0000000000006238
- (id)pageTitle;	// IMP=0x000000000000622e
- (id)URLString;	// IMP=0x0000000000006226
- (void)setPageTitle:(id)arg1;	// IMP=0x00000000000061fd
- (void)setXMLDocument:(struct _xmlDoc *)arg1;	// IMP=0x00000000000061f3
- (id)initWithXMLDocument:(struct _xmlDoc *)arg1;	// IMP=0x0000000000006166

@end

