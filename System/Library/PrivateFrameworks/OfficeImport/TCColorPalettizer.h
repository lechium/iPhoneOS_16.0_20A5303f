//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TCColorPalettizer : NSObject
{
    struct _tagOctree *m_pTree;	// 8 = 0x8
    _Bool isDefaultPaletteSize;	// 16 = 0x10
}

- (int)paletteIndexFromQuadColor:(struct _tagRgbQuad)arg1;	// IMP=0x00000000002d852a
- (int)paletteIndexFromTSUColor:(id)arg1;	// IMP=0x00000000002d846f
- (id)getPaletteData;	// IMP=0x00000000002d82b3
- (id)getPngPaletteData;	// IMP=0x00000000002d8139
- (id)getPaletteDataRaw;	// IMP=0x00000000002d8006
- (unsigned int)paletteColorCount;	// IMP=0x00000000002d7fe5
- (void)createPalette;	// IMP=0x00000000002d7fad
- (_Bool)addQuadColor:(struct _tagRgbQuad)arg1;	// IMP=0x00000000002d7edb
- (_Bool)addTSUColor:(id)arg1;	// IMP=0x00000000002d7e1a
- (void)dealloc;	// IMP=0x00000000002d7dd0
- (id)initWitDefaultPaletteSize;	// IMP=0x00000000002d7d74
- (id)initWitMaxPaletteSize:(unsigned int)arg1;	// IMP=0x00000000002d7d12
- (int)rgbToIndexOctree:(struct _tagOctree *)arg1 source:(struct _tagRgbQuad)arg2 destination:(char *)arg3;	// IMP=0x00000000002d8c5e
- (unsigned short)getPaletteFromOctree:(struct _tagOctreeNode *)arg1 paletteEntry:(struct _tagRgbQuad *)arg2 index:(unsigned short)arg3;	// IMP=0x00000000002d8b82
- (int)reduceOctree:(struct _tagOctree *)arg1;	// IMP=0x00000000002d89de
- (int)addPixelToOctree:(struct _tagOctree *)arg1 pixel:(struct _tagRgbQuad)arg2;	// IMP=0x00000000002d883b
- (int)deleteListOctree:(struct _tagLevelItem *)arg1;	// IMP=0x00000000002d87fa
- (int)deleteNodeOctree:(struct _tagOctreeNode *)arg1;	// IMP=0x00000000002d8795
- (int)createNodeOctree:(struct _tagOctreeNode **)arg1 parent:(struct _tagOctreeNode *)arg2;	// IMP=0x00000000002d8745
- (int)deleteOctree:(struct _tagOctree *)arg1;	// IMP=0x00000000002d86c0
- (int)createOctree:(struct _tagOctree **)arg1 maxPaletteSize:(unsigned short)arg2;	// IMP=0x00000000002d85d8

@end
