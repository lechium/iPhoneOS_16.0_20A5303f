//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSString, UIResponder;

__attribute__((visibility("hidden")))
@interface SKUIPanelView
{
    NSMapTable *_animators;	// 8 = 0x8
    UIResponder *_inputResponder;	// 16 = 0x10
    NSMapTable *_viewElements;	// 24 = 0x18
    NSMapTable *_viewMargins;	// 32 = 0x20
}

+ (_Bool)_useEditorialLayoutForLabelElement:(id)arg1;	// IMP=0x00100000001ef4c0
+ (struct CGSize)_sizeForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00100000001ef3d9
+ (_Bool)_shouldDisplayViewElement:(id)arg1;	// IMP=0x00100000001ef3bc
+ (struct UIEdgeInsets)_marginsForViewElement:(id)arg1 index:(unsigned long long)arg2 width:(double)arg3 context:(id)arg4;	// IMP=0x00100000001ef263
+ (_Bool)_isValidTextInputViewElement:(id)arg1;	// IMP=0x00100000001ef1b0
+ (void)_enumerateChildrenOfViewElement:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001eeeb9
+ (id)_attributedStringForText:(id)arg1 style:(id)arg2 context:(id)arg3;	// IMP=0x00100000001eedb4
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x00100000001ed41e
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00100000001ed098
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00100000001ed082
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00100000001ecf46
- (void).cxx_destruct;	// IMP=0x00000000001ef544
- (void)animatorFeature:(id)arg1 performAnimationWithName:(id)arg2 options:(id)arg3;	// IMP=0x00000000001eec9d
- (void)_buttonAction:(id)arg1;	// IMP=0x00000000001eec32
- (void)layoutSubviews;	// IMP=0x00000000001ee20b
- (_Bool)resignFirstResponder;	// IMP=0x00000000001ee1b7
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000001ee163
- (_Bool)becomeFirstResponder;	// IMP=0x00000000001ee10f
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000001ee107
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000001ee0ff
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000001eddc6
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x00000000001eddc0
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000001ed62d
- (void)dealloc;	// IMP=0x00000000001ecde5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001ecce9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
