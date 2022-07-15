//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString, UICollectionView, UIMultiSelectInteraction, UIMultiSelectInteractionState;

__attribute__((visibility("hidden")))
@interface _UICollectionViewMultiSelectController : NSObject
{
    long long _computedAxisConstraint;	// 8 = 0x8
    struct {
        unsigned int visibleCellsDirtied:1;
    } _flags;	// 16 = 0x10
    UICollectionView *_collectionView;	// 24 = 0x18
    UIMultiSelectInteraction *_multiSelectInteraction;	// 32 = 0x20
    UIMultiSelectInteractionState *_selectionState;	// 40 = 0x28
    NSMapTable *_contentMaskCache;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000073e7d5
@property(retain, nonatomic) NSMapTable *contentMaskCache; // @synthesize contentMaskCache=_contentMaskCache;
@property(retain, nonatomic) UIMultiSelectInteractionState *selectionState; // @synthesize selectionState=_selectionState;
@property(retain, nonatomic) UIMultiSelectInteraction *multiSelectInteraction; // @synthesize multiSelectInteraction=_multiSelectInteraction;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic, getter=isInMultiselectInteraction) _Bool inMultiselectInteraction;
- (_Bool)_allowsBandSelectionStartingAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000073e5a3
- (_Bool)multiSelectInteraction:(id)arg1 shouldStartBandSelectionAtPoint:(struct CGPoint)arg2;	// IMP=0x000000000073e591
- (void)didCancelMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x000000000073e4f1
- (_Bool)multiSelectInteractionGestureShouldPreventDragLiftGesture:(id)arg1;	// IMP=0x000000000073e445
- (void)multiSelectInteraction:(id)arg1 appendSelectionAtPoint:(struct CGPoint)arg2;	// IMP=0x000000000073e316
- (void)multiSelectInteraction:(id)arg1 toggleSelectionStateUpToPoint:(struct CGPoint)arg2;	// IMP=0x000000000073e283
- (_Bool)shouldAllowSelectionAppendageAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000073e22e
- (_Bool)shouldAllowSelectionExtensionAtIndexPath:(id)arg1;	// IMP=0x000000000073e0ff
- (_Bool)shouldAllowSelectionExtensionAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000073e06d
- (void)didEndMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x000000000073deea
- (_Bool)_testTouchPolicyAtPoint:(struct CGPoint)arg1 withVelocity:(struct CGPoint)arg2;	// IMP=0x000000000073dd4c
- (_Bool)_allowsPanningAcrossConstrainedAxisToBeginMultiSelectInteractionAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000073dc63
- (_Bool)shouldBeginMultiSelectInteraction:(id)arg1 ofType:(long long)arg2 atPoint:(struct CGPoint)arg3 withVelocity:(struct CGPoint)arg4;	// IMP=0x000000000073db08
- (void)willBeginMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2 keepCurrentSelection:(_Bool)arg3;	// IMP=0x000000000073d4ae
- (_Bool)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;	// IMP=0x000000000073d415
- (_Bool)_shouldBeginInteractionAtIndexPath:(id)arg1;	// IMP=0x000000000073d363
- (_Bool)_shouldBeginInteractionAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000073d2d1
- (void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(_Bool)arg1;	// IMP=0x000000000073cfed
- (_Bool)isInMultiSelectMode;	// IMP=0x000000000073cf1b
- (_Bool)supportsMultiSelectInteraction:(id)arg1;	// IMP=0x000000000073ce7c
- (void)multiSelectInteraction:(id)arg1 extendSelectionInDirection:(unsigned long long)arg2;	// IMP=0x000000000073c73f
- (_Bool)supportsKeyboardSelectionExtension;	// IMP=0x000000000073c737
- (id)targetForKeyCommands;	// IMP=0x000000000073c729
- (id)keyCommandsForSelectionExtension;	// IMP=0x000000000073c713
- (long long)_hitTestForSystemEditControlAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000073c332
- (_Bool)_isUsingTableLayoutSPI;	// IMP=0x000000000073c2bb
- (id)_collectionViewDelegate;	// IMP=0x000000000073c1f5
- (void)clearSelectionState;	// IMP=0x000000000073c1e1
- (void)selectedIndexPathsChanged:(id)arg1;	// IMP=0x000000000073c10c
- (void)updateSelectedIndexPaths:(id)arg1;	// IMP=0x000000000073bf96
- (void)_deselectIndexPaths:(id)arg1;	// IMP=0x000000000073bc0c
- (void)_selectIndexPaths:(id)arg1;	// IMP=0x000000000073b878
- (void)multiSelectInteraction:(id)arg1 toggleSelectionWithinRect:(struct CGRect)arg2 leadingPoint:(struct CGPoint)arg3;	// IMP=0x000000000073b673
- (void)multiSelectInteraction:(id)arg1 selectItemsWithinRect:(struct CGRect)arg2 leadingPoint:(struct CGPoint)arg3;	// IMP=0x000000000073b5ef
- (id)_indexPathsWithinRect:(struct CGRect)arg1;	// IMP=0x000000000073af7d
- (void)_updateContentMasksForVisibleCells;	// IMP=0x000000000073aa8d
- (void)collectionViewDidUpdateVisibleCells;	// IMP=0x000000000073a9e4
- (void)_extendSelectionToPoint:(struct CGPoint)arg1;	// IMP=0x000000000073a822
- (id)indexPathsBetweenIndexPath:(id)arg1 andIndexPath:(id)arg2;	// IMP=0x0000000000739f25
- (_Bool)_point:(struct CGPoint)arg1 liesBeyondFrame:(struct CGRect)arg2 inDirection:(double)arg3;	// IMP=0x0000000000739e4a
- (id)_antecedentIndexPathsForLayoutAttributes:(id)arg1 inDirection:(double)arg2;	// IMP=0x0000000000739875
- (void)_autoScrollAtIndexPaths:(id)arg1 fromPoint:(struct CGPoint)arg2;	// IMP=0x000000000073979a
- (id)childScrollViewAtLocation:(struct CGPoint)arg1;	// IMP=0x00000000007396fa
- (id)_boundingScrollViewForIndexPath:(id)arg1;	// IMP=0x0000000000739651
- (id)_autoScrollAssistantForIndexPaths:(id)arg1;	// IMP=0x0000000000739429
- (id)selectionEndIndexPath;	// IMP=0x0000000000739413
- (id)selectionStartIndexPath;	// IMP=0x00000000007393fd
- (long long)axisConstraintAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000739369
- (long long)axisConstraintAtIndexPath:(id)arg1;	// IMP=0x000000000073912b
- (long long)axisConstraintForSingleFingerPanGestureAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000073904c
- (void)uninstallFromCollectionView;	// IMP=0x0000000000739009
- (void)dealloc;	// IMP=0x0000000000738fcb
- (id)initWithCollectionView:(id)arg1;	// IMP=0x0000000000738ef8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
