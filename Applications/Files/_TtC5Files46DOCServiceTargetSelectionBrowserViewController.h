//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class MISSING_TYPE, NSArray;

@interface _TtC5Files46DOCServiceTargetSelectionBrowserViewController : UITableViewController
{
    MISSING_TYPE *hostProxy;	// 8 = 0x8
    MISSING_TYPE *strongHostProxy;	// 16 = 0x10
    MISSING_TYPE *searchSourcesObserver;	// 24 = 0x18
    MISSING_TYPE *configuration;	// 32 = 0x20
    MISSING_TYPE *hostDataOwnerState;	// 40 = 0x28
    MISSING_TYPE *items;	// 48 = 0x30
    MISSING_TYPE *urls;	// 56 = 0x38
    MISSING_TYPE *updatingAfterExpandOrCollapse;	// 64 = 0x40
    MISSING_TYPE *nodeThatWillReceiveNewFolder;	// 72 = 0x48
    MISSING_TYPE *newlyCreatedFolderItem;	// 88 = 0x58
    MISSING_TYPE *restorationHierarchy;	// 96 = 0x60
    MISSING_TYPE *flatNodes;	// 104 = 0x68
    MISSING_TYPE *sourceNodes;	// 112 = 0x70
    MISSING_TYPE *didExpandFirstLevelOfDefaultProvider;	// 120 = 0x78
    MISSING_TYPE *userDefaults;	// 128 = 0x80
    MISSING_TYPE *smartFolderManager;	// 136 = 0x88
    MISSING_TYPE *sourceObserver;	// 144 = 0x90
    MISSING_TYPE *thumbnailAndNameView;	// 152 = 0x98
    MISSING_TYPE *promptStackView;	// 160 = 0xa0
    MISSING_TYPE *itemToReveal;	// 168 = 0xa8
    MISSING_TYPE *didOverrideRestoredFolder;	// 176 = 0xb0
    MISSING_TYPE *loadingView;	// 184 = 0xb8
    MISSING_TYPE *loading;	// 192 = 0xc0
    MISSING_TYPE *typeToFocusController;	// 200 = 0xc8
    MISSING_TYPE *$__lazy_storage_$_promptLabel;	// 208 = 0xd0
    MISSING_TYPE *$__lazy_storage_$_nameLabel;	// 216 = 0xd8
    MISSING_TYPE *$__lazy_storage_$_nameButton;	// 224 = 0xe0
    MISSING_TYPE *$__lazy_storage_$_newFolderButton;	// 232 = 0xe8
    MISSING_TYPE *lastValidName;	// 240 = 0xf0
    MISSING_TYPE *$__lazy_storage_$_moveButton;	// 256 = 0x100
    MISSING_TYPE *activityIndicator;	// 264 = 0x108
    MISSING_TYPE *activityButton;	// 272 = 0x110
    MISSING_TYPE *isPerformingAction;	// 280 = 0x118
    MISSING_TYPE *regularThumbnailViewSize;	// 288 = 0x120
    MISSING_TYPE *largeThumnailViewSize;	// 304 = 0x130
    MISSING_TYPE *extraLargeThumnailViewSize;	// 320 = 0x140
    MISSING_TYPE *$__lazy_storage_$_stackedThumbnailView;	// 336 = 0x150
    MISSING_TYPE *defaultIndentationWidth;	// 344 = 0x158
    MISSING_TYPE *indentationWidth;	// 352 = 0x160
}

- (void).cxx_destruct;	// IMP=0x00400000003068d0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000306850
- (id)initWithStyle:(long long)arg1;	// IMP=0x0010000000306820
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000003066f0
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x00100000003050e0
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x0010000000304fc0
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000304f00
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000304b40
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000304a20
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000304770
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000304620
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000304610
- (void)setDirectoryURLToReveal:(id)arg1;	// IMP=0x0010000000303e10
- (void)displayExportedURLWrappers;	// IMP=0x0010000000303b40
- (void)displayURLs:(id)arg1;	// IMP=0x0010000000303870
- (void)displayItems:(id)arg1;	// IMP=0x0010000000302cc0
- (void)dismiss:(id)arg1;	// IMP=0x0010000000300eb0
- (void)confirm:(id)arg1;	// IMP=0x0010000000300e90
- (void)confirmByReturn:(id)arg1;	// IMP=0x00100000002fe6d0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000002f7b10
- (void)startSearchingSourcesWithConfiguration:(id)arg1;	// IMP=0x00100000002f79e0
- (void)performDismissWithKeyCommand:(id)arg1;	// IMP=0x00100000002f7940
- (void)collapseSelectedNode:(id)arg1;	// IMP=0x00100000002f6e10
- (void)expandSelectedNode:(id)arg1;	// IMP=0x00100000002f6a00
- (void)moveSelectionUpOrDown:(id)arg1;	// IMP=0x00100000002f6790
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000002f5fc0
- (void)viewDidLoad;	// IMP=0x00100000002f5ee0
@property(nonatomic, readonly) NSArray *keyCommands;
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002f5130
- (id)initWithHostProxy:(id)arg1 configuration:(id)arg2;	// IMP=0x00100000002f50f0
- (void)createNewFolder:(id)arg1;	// IMP=0x00100000002f4900
- (void)textDidChange:(id)arg1;	// IMP=0x00100000002f4490

@end
