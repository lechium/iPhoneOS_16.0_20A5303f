//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, NSLayoutConstraint, UIToolbar, UIView;

@interface _TtC9Reminders31TTRIRemindersListViewController : UIViewController
{
    MISSING_TYPE *scrollViewDelegate;	// 8 = 0x8
    MISSING_TYPE *untypedTreeView;	// 16 = 0x10
    MISSING_TYPE *toolbar;	// 24 = 0x18
    MISSING_TYPE *toolbarBottomConstraint;	// 32 = 0x20
    MISSING_TYPE *tipContentView;	// 40 = 0x28
    MISSING_TYPE *keyboardAppearState;	// 48 = 0x30
    MISSING_TYPE *presenter;	// 56 = 0x38
    MISSING_TYPE *navigationItemOptions;	// 72 = 0x48
    MISSING_TYPE *listInfo;	// 0 = 0x0
    MISSING_TYPE *emptyListMessaging;	// 0 = 0x0
    MISSING_TYPE *focusedCell;	// 0 = 0x0
    MISSING_TYPE *pendingStartEditingItem;	// 0 = 0x0
    MISSING_TYPE *internalDeferredItemUpdates;	// 0 = 0x0
    MISSING_TYPE *itemsPendingUpdate;	// 0 = 0x0
    MISSING_TYPE *toolbarHeight;	// 0 = 0x0
    MISSING_TYPE *keyboardHeight;	// 0 = 0x0
    MISSING_TYPE *pencilInputAreaHeight;	// 0 = 0x0
    MISSING_TYPE *pendingLoadCellPromises;	// 0 = 0x0
    MISSING_TYPE *toolbarController;	// 0 = 0x0
    MISSING_TYPE *chromelessToolbarUpdater;	// 0 = 0x0
    MISSING_TYPE *canMoveItemReturnValueTempOverrides;	// 0 = 0x0
    MISSING_TYPE *lastSetLargeTitleColor;	// 0 = 0x0
    MISSING_TYPE *contentScrollViewNeedsAdjustmentAfterScrollingAnimation;	// 0 = 0x0
    MISSING_TYPE *currentMultipleSelectionInteractionSession;	// 0 = 0x0
    MISSING_TYPE *listMessagingView;	// 0 = 0x0
    MISSING_TYPE *feedbackGenerator;	// 0 = 0x0
    MISSING_TYPE *pencilAutoCommitTracker;	// 0 = 0x0
    MISSING_TYPE *currentTextInputModeObserver;	// 0 = 0x0
    MISSING_TYPE *currentTextInputModeCancellable;	// 0 = 0x0
    MISSING_TYPE *treeViewDidEndScrollingAnimationPassthroughSubject;	// 0 = 0x0
    MISSING_TYPE *treeViewDidScrollPassthroughSubject;	// 0 = 0x0
    MISSING_TYPE *treeViewDidStopScrollingCancellable;	// 0 = 0x0
    MISSING_TYPE *firstVisibleItemToRestore;	// 0 = 0x0
    MISSING_TYPE *treeViewHasSwipedItem;	// 0 = 0x0
    MISSING_TYPE *swHighlightToShowInNavBar;	// 0 = 0x0
    MISSING_TYPE *contextMenuOriginatorItem;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_completedTasksRotor;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_incompleteTasksRotor;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_overdueTasksRotor;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000002d6a90
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000002e38b0
- (void)keyboardWillChangeFrameNotificationWithNotification:(id)arg1;	// IMP=0x00100000002e1250
- (void)keyboardDidHideNotificationWithNotification:(id)arg1;	// IMP=0x00100000002e1050
- (void)keyboardWillHideNotificationWithNotification:(id)arg1;	// IMP=0x00100000002e0f80
- (void)keyboardDidShowNotificationWithNotification:(id)arg1;	// IMP=0x00100000002e0f70
- (void)keyboardWillShowNotificationWithNotification:(id)arg1;	// IMP=0x00100000002e0ec0
- (void)willAddDeactivationReasonWithNotification:(id)arg1;	// IMP=0x00100000002e0c40
- (void)toggleShowCompletedAction:(id)arg1;	// IMP=0x00100000002e0270
- (void)printListAction:(id)arg1;	// IMP=0x00100000002e01d0
- (void)postponeAllOverdueToTodayAction:(id)arg1;	// IMP=0x00100000002e0130
- (void)setReminderDueDateToNoneAction:(id)arg1;	// IMP=0x00100000002e0090
- (void)setReminderDueDateToNextWeekAction:(id)arg1;	// IMP=0x00100000002e0080
- (void)setReminderDueDateToWeekendAction:(id)arg1;	// IMP=0x00100000002e0070
- (void)setReminderDueDateToTomorrowAction:(id)arg1;	// IMP=0x00100000002e0060
- (void)setReminderDueDateToTodayAction:(id)arg1;	// IMP=0x00100000002dff60
- (void)addStructuredHashtagForSelectedReminderAction:(id)arg1;	// IMP=0x00100000002dfe20
- (void)toggleFlaggedForSelectedReminderAction:(id)arg1;	// IMP=0x00100000002dfd80
- (void)outdentSelectedReminderAction:(id)arg1;	// IMP=0x00100000002dfc50
- (void)indentSelectedReminderAction:(id)arg1;	// IMP=0x00100000002dfae0
- (void)toggleReminderCompletionStateAction:(id)arg1;	// IMP=0x00100000002df970
- (void)showReminderInfoAction:(id)arg1;	// IMP=0x00100000002df790
- (void)collapseAllItemsAction:(id)arg1;	// IMP=0x00100000002df640
- (void)expandAllItemsAction:(id)arg1;	// IMP=0x00100000002dedf0
- (void)newReminderAction:(id)arg1;	// IMP=0x00100000002debc0
- (void);	// IMP=0x00100000002dea70
- (void)expandReminderSubtasksAction:(id)arg1;	// IMP=0x00100000002de9b0
- (void)collapseReminderSubtasksAction:(id)arg1;	// IMP=0x00100000002de860
- (void)endEditingReminderAction:(id)arg1;	// IMP=0x00100000002de7c0
@property(nonatomic) __weak NSLayoutConstraint *toolbarBottomConstraint; // @synthesize toolbarBottomConstraint;
@property(nonatomic) __weak UIToolbar *toolbar; // @synthesize toolbar;
@property(nonatomic) __weak UIView *untypedTreeView; // @synthesize untypedTreeView;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00100000002de640
- (void)validateCommand:(id)arg1;	// IMP=0x00100000002de5f0
- (void)paste:(id)arg1;	// IMP=0x00100000002dde40
- (void)copy:(id)arg1;	// IMP=0x00100000002ddd70
- (void)cut:(id)arg1;	// IMP=0x00100000002ddca0
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00100000002ddc00
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000002dbbf0
- (void)updateUserActivityState:(id)arg1;	// IMP=0x00100000002db300
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000002db0f0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000002daf80
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000002dab50
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000002da4b0
- (void)viewDidLayoutSubviews;	// IMP=0x00100000002da190
- (void)viewWillLayoutSubviews;	// IMP=0x00100000002d9b40
- (void)viewDidLoad;	// IMP=0x00100000002d9460
- (void)dealloc;	// IMP=0x00100000002d6a70
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002d6990

@end
