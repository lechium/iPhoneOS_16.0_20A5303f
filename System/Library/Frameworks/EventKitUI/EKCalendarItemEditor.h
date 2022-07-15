//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class EKCalendarItem, EKCalendarItemEditItem, EKChangeSet, EKEventStore, EKUIRecurrenceAlertController, NSArray, NSMutableSet, NSString, UIBarButtonItem, UIResponder, _UIAccessDeniedView;
@protocol EKCalendarItemEditorDelegate;

__attribute__((visibility("hidden")))
@interface EKCalendarItemEditor : UITableViewController
{
    NSArray *_editItems;	// 8 = 0x8
    NSArray *_orderedEditItems;	// 16 = 0x10
    id _revertState;	// 24 = 0x18
    _Bool _showsTimeZone;	// 32 = 0x20
    NSArray *_currentItems;	// 40 = 0x28
    EKUIRecurrenceAlertController *_recurrenceAlertController;	// 48 = 0x30
    EKCalendarItemEditItem *_currentEditItem;	// 56 = 0x38
    _Bool _giveTitleCellKeyboardFocus;	// 64 = 0x40
    _Bool _needsFirstResponderSet;	// 65 = 0x41
    int _editItemVisibility;	// 68 = 0x44
    _Bool _isIgnoringCellHeightChange;	// 72 = 0x48
    _Bool _needsCellHeightChange;	// 73 = 0x49
    NSMutableSet *_editItemsDisablingDoneButton;	// 80 = 0x50
    long long _lastAuthorizationStatus;	// 88 = 0x58
    _Bool _hasAppeared;	// 96 = 0x60
    UIBarButtonItem *_cancelButton;	// 104 = 0x68
    UIBarButtonItem *_doneButton;	// 112 = 0x70
    UIBarButtonItem *_leftButtonSpacer;	// 120 = 0x78
    UIBarButtonItem *_rightButtonSpacer;	// 128 = 0x80
    double _leftButtonSpace;	// 136 = 0x88
    double _rightButtonSpace;	// 144 = 0x90
    _Bool _scrollToNotes;	// 152 = 0x98
    _Bool _canHideDoneAndCancelButtons;	// 153 = 0x99
    _Bool _timeImplicitlySet;	// 154 = 0x9a
    _Bool _isTextEditing;	// 155 = 0x9b
    _Bool _pendingVideoConference;	// 156 = 0x9c
    id <EKCalendarItemEditorDelegate> _editorDelegate;	// 160 = 0xa0
    EKEventStore *_store;	// 168 = 0xa8
    EKCalendarItem *_calendarItem;	// 176 = 0xb0
    UIResponder *_responderToRestoreOnAppearence;	// 184 = 0xb8
    unsigned long long _visibleSectionToRestoreOnAppearence;	// 192 = 0xc0
    NSString *_calendarItemCreationMethod;	// 200 = 0xc8
    _UIAccessDeniedView *_accessDeniedView;	// 208 = 0xd0
    EKChangeSet *_originalChangeSet;	// 216 = 0xd8
}

