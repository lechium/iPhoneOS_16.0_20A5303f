//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIKeyboardEmojiCategory;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiSplitCharacterPicker
{
    UIKeyboardEmojiCategory *_category;	// 40 = 0x28
}

+ (_Bool)wantsScreenTraits;	// IMP=0x0060000000b1c970
- (void).cxx_destruct;	// IMP=0x0000000000b1daa4
- (void)setCategory:(id)arg1;	// IMP=0x0000000000b1da90
- (id)category;	// IMP=0x0000000000b1da77
- (void)updateToCategory:(long long)arg1;	// IMP=0x0000000000b1d74c
- (void)didMoveToWindow;	// IMP=0x0000000000b1d57b
- (double)snappedYOffsetForOffset:(double)arg1;	// IMP=0x0000000000b1d04c
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0000000000b1d01a
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x0000000000b1d00c
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x0000000000b1cffe
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x0000000000b1cf14
- (void)dealloc;	// IMP=0x0000000000b1ceda
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;	// IMP=0x0000000000b1c978

@end

