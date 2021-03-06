//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesUI/ICTextController.h>

@interface ICTextController (ICChecklistSortAnimation)
+ (_Bool)needsToShowFirstTimeAutoSortChecklistAlert;	// IMP=0x0030000000110cd9
+ (void)setChecklistAutoSortEnabled:(_Bool)arg1;	// IMP=0x003000000010cc33
+ (_Bool)checklistAutoSortEnabled;	// IMP=0x003000000010cc13
+ (void)setChecklistAutoAlertShown:(_Bool)arg1;	// IMP=0x003000000010cbb9
+ (_Bool)checklistAutoAlertShown;	// IMP=0x003000000010cb67
- (id)imageInfoForTrackedParagraph:(id)arg1 textView:(id)arg2 characterRangeToRender:(struct _NSRange)arg3 visibleRectToRender:(struct CGRect)arg4;	// IMP=0x001000000010770b
- (void)setFinalFramesForSortedInfos:(id)arg1 textView:(id)arg2 textContainerOrigin:(struct CGPoint)arg3 todoUUIDsToImageViews:(id)arg4;	// IMP=0x0010000000107449
- (void)addImageViewsAfterSortIfNecessaryForTrackedInfos:(id)arg1 existingInfos:(id)arg2 textView:(id)arg3 textContainerOrigin:(struct CGPoint)arg4 todoUUIDsToImageViews:(id)arg5;	// IMP=0x00100000001070ff
- (void)addImageViewsBeforeSortIfNecessaryForTrackedInfos:(id)arg1 textView:(id)arg2 textContainerOrigin:(struct CGPoint)arg3 todoUUIDsToImageViews:(id)arg4;	// IMP=0x0010000000106ea7
- (void)performAnimatedSortForTrackedParagraphs:(id)arg1 expandedRange:(struct _NSRange)arg2 textView:(id)arg3 sortChecklistsBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000106300
- (id)analyticsInfoForChecklistAtIndex:(unsigned long long)arg1 textView:(id)arg2;	// IMP=0x0010000000110d2b
- (void)showFirstTimeAutoSortEnabledAlertWithTextView:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 analyticsHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001107cf
- (void)showFirstTimeAutoSortEnabledAlertIfNecessaryWithTextView:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 analyticsHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000011070c
- (void)autoSortChecklistForUnitTestAtIndex:(unsigned long long)arg1 textView:(id)arg2;	// IMP=0x001000000011069d
- (void)autoSortChecklistIfNecessaryForTrackedParagraph:(id)arg1 textView:(id)arg2 analyticsHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001104c5
- (id)paragraphInfoForCharacterAtIndex:(unsigned long long)arg1 includeChildren:(_Bool)arg2 textStorage:(id)arg3;	// IMP=0x00100000001100cf
- (_Bool)containsAnyTodoItemMarkedCompleted:(_Bool)arg1 inRange:(struct _NSRange)arg2 textStorage:(id)arg3;	// IMP=0x001000000010fea2
- (id)rangeForChecklistItemInRange:(struct _NSRange)arg1 textStorage:(id)arg2;	// IMP=0x001000000010fd85
- (id)trackedParagraphsForTodosInRange:(struct _NSRange)arg1 textStorage:(id)arg2;	// IMP=0x001000000010fb41
- (id)rangesForTodosInRange:(struct _NSRange)arg1 markedCompleted:(_Bool)arg2 textStorage:(id)arg3;	// IMP=0x001000000010f8e5
- (struct _NSRange)expandedRangeForContiguousTodosForRange:(struct _NSRange)arg1 textView:(id)arg2;	// IMP=0x001000000010f63b
- (id)sortTrackedParagraphsMovingCheckedItemsToBottom:(id)arg1;	// IMP=0x001000000010f518
- (id)createTreeFromTrackedParagraphs:(id)arg1 textView:(id)arg2;	// IMP=0x001000000010f0d4
- (void)applySortFromOriginalParagraphs:(id)arg1 sortedTrackedParagraphs:(id)arg2 forTextView:(id)arg3 checklistRange:(struct _NSRange)arg4;	// IMP=0x001000000010e645
- (_Bool)moveCheckedChecklistsToBottomInTextView:(id)arg1 forRange:(struct _NSRange)arg2 animated:(_Bool)arg3;	// IMP=0x001000000010e1fb
- (_Bool)moveCheckedChecklistsToBottomInTextView:(id)arg1 forRange:(struct _NSRange)arg2;	// IMP=0x001000000010e1e6
- (_Bool)canMoveCheckedChecklistsToBottomInTextView:(id)arg1 forRange:(struct _NSRange)arg2;	// IMP=0x001000000010e0cf
- (id)validAdjacentParagraphInfoFromParagraphInfo:(id)arg1 inDirection:(unsigned long long)arg2 inTextView:(id)arg3;	// IMP=0x001000000010df22
- (id)adjacentTrackedParagraphFromTrackedParagraph:(id)arg1 inDirection:(unsigned long long)arg2 inTextView:(id)arg3;	// IMP=0x001000000010de13
- (id)expandedChecklistTrackedParagraphsInTextView:(id)arg1 forIndex:(long long)arg2;	// IMP=0x001000000010dd0f
- (_Bool)canMoveListItemInDirection:(unsigned long long)arg1 inTextView:(id)arg2 forRange:(struct _NSRange)arg3;	// IMP=0x001000000010dc41
- (_Bool)moveListItemInDirection:(unsigned long long)arg1 inTextView:(id)arg2 forRange:(struct _NSRange)arg3;	// IMP=0x001000000010d9b5
- (void)removeChecklistItemsMarkedCompleted:(_Bool)arg1 inTextView:(id)arg2 forRanges:(id)arg3;	// IMP=0x001000000010d209
- (_Bool)checklistItemExistsMarkedCompleted:(_Bool)arg1 inTextView:(id)arg2 forRanges:(id)arg3;	// IMP=0x001000000010cf2f
- (void)markAllChecklistItemsCompleted:(_Bool)arg1 inTextview:(id)arg2 forSelectedRanges:(id)arg3;	// IMP=0x001000000010ccf6
- (void)sendTextDidChangeNotificationForTextView:(id)arg1;	// IMP=0x001000000010cc53
@end

