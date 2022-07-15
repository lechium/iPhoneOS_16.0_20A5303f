//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PDSlideMaster;

__attribute__((visibility("hidden")))
@interface PDSlideLayout
{
    int mSlideLayoutType;	// 96 = 0x60
    PDSlideMaster *mSlideMaster;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000004493ea
- (id)description;	// IMP=0x00000000004493ac
- (void)doneWithContent;	// IMP=0x000000000044937d
- (id)parentSlideBase;	// IMP=0x000000000003899d
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;	// IMP=0x0000000000038e80
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;	// IMP=0x0000000000038d67
- (id)parentTextStyleForTables;	// IMP=0x00000000001fca5b
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(_Bool)arg4;	// IMP=0x0000000000038a82
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;	// IMP=0x0000000000038c41
- (id)transition;	// IMP=0x00000000004492c4
- (id)background;	// IMP=0x00000000000a4069
- (id)defaultTheme;	// IMP=0x00000000000a96dd
@property __weak PDSlideMaster *slideMaster; // @synthesize slideMaster=mSlideMaster;
- (void)setSlideLayoutType:(int)arg1;	// IMP=0x000000000003849b
- (int)slideLayoutType;	// IMP=0x000000000003970b
- (id)initWithSlideMaster:(id)arg1;	// IMP=0x000000000003831e

@end
