//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSObject, NSString, TabDocument, UIImageView, UITableViewCell, UIWebClip;
@protocol WebClipViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WebClipViewController : UITableViewController
{
    TabDocument *_tabDocument;	// 8 = 0x8
    UITableViewCell *_titleCell;	// 16 = 0x10
    UITableViewCell *_addressCell;	// 24 = 0x18
    UIImageView *_iconImageView;	// 32 = 0x20
    _Bool _suspendAfterDismiss;	// 40 = 0x28
    _Bool _delegateNotifiedOfResult;	// 41 = 0x29
    _Bool _canEditAndSave;	// 42 = 0x2a
    UIWebClip *_webClip;	// 48 = 0x30
    NSObject<WebClipViewControllerDelegate> *_delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000017cb21
@property(nonatomic) _Bool canEditAndSave; // @synthesize canEditAndSave=_canEditAndSave;
@property(nonatomic) __weak NSObject<WebClipViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain) UIWebClip *webClip; // @synthesize webClip=_webClip;
- (_Bool)bookmarkTextEntryTableViewControllerShouldUseTranslucentAppearance:(id)arg1;	// IMP=0x000000000017cab5
- (void)bookmarkTextEntryTableViewController:(id)arg1 dismissedWithText:(id)arg2;	// IMP=0x000000000017ca62
- (_Bool)_canEditFieldsInCurrentViewController;	// IMP=0x000000000017c9ca
- (_Bool)_shouldUseTranslucentAppearance;	// IMP=0x000000000017c944
- (void)dealloc;	// IMP=0x000000000017c892
- (void)_textFieldChanged:(id)arg1;	// IMP=0x000000000017c778
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x000000000017c744
- (_Bool)_canAddWebClip;	// IMP=0x000000000017c6e4
- (void)_add;	// IMP=0x000000000017c4a6
- (void)_cancel;	// IMP=0x000000000017c43b
- (void)viewWillLayoutSubviews;	// IMP=0x000000000017c30c
- (void)viewDidLayoutSubviews;	// IMP=0x000000000017c223
- (struct CGPoint)_centerForIconView;	// IMP=0x000000000017c005
- (struct UIEdgeInsets)_cellInset;	// IMP=0x000000000017bf61
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000017be7a
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000017bde8
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x000000000017bdc9
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000017bd89
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000017bd7e
- (void)didRotateFromInterfaceOrientation:(long long)arg1;	// IMP=0x000000000017bce0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000017bbe2
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000017bb62
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000017ba17
- (void)updateUIAnimated:(_Bool)arg1;	// IMP=0x000000000017b65a
- (void)viewDidLoad;	// IMP=0x000000000017b617
- (void)loadView;	// IMP=0x000000000017b34b
- (id)initWithTabDocument:(id)arg1;	// IMP=0x000000000017b156

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

