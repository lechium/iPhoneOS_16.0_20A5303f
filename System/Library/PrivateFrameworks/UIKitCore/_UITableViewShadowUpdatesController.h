//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UITableView, _UIDataSourceSnapshotter, _UIDataSourceUpdateMap;

__attribute__((visibility("hidden")))
@interface _UITableViewShadowUpdatesController : NSObject
{
    UITableView *_tableView;	// 8 = 0x8
    NSMutableArray *_shadowUpdates;	// 16 = 0x10
    _UIDataSourceSnapshotter *_initialSnapshot;	// 24 = 0x18
    _UIDataSourceUpdateMap *_updateMap;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000010ccca2
@property(retain, nonatomic) _UIDataSourceUpdateMap *updateMap; // @synthesize updateMap=_updateMap;
@property(retain, nonatomic) _UIDataSourceSnapshotter *initialSnapshot; // @synthesize initialSnapshot=_initialSnapshot;
@property(retain, nonatomic) NSMutableArray *shadowUpdates; // @synthesize shadowUpdates=_shadowUpdates;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (id)indexPathAfterShadowUpdates:(id)arg1 startingAtUpdate:(id)arg2;	// IMP=0x00000000010ccb63
- (id)indexPathBeforeShadowUpdates:(id)arg1 startingBeforeUpdate:(id)arg2;	// IMP=0x00000000010cca88
- (id)indexPathsAfterShadowUpdates:(id)arg1 allowAppendingInsert:(_Bool)arg2;	// IMP=0x00000000010cc6e0
- (id)indexPathsAfterShadowUpdates:(id)arg1;	// IMP=0x00000000010cc6cc
- (id)indexPathsBeforeShadowUpdates:(id)arg1;	// IMP=0x00000000010cc495
- (id)indexPathAfterShadowUpdates:(id)arg1 allowAppendingInsert:(_Bool)arg2;	// IMP=0x00000000010cc3a3
- (id)indexPathAfterShadowUpdates:(id)arg1;	// IMP=0x00000000010cc38f
- (id)indexPathBeforeShadowUpdates:(id)arg1;	// IMP=0x00000000010cc2f7
- (id)sectionsAfterShadowUpdates:(id)arg1 allowAppendingInsert:(_Bool)arg2;	// IMP=0x00000000010cc0c0
- (id)sectionsAfterShadowUpdates:(id)arg1;	// IMP=0x00000000010cc0ac
- (id)sectionsBeforeShadowUpdates:(id)arg1;	// IMP=0x00000000010cbf26
- (long long)sectionAfterShadowUpdates:(long long)arg1;	// IMP=0x00000000010cbebc
- (long long)sectionBeforeShadowUpdates:(long long)arg1;	// IMP=0x00000000010cbe52
- (id)_rebasedShadowUpdatesForUpdate:(id)arg1 initialSnapshot:(id)arg2;	// IMP=0x00000000010cb7af
- (void)rebaseExistingShadowUpdatesForUpdates:(id)arg1;	// IMP=0x00000000010cb4dc
- (void)removeShadowUpdate:(id)arg1;	// IMP=0x00000000010cb3dd
- (void)appendShadowUpdate:(id)arg1;	// IMP=0x00000000010cb132
- (void)regenerateUpdateMap;	// IMP=0x00000000010cb02e
- (void)reset;	// IMP=0x00000000010cafba
@property(readonly, nonatomic) _UIDataSourceSnapshotter *dataSourceAfterShadowUpdates;
@property(readonly, nonatomic) _UIDataSourceSnapshotter *dataSourceBeforeShadowUpdates;
- (id)shadowUpdateWithIdentifier:(id)arg1;	// IMP=0x00000000010cad43
@property(readonly, nonatomic) _Bool hasShadowUpdates;
- (id)initWithTableView:(id)arg1;	// IMP=0x00000000010cac8a
- (id)tableView:(id)arg1 detailTextForHeaderInSection:(long long)arg2;	// IMP=0x00000000010cd5a4
- (id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x00000000010cd4de
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x00000000010cd3fc
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000010cd355
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x00000000010cd2ab
- (id)_tableView:(id)arg1 sectionIndexTitlesTrimmedToCount:(unsigned long long)arg2;	// IMP=0x00000000010cd22e
- (id)sectionIndexTitlesForTableView:(id)arg1;	// IMP=0x00000000010cd1b7
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;	// IMP=0x00000000010cd115
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x00000000010cd073
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x00000000010ccfce
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000010ccf29
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000010cce41
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000010ccd8b
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000010cccde
- (id)indexPathForElementWithModelIdentifier:(id)arg1 inView:(id)arg2;	// IMP=0x00000000010cd71f
- (id)modelIdentifierForElementAtIndexPath:(id)arg1 inView:(id)arg2;	// IMP=0x00000000010cd649
- (void)tableView:(id)arg1 willEndContextMenuInteractionWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000010d13f5
- (void)tableView:(id)arg1 willDisplayContextMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000010d135b
- (void)tableView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000010d12c1
- (void)tableView:(id)arg1 willCommitMenuWithAnimator:(id)arg2;	// IMP=0x00000000010d1244
- (id)tableView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;	// IMP=0x00000000010d11ad
- (id)tableView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;	// IMP=0x00000000010d1116
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x00000000010d104c
- (id)indexPathForPreferredFocusedItemForTableView:(id)arg1;	// IMP=0x00000000010d0fa6
- (_Bool)tableView:(id)arg1 shouldUpdateFocusFromRowAtIndexPath:(id)arg2 toView:(id)arg3 heading:(unsigned long long)arg4;	// IMP=0x00000000010d0eda
- (void)tableView:(id)arg1 didUnfocusRowAtIndexPath:(id)arg2;	// IMP=0x00000000010d0e42
- (void)tableView:(id)arg1 didFocusRowAtIndexPath:(id)arg2;	// IMP=0x00000000010d0daa
- (_Bool)_tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;	// IMP=0x00000000010d0d08
- (void)tableView:(id)arg1 didEndSwipingRowAtIndexPath:(id)arg2;	// IMP=0x00000000010d0c70
- (void)tableView:(id)arg1 willBeginSwipingRowAtIndexPath:(id)arg2;	// IMP=0x00000000010d0bd8
- (_Bool)tableView:(id)arg1 shouldHaveFullLengthBottomSeparatorForSection:(long long)arg2;	// IMP=0x00000000010d0b41
- (_Bool)tableView:(id)arg1 shouldHaveFullLengthTopSeparatorForSection:(long long)arg2;	// IMP=0x00000000010d0aaa
- (_Bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;	// IMP=0x00000000010d0a13
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;	// IMP=0x00000000010d097c
- (void)tableView:(id)arg1 swipeAccessoryButtonPushedForRowAtIndexPath:(id)arg2;	// IMP=0x00000000010d08e4
- (id)tableView:(id)arg1 titleForSwipeAccessoryButtonForRowAtIndexPath:(id)arg2;	// IMP=0x00000000010d0836
- (id)tableView:(id)arg1 backgroundColorForSwipeAccessoryButtonForRowAtIndexPath:(id)arg2;	// IMP=0x00000000010d0788
- (id)tableView:(id)arg1 backgroundColorForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;	// IMP=0x00000000010d06da
- (void)tableView:(id)arg1 didCancelReorderingRowAtIndexPath:(id)arg2;	// IMP=0x00000000010d0642
- (void)tableView:(id)arg1 didEndReorderingRowAtIndexPath:(id)arg2;	// IMP=0x00000000010d05aa
- (void)tableView:(id)arg1 willBeginReorderingRowAtIndexPath:(id)arg2;	// IMP=0x00000000010d0512
- (id)tableView:(id)arg1 trailingSwipeActionsForRowAtIndexPath:(id)arg2;	// IMP=0x00000000010d0464
- (id)tableView:(id)arg1 leadingSwipeActionsForRowAtIndexPath:(id)arg2;	// IMP=0x00000000010d03b6
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x00000000010d0308
- (id)tableView:(id)arg1 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x00000000010d025a
- (struct CGRect)tableView:(id)arg1 calloutTargetRectForCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000010d0154
- (id)viewForFooterInTableView:(id)arg1;	// IMP=0x00000000010d00dd
- (id)viewForHeaderInTableView:(id)arg1;	// IMP=0x00000000010d0066
- (double)heightForFooterInTableView:(id)arg1;	// IMP=0x00000000010cfff6
- (double)heightForHeaderInTableView:(id)arg1;	// IMP=0x00000000010cff86
- (void)tableViewDidFinishReload:(id)arg1;	// IMP=0x00000000010cff1f
- (struct CGRect)tableView:(id)arg1 frameForSectionIndexGivenProposedFrame:(struct CGRect)arg2;	// IMP=0x00000000010cfe87
- (double)tableView:(id)arg1 maxTitleWidthForFooterInSection:(long long)arg2;	// IMP=0x00000000010cfdde
- (double)tableView:(id)arg1 maxTitleWidthForHeaderInSection:(long long)arg2;	// IMP=0x00000000010cfd35
- (_Bool)_tableView:(id)arg1 shouldSpringLoadRowAtIndexPath:(id)arg2 withContext:(id)arg3;	// IMP=0x00000000010cfc71
- (_Bool)tableView:(id)arg1 shouldSpringLoadRowAtIndexPath:(id)arg2 withContext:(id)arg3;	// IMP=0x00000000010cfbad
- (long long)tableView:(id)arg1 titleAlignmentForFooterInSection:(long long)arg2;	// IMP=0x00000000010cfb15
- (long long)tableView:(id)arg1 titleAlignmentForHeaderInSection:(long long)arg2;	// IMP=0x00000000010cfa7d
- (double)marginForTableView:(id)arg1;	// IMP=0x00000000010cfa0d
- (void)tableView:(id)arg1 didUpdateTextFieldForRowAtIndexPath:(id)arg2 withValue:(id)arg3;	// IMP=0x00000000010cf953
- (struct CGPoint)tableView:(id)arg1 newContentOffsetAfterUpdate:(struct CGPoint)arg2 context:(id)arg3;	// IMP=0x00000000010cf8a5
- (double)tableViewSpacingForExtraSeparators:(id)arg1;	// IMP=0x00000000010cf835
- (_Bool)tableView:(id)arg1 wantsHeaderForSection:(long long)arg2;	// IMP=0x00000000010cf79e
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;	// IMP=0x00000000010cf6f8
- (_Bool)tableView:(id)arg1 selectionFollowsFocusForRowAtIndexPath:(id)arg2;	// IMP=0x00000000010cf646
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000000010cf3cc
- (_Bool)tableView:(id)arg1 shouldUpdateFocusInContext:(id)arg2;	// IMP=0x00000000010cf160
- (_Bool)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;	// IMP=0x00000000010cf0be
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x00000000010ceffc
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x00000000010cef30
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;	// IMP=0x00000000010cee8e
- (long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;	// IMP=0x00000000010cedec
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x00000000010cec69
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;	// IMP=0x00000000010cebd1
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;	// IMP=0x00000000010ceb39
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;	// IMP=0x00000000010cea97
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;	// IMP=0x00000000010ce9e9
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;	// IMP=0x00000000010ce93b
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x00000000010ce899
- (void)tableView:(id)arg1 performPrimaryActionForRowAtIndexPath:(id)arg2;	// IMP=0x00000000010ce801
- (_Bool)tableView:(id)arg1 canPerformPrimaryActionForRowAtIndexPath:(id)arg2;	// IMP=0x00000000010ce75f
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;	// IMP=0x00000000010ce6c7
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000010ce62f
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;	// IMP=0x00000000010ce581
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000010ce4d3
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000010ce43b
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000010ce3a3
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000010ce301
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;	// IMP=0x00000000010ce269
- (long long)tableView:(id)arg1 accessoryTypeForRowWithIndexPath:(id)arg2;	// IMP=0x00000000010ce1c7
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x00000000010ce122
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000000010ce07d
- (double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2;	// IMP=0x00000000010cdfd4
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;	// IMP=0x00000000010cdf2b
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00000000010cde82
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000010cddd9
- (void)tableView:(id)arg1 didEndDisplayingFooterView:(id)arg2 forSection:(long long)arg3;	// IMP=0x00000000010cdd24
- (void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x00000000010cdc6f
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000010cdbb5
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;	// IMP=0x00000000010cdb00
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x00000000010cda4b
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000010cd991
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000010cd8d9
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000010cd807
- (void)tableView:(id)arg1 cancelPrefetchingForRowsAtIndexPaths:(id)arg2;	// IMP=0x00000000010d1531
- (void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2;	// IMP=0x00000000010d148f
- (_Bool)_tableView:(id)arg1 dragSessionSupportsSystemDrag:(id)arg2;	// IMP=0x00000000010d1b14
- (long long)_tableView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000010d1a50
- (_Bool)tableView:(id)arg1 dragSessionIsRestrictedToDraggingApplication:(id)arg2;	// IMP=0x00000000010d19c5
- (_Bool)tableView:(id)arg1 dragSessionAllowsMoveOperation:(id)arg2;	// IMP=0x00000000010d193a
- (void)tableView:(id)arg1 dragSessionDidEnd:(id)arg2;	// IMP=0x00000000010d18bd
- (void)tableView:(id)arg1 dragSessionWillBegin:(id)arg2;	// IMP=0x00000000010d1840
- (id)tableView:(id)arg1 dragPreviewParametersForRowAtIndexPath:(id)arg2;	// IMP=0x00000000010d1792
- (id)tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;	// IMP=0x00000000010d16a7
- (id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000010d15d3
- (long long)_tableView:(id)arg1 dataOwnerForDropSession:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x00000000010d205f
- (id)tableView:(id)arg1 dropPreviewParametersForRowAtIndexPath:(id)arg2;	// IMP=0x00000000010d1fb1
- (void)tableView:(id)arg1 dropSessionDidEnd:(id)arg2;	// IMP=0x00000000010d1f34
- (void)tableView:(id)arg1 dropSessionDidExit:(id)arg2;	// IMP=0x00000000010d1eb7
- (id)tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x00000000010d1df5
- (void)tableView:(id)arg1 dropSessionDidEnter:(id)arg2;	// IMP=0x00000000010d1d78
- (_Bool)tableView:(id)arg1 canHandleDropSession:(id)arg2;	// IMP=0x00000000010d1ced
- (void)tableView:(id)arg1 performDropWithCoordinator:(id)arg2;	// IMP=0x00000000010d1b9f
- (long long)__tableView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000010d23ce
- (void)_tableView:(id)arg1 dragSessionDidEnd:(id)arg2;	// IMP=0x00000000010d2351
- (void)_tableView:(id)arg1 dragSessionWillBegin:(id)arg2;	// IMP=0x00000000010d22d4
- (id)_tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;	// IMP=0x00000000010d21e9
- (id)_tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000010d2115
- (long long)__tableView:(id)arg1 dataOwnerForDropSession:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x00000000010d29c1
- (id)_tableView:(id)arg1 targetIndexPathForProposedIndexPath:(id)arg2 currentIndexPath:(id)arg3 dropSession:(id)arg4;	// IMP=0x00000000010d28a4
- (void)_tableView:(id)arg1 dropSessionDidEnd:(id)arg2;	// IMP=0x00000000010d2827
- (void)_tableView:(id)arg1 dropSessionDidExit:(id)arg2;	// IMP=0x00000000010d27aa
- (id)_tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x00000000010d26e8
- (void)_tableView:(id)arg1 dropSessionDidEnter:(id)arg2;	// IMP=0x00000000010d266b
- (_Bool)_tableView:(id)arg1 canHandleDropSession:(id)arg2;	// IMP=0x00000000010d25e0
- (void)_tableView:(id)arg1 performDropWithCoordinator:(id)arg2;	// IMP=0x00000000010d2492

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

