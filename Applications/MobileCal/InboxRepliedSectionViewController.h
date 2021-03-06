//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class CalendarModel, EKEvent, NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSTimer, UITargetedPreview;
@protocol InboxRepliedSectionViewControllerDelegate, OS_dispatch_queue, UIInteraction;

@interface InboxRepliedSectionViewController : UITableViewController
{
    CalendarModel *_model;	// 8 = 0x8
    NSArray *_occurrenceInfos;	// 16 = 0x10
    NSMutableArray *_itemCache;	// 24 = 0x18
    double _minimumContentHeight;	// 32 = 0x20
    _Bool _viewIsVisible;	// 40 = 0x28
    NSMutableDictionary *_pendingComments;	// 48 = 0x30
    NSMutableDictionary *_organizerNames;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_notificationQ;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_organizerNamesQ;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_prefetchQ;	// 80 = 0x50
    id <UIInteraction> _contextMenuInteraction;	// 88 = 0x58
    UITargetedPreview *_targetedPreview;	// 96 = 0x60
    EKEvent *_currentSelectedEvent;	// 104 = 0x68
    NSTimer *_selectionTimer;	// 112 = 0x70
    NSIndexPath *_indexPathForRowWithContextMenu;	// 120 = 0x78
    _Bool _needsRefresh;	// 128 = 0x80
    unsigned long long _destination;	// 136 = 0x88
    id <InboxRepliedSectionViewControllerDelegate> _inboxRepliedSectionDelegate;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0020000000152c53
@property(nonatomic) _Bool needsRefresh; // @synthesize needsRefresh=_needsRefresh;
@property(nonatomic) __weak id <InboxRepliedSectionViewControllerDelegate> inboxRepliedSectionDelegate; // @synthesize inboxRepliedSectionDelegate=_inboxRepliedSectionDelegate;
@property(nonatomic) unsigned long long destination; // @synthesize destination=_destination;
- (id)editorForPasteboardManager:(id)arg1;	// IMP=0x0010000000152be3
- (id)viewControllerToPresentAlertFromForPasteboardManager:(id)arg1;	// IMP=0x0010000000152bda
- (void)copy:(id)arg1;	// IMP=0x0010000000152afd
- (void)cut:(id)arg1;	// IMP=0x0010000000152a20
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0010000000152818
- (id)_eventForOccurrenceInfo:(id)arg1;	// IMP=0x0010000000152675
- (id)_eventForItem:(id)arg1;	// IMP=0x001000000015256e
- (id)_notificationForIndexPath:(id)arg1 cache:(id)arg2;	// IMP=0x0010000000152266
- (id)_eventForIndexPath:(id)arg1 cache:(id)arg2;	// IMP=0x0010000000152179
- (id)_itemForIndexPath:(id)arg1 cache:(id)arg2;	// IMP=0x0010000000151f53
- (void)_updateCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0010000000151b09
- (void)_refreshIfNeeded;	// IMP=0x001000000015151a
- (void)_identityChanged:(id)arg1;	// IMP=0x00100000001513f5
- (void)_eventStoreChanged:(id)arg1;	// IMP=0x00100000001512d0
- (void)_localeChanged:(id)arg1;	// IMP=0x00100000001511ab
- (id)noContentStringForInboxTableView:(id)arg1;	// IMP=0x0010000000151138
- (id)eventStoreForCell:(id)arg1;	// IMP=0x001000000015111b
- (void)messageCell:(id)arg1 committedComment:(id)arg2;	// IMP=0x0010000000151078
- (void)performAction:(long long)arg1 forCell:(id)arg2 ifCancelled:(CDUnknownBlockType)arg3;	// IMP=0x0010000000150c3a
- (void)_savePendingComments;	// IMP=0x0010000000150a3e
- (void)_saveStatus:(long long)arg1 forItemAtIndexPath:(id)arg2;	// IMP=0x001000000015049c
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x001000000015047b
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x0010000000150217
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;	// IMP=0x00100000001501f7
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;	// IMP=0x0010000000150085
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x001000000014fbfc
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000014fbcd
- (void)inboxWillDismiss;	// IMP=0x001000000014fbbb
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x001000000014f9bb
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x001000000014f9a2
- (void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2;	// IMP=0x001000000014f635
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000014f441
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x001000000014f424
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x001000000014f419
- (void)_selectedOccurrencesChanged:(id)arg1;	// IMP=0x001000000014f232
- (struct CGSize)preferredContentSize;	// IMP=0x001000000014f169
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000014f0ac
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000014efa7
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000014ef66
- (id)title;	// IMP=0x000000000014eef3
- (void)loadView;	// IMP=0x001000000014eda1
- (void)dealloc;	// IMP=0x001000000014ec8b
- (id)initWithModel:(id)arg1;	// IMP=0x001000000014eaa4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

