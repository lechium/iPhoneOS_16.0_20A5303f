//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface PDPresentation
{
    NSMutableArray *mSlideMasters;	// 88 = 0x58
    NSMutableArray *mNotesMasters;	// 96 = 0x60
    NSMutableArray *mSlides;	// 104 = 0x68
    NSMutableArray *mBulletBlips;	// 112 = 0x70
    struct CGSize mSlideSize;	// 120 = 0x78
    struct CGSize mNotesSize;	// 136 = 0x88
    _Bool mIsAutoPlay;	// 152 = 0x98
    _Bool mIsCommentsVisible;	// 153 = 0x99
    _Bool mIsLooping;	// 154 = 0x9a
    _Bool mIsKiosk;	// 155 = 0x9b
    NSMutableArray *mCommentAuthors;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x0000000000446b09
- (id)description;	// IMP=0x0000000000446acb
- (void)removeUnnecessaryOverrides;	// IMP=0x0000000000446a41
- (void)setUpPropertyHierarchyPreservingEffectiveValues;	// IMP=0x000000000044672b
- (void)ensureDefaultLayoutsForMasters;	// IMP=0x000000000044648a
- (void)flushUnusedMastersAndLayouts;	// IMP=0x0000000000446111
- (void)addCommentAuthor:(id)arg1;	// IMP=0x00000000004460f3
- (id)commentAuthorAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004460d6
- (unsigned long long)commentAuthorCount;	// IMP=0x00000000004460b9
- (void)setIsKiosk:(_Bool)arg1;	// IMP=0x0000000000166cc2
- (_Bool)isKiosk;	// IMP=0x00000000004460a9
- (void)setIsLooping:(_Bool)arg1;	// IMP=0x0000000000166cb2
- (_Bool)isLooping;	// IMP=0x0000000000446099
- (void)setIsCommentsVisible:(_Bool)arg1;	// IMP=0x000000000001d2c4
- (_Bool)isCommentsVisible;	// IMP=0x0000000000446089
- (void)setIsAutoPlay:(_Bool)arg1;	// IMP=0x000000000000b460
- (_Bool)isAutoPlay;	// IMP=0x0000000000446079
- (void)setNotesSize:(struct CGSize)arg1;	// IMP=0x000000000001d2ac
- (struct CGSize)notesSize;	// IMP=0x0000000000446061
- (void)setSlideSize:(struct CGSize)arg1;	// IMP=0x000000000001d294
- (struct CGSize)slideSize;	// IMP=0x0000000000037e1c
- (id)bulletBlips;	// IMP=0x00000000001c7fb5
- (unsigned int)bulletBlipCount;	// IMP=0x00000000001604db
- (unsigned int)addBulletBlip:(id)arg1;	// IMP=0x0000000000160458
- (id)bulletBlipAtIndex:(int)arg1;	// IMP=0x0000000000446041
- (unsigned long long)indexOfSlide:(id)arg1;	// IMP=0x0000000000445f9c
- (void)addSlide:(id)arg1;	// IMP=0x0000000000445f7e
- (id)slideAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000445f61
- (unsigned long long)slideCount;	// IMP=0x0000000000445f44
- (void)addNotesMaster:(id)arg1;	// IMP=0x00000000001dc0c6
- (id)notesMasterAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000445ee5
- (unsigned long long)notesMasterCount;	// IMP=0x0000000000445ec8
- (void)addSlideMaster:(id)arg1;	// IMP=0x000000000001e52e
- (id)slideMasterAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000445eab
- (unsigned long long)slideMasterCount;	// IMP=0x0000000000445e8e
- (id)init;	// IMP=0x0000000000009dc5
- (void)cacheGraphicStylesForSlideBase:(id)arg1;	// IMP=0x0000000000034757
- (void)cacheGraphicStyleForDrawable:(id)arg1 colorContext:(id)arg2;	// IMP=0x0000000000034b5b

@end