+ (id)_doneLocalizedString;	// IMP=0x00100000001738f3
+ (id)_addLocalizedString;	// IMP=0x001000000017389b
+ (id)defaultTitleForCalendarItem;	// IMP=0x0010000000172882
- (void).cxx_destruct;	// IMP=0x000000000017801f
@property(retain, nonatomic) EKChangeSet *originalChangeSet; // @synthesize originalChangeSet=_originalChangeSet;
@property(retain, nonatomic) _UIAccessDeniedView *accessDeniedView; // @synthesize accessDeniedView=_accessDeniedView;
@property(retain, nonatomic) NSString *calendarItemCreationMethod; // @synthesize calendarItemCreationMethod=_calendarItemCreationMethod;
@property(nonatomic) _Bool pendingVideoConference; // @synthesize pendingVideoConference=_pendingVideoConference;
@property(nonatomic) _Bool isTextEditing; // @synthesize isTextEditing=_isTextEditing;
@property(nonatomic) _Bool timeImplicitlySet; // @synthesize timeImplicitlySet=_timeImplicitlySet;
@property(readonly) EKCalendarItemEditItem *currentEditItem; // @synthesize currentEditItem=_currentEditItem;
@property(nonatomic) _Bool canHideDoneAndCancelButtons; // @synthesize canHideDoneAndCancelButtons=_canHideDoneAndCancelButtons;
@property(nonatomic) _Bool showsTimeZone; // @synthesize showsTimeZone=_showsTimeZone;
@property(nonatomic) unsigned long long visibleSectionToRestoreOnAppearence; // @synthesize visibleSectionToRestoreOnAppearence=_visibleSectionToRestoreOnAppearence;
@property(retain, nonatomic) UIResponder *responderToRestoreOnAppearence; // @synthesize responderToRestoreOnAppearence=_responderToRestoreOnAppearence;
@property(nonatomic) _Bool scrollToNotes; // @synthesize scrollToNotes=_scrollToNotes;
@property(retain, nonatomic) EKCalendarItem *calendarItem; // @synthesize calendarItem=_calendarItem;
@property(retain, nonatomic) EKEventStore *store; // @synthesize store=_store;
@property(nonatomic) __weak id <EKCalendarItemEditorDelegate> editorDelegate; // @synthesize editorDelegate=_editorDelegate;
- (_Bool)canBecomeFirstResponder;	// IMP=0x0000000000177e4d
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0000000000177e03
- (void)handleSaveKeyCommand;	// IMP=0x0000000000177dca
- (void)handleCloseKeyCommand;	// IMP=0x0000000000177db6
- (_Bool)canPerformSaveKeyCommand;	// IMP=0x0000000000177d99
- (void)_presentDetachSheetForEvent:(id)arg1 saveAttachments:(_Bool)arg2 withContinueBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000177a6e
- (void)_presentAttachmentRecurrenceSheetForEvent:(id)arg1 withContinueBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000017788d
- (id)_viewForSheet;	// IMP=0x00000000001ed365
- (id)_nameForDeleteButton;	// IMP=0x00000000001ed337
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000017775d
- (_Bool)_performSave:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000017745e
- (void)_performDelete:(long long)arg1;	// IMP=0x000000000017711f
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x000000000017702b
- (void)deleteClicked:(id)arg1;	// IMP=0x0000000000176e46
- (void)tableViewDidFinishReload:(id)arg1;	// IMP=0x0000000000176e34
- (void)tableViewDidStartReload:(id)arg1;	// IMP=0x0000000000176e22
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x0000000000176bc3
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;	// IMP=0x0000000000176b12
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0000000000176904
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x0000000000176697
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x00000000001765ac
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000017639e
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0000000000176358
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000000176309
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;	// IMP=0x000000000017626c
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000017604e
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000175f9e
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000175e5c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000175d58
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000175b30
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000175a90
- (id)_editItemAtIndexPath:(id)arg1 firstRowIndex:(long long *)arg2;	// IMP=0x00000000001757f1
- (void)editItemWantsFirstResponderResigned:(id)arg1;	// IMP=0x00000000001757b4
- (void)editItem:(id)arg1 wantsViewControllerPushed:(id)arg2;	// IMP=0x000000000017573d
- (void)editItem:(id)arg1 wantsViewControllerPresented:(id)arg2;	// IMP=0x00000000001756b9
- (id)cellWithReuseIdentifier:(id)arg1 forEditItem:(id)arg2;	// IMP=0x0000000000175636
- (id)defaultAlertTitleForEditItem:(id)arg1;	// IMP=0x0000000000175624
- (void)editItemRequiresPopoverSizeUpdate:(id)arg1;	// IMP=0x0000000000175595
- (void)editItemRequiresHeightChange:(id)arg1;	// IMP=0x0000000000175569
- (void)editItemVisibilityChanged:(id)arg1;	// IMP=0x0000000000175557
- (void)editItem:(id)arg1 wantsRowsScrolledToVisible:(id)arg2;	// IMP=0x000000000017503f
- (void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4;	// IMP=0x0000000000174b37
- (void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3;	// IMP=0x0000000000174b22
- (long long)rowNumberForEditItem:(id)arg1;	// IMP=0x0000000000174719
- (void)editItem:(id)arg1 wantsRowReload:(id)arg2;	// IMP=0x00000000001745de
- (void)editItemWantsFooterTitlesToReload:(id)arg1;	// IMP=0x0000000000174400
- (void)editItem:(id)arg1 performActionsOnCellAtSubitem:(unsigned long long)arg2 actions:(CDUnknownBlockType)arg3;	// IMP=0x00000000001742f9
- (void)_reallyHandleCellHeightChange;	// IMP=0x0000000000174185
- (void)_tableViewDidUpdateHeights;	// IMP=0x0000000000174141
- (void)_tableViewWillUpdateHeights;	// IMP=0x0000000000174130
- (void)editItem:(id)arg1 wantsDoneButtonDisabled:(_Bool)arg2;	// IMP=0x000000000017407e
- (_Bool)_canEnableDoneButton;	// IMP=0x0000000000174017
- (void)editItem:(id)arg1 wantsKeyboardPinned:(_Bool)arg2;	// IMP=0x0000000000174003
- (id)viewControllerForEditItem:(id)arg1;	// IMP=0x0000000000173ffa
- (void)editItem:(id)arg1 textViewShouldReturn:(id)arg2;	// IMP=0x0000000000173f23
- (void)editItemWantsInjectableViewControllerToBeShown:(id)arg1;	// IMP=0x0000000000173f06
- (void)editItemTextChanged:(id)arg1;	// IMP=0x0000000000173e78
- (void)editItemDidEndEditing:(id)arg1;	// IMP=0x0000000000173dff
- (void)_updateDoneButtonState;	// IMP=0x0000000000173da7
- (void)editItem:(id)arg1 didSaveFromDetailViewController:(_Bool)arg2;	// IMP=0x0000000000173b60
- (void)editItemDidStartEditing:(id)arg1;	// IMP=0x000000000017394b
- (void)_revertEvent;	// IMP=0x00000000001ed30c
- (void)_copyEventForPossibleRevert;	// IMP=0x00000000001ed2e1
- (id)_viewHierarchy;	// IMP=0x0000000000173724
@property(nonatomic) double navBarRightContentInset;
@property(nonatomic) double navBarLeftContentInset;
- (void)_setWantsToEnableDoneButton:(_Bool)arg1;	// IMP=0x000000000017361a
- (void)_setDoneAndCancelButtonVisible:(_Bool)arg1;	// IMP=0x0000000000173554
- (void)_keyboardWillChangeFrame:(id)arg1;	// IMP=0x000000000017325f
- (void)_keyboardWillHide;	// IMP=0x00000000001731c3
- (void)_pinKeyboard:(_Bool)arg1;	// IMP=0x0000000000173157
- (struct CGSize)preferredContentSize;	// IMP=0x0000000000173030
- (void)reloadTableViewSectionsForDates:(_Bool)arg1 invitees:(_Bool)arg2 location:(_Bool)arg3 alarm:(_Bool)arg4;	// IMP=0x000000000017302a
- (void)refreshURL;	// IMP=0x0000000000173024
- (void)refreshLocation;	// IMP=0x000000000017301e
- (void)refreshInvitees;	// IMP=0x0000000000173018
- (void)refreshStartAndEndDates;	// IMP=0x0000000000173006
- (void)_setShowingAccessDeniedView:(_Bool)arg1 showSettingsInstructions:(_Bool)arg2;	// IMP=0x0000000000172d76
- (void)storeChanged:(id)arg1;	// IMP=0x0000000000172bd4
- (void)setupForEvent;	// IMP=0x0000000000172890
- (unsigned long long)entityType;	// IMP=0x00000000001ed2b3
- (id)notificationNamesForLocaleChange;	// IMP=0x00000000001ed285
- (id)defaultAlertTitle;	// IMP=0x00000000001ed257
- (void)setupDeleteButton;	// IMP=0x000000000017288a
- (id)preferredTitle;	// IMP=0x000000000017287a
- (_Bool)hasAttachmentChanges;	// IMP=0x00000000001ed229
- (id)attachmentsModifiedEvent;	// IMP=0x00000000001ed1fb
- (_Bool)attachmentsModifiedOnRecurrence;	// IMP=0x00000000001ed1cd
- (_Bool)saveCalendarItemWithSpan:(long long)arg1 error:(id *)arg2;	// IMP=0x00000000001ed19f
- (void)prepareEditItems;	// IMP=0x00000000001727dd
- (void)_setCalendarItemOnEditItems;	// IMP=0x000000000017266a
- (void)_configureVisibleItems;	// IMP=0x000000000017240d
- (_Bool)shouldDisplayEditItem:(id)arg1 withVisibility:(int)arg2;	// IMP=0x00000000001723f6
- (void)_completeWithAction:(long long)arg1 animated:(_Bool)arg2 notify:(_Bool)arg3;	// IMP=0x00000000001722e0
- (void)completeWithAction:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001722c8
- (_Bool)saveWithSpan:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000172272
- (void)resignCurrentEditItemFirstResponder;	// IMP=0x000000000017222a
- (void)focus:(unsigned long long)arg1 select:(_Bool)arg2;	// IMP=0x0000000000172224
- (_Bool)hasUnsavedChanges;	// IMP=0x000000000017210e
- (_Bool)willPresentDialogOnSave;	// IMP=0x0000000000172074
- (void)completeAndSaveWithContinueBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000017205d
- (void)completeAndSave;	// IMP=0x0000000000172049
- (void)handleTapOutside;	// IMP=0x0000000000171f70
- (void)done:(id)arg1 withContinueBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000171a82
- (void)done:(id)arg1;	// IMP=0x0000000000171a6e
- (void)cancelEditingWithDelegateNotification:(_Bool)arg1 forceCancel:(_Bool)arg2;	// IMP=0x000000000017194d
- (void)cancel:(id)arg1;	// IMP=0x0000000000171934
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00000000001718ac
- (void)applicationDidResume;	// IMP=0x0000000000171838
- (void)viewDidLoad;	// IMP=0x0000000000171574
- (void)updateNavButtonsWithSpacing;	// IMP=0x00000000001711e7
- (void)_setupFirstResponder;	// IMP=0x0000000000171089
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000170eee
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000170e06
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000170dac
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000170a27
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000170a15
- (void)resetBackgroundColor;	// IMP=0x0000000000170935
- (void)loadView;	// IMP=0x00000000001707a3
- (long long)firstTableRowForEditItem:(id)arg1;	// IMP=0x0000000000170505
- (unsigned long long)tableSectionForEditItem:(id)arg1;	// IMP=0x000000000017037c
- (int)editItemVisibility;	// IMP=0x000000000017036c
- (void)setEditItemVisibility:(int)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001702fb
- (void)_updateCurrentEditItemsFromVisibility:(int)arg1 toVisibility:(int)arg2 animated:(_Bool)arg3;	// IMP=0x000000000016ff17
- (void)_localeChanged;	// IMP=0x000000000016fccd
- (id)_orderedEditItems;	// IMP=0x00000000001ed171
- (id)_editItems;	// IMP=0x00000000001ed143
- (void)dealloc;	// IMP=0x000000000016fbf7
- (id)init;	// IMP=0x000000000016fb00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
