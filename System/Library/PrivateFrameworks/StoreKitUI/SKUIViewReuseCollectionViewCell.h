//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUICollectionViewCell.h"

@class NSArray, NSMapTable, SKUIViewReusePool;

__attribute__((visibility("hidden")))
@interface SKUIViewReuseCollectionViewCell : SKUICollectionViewCell
{
    NSMapTable *_allViewTextProperties;	// 8 = 0x8
    SKUIViewReusePool *_viewPool;	// 16 = 0x10
    NSArray *_allExistingViews;	// 24 = 0x18
    struct UIEdgeInsets _contentInset;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000373af8
@property(readonly, nonatomic) NSArray *allExistingViews; // @synthesize allExistingViews=_allExistingViews;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000000373940
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x0000000000373791
- (id)textPropertiesForView:(id)arg1;	// IMP=0x0000000000373774
- (void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2;	// IMP=0x00000000003736ff
- (void)modifyUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000373423
- (id)existingViewsForReuseIdentifier:(id)arg1;	// IMP=0x0000000000373242
- (id)existingViewForIndex:(long long)arg1;	// IMP=0x00000000003731e3
- (void)enumerateExistingViewsForReuseIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000372ff3
- (void)dealloc;	// IMP=0x0000000000372e4f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000372dce

@end
