//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVContainerCollectionViewCell.h"

@class NSString, UIView;
@protocol TVAuxiliaryViewSelecting, TVCollectionViewLockupCellDelegate;

__attribute__((visibility("hidden")))
@interface _TVCollectionViewLockupCell : TVContainerCollectionViewCell
{
    _Bool _pressIsAnimating;	// 8 = 0x8
    UIView<TVAuxiliaryViewSelecting> *__selectingView;	// 16 = 0x10
    _Bool _unpressOnEndAnimating;	// 24 = 0x18
    struct {
        _Bool respondsToDidUnfocus;
        _Bool respondsToDidSelect;
        _Bool respondsToLayeredImageContainerLayerWithinCollectionViewCell;
    } _delegateFlags;	// 25 = 0x19
    id <TVCollectionViewLockupCellDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001cf33
@property(nonatomic) __weak id <TVCollectionViewLockupCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000001cd70
- (void)_showPressState;	// IMP=0x000000000001cd6a
- (void)_handleSelect;	// IMP=0x000000000001cb95
- (id)_selectingView;	// IMP=0x000000000001c9e7
- (void)_clearPressState;	// IMP=0x000000000001c9e1
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;	// IMP=0x000000000001c967
- (_Bool)_descendantsShouldHighlight;	// IMP=0x000000000001c95f
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x000000000001c810
- (id)layeredImageContainerLayer;	// IMP=0x000000000001c7af
- (void)prepareForReuse;	// IMP=0x000000000001c5a8
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000001c287
- (void)_searchForFocusRegionsInContext:(id)arg1;	// IMP=0x000000000001bc55
- (id)selectingView;	// IMP=0x000000000001bb4d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001ba8f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

