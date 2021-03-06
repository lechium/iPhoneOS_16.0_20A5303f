//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLook/QLPreviewController.h>

@class MISSING_TYPE, NSArray;
@protocol QLPreviewControllerDelegate;

@interface _TtC5Files20DOCPreviewController : QLPreviewController
{
    MISSING_TYPE *editingDelegate;	// 8 = 0x8
    MISSING_TYPE *visibilityDelegate;	// 24 = 0x18
    MISSING_TYPE *actionManager;	// 40 = 0x28
    MISSING_TYPE *configuration;	// 48 = 0x30
    MISSING_TYPE *nodeObserver;	// 56 = 0x38
    MISSING_TYPE *source;	// 64 = 0x40
    MISSING_TYPE *transitioningProvider;	// 88 = 0x58
    MISSING_TYPE *observation;	// 104 = 0x68
    MISSING_TYPE *domainDisplayNameProvider;	// 112 = 0x70
    MISSING_TYPE *linkNavigateInteraction;	// 120 = 0x78
    MISSING_TYPE *publishesUserActivity;	// 128 = 0x80
    MISSING_TYPE *currentUserActivity;	// 136 = 0x88
}

+ (void)clearSharedControllerFor:(id)arg1;	// IMP=0x00200000003a9890
+ (id)sharedControllerFor:(id)arg1;	// IMP=0x00100000003a9850
- (void).cxx_destruct;	// IMP=0x00400000003abe80
- (id)initWithPreviewItems:(id)arg1;	// IMP=0x00100000003abe20
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000003abdf0
- (id)excludedActivityTypesForPreviewController:(id)arg1;	// IMP=0x00100000003abd70
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2;	// IMP=0x00100000003abcf0
- (void)previewControllerWillDismiss:(id)arg1;	// IMP=0x00100000003ab6c0
- (void)previewController:(id)arg1 didSaveEditedCopyOfPreviewItem:(id)arg2 atURL:(id)arg3;	// IMP=0x00100000003ab5f0
- (void)previewController:(id)arg1 willSaveEditedItem:(id)arg2;	// IMP=0x00100000003aaf90
- (_Bool)previewController:(id)arg1 shouldAllowKeyCommandWithIdentifier:(unsigned long long)arg2;	// IMP=0x00100000003aaf70
- (_Bool)shouldAppendDefaultDismissActionsForPreviewController:(id)arg1;	// IMP=0x00100000003aaf60
- (id)dismissActionsForPreviewController:(id)arg1;	// IMP=0x00100000003aaf20
- (long long)previewController:(id)arg1 editingModeForPreviewItem:(id)arg2;	// IMP=0x00100000003aaeb0
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;	// IMP=0x00100000003aadb0
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;	// IMP=0x00100000003aacd0
- (void)reallyBecomeCurrent:(id)arg1;	// IMP=0x00100000003aac10
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000003aa6d0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000003aa690
@property(nonatomic) long long modalPresentationStyle;
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000003a9f30
- (void)dismissViaKeyCommand;	// IMP=0x00100000003a9b80
- (void)registerDomainDisplayNameProvider:(id)arg1;	// IMP=0x00100000003a9b20
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000003a9af0
- (id)init;	// IMP=0x00100000003a9ad0
- (void)move:(id)arg1;	// IMP=0x00100000003a9790
- (void)duplicate:(id)arg1;	// IMP=0x00100000003a9710
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00100000003a94c0
@property(nonatomic, readonly) NSArray *keyCommands;
@property(nonatomic, retain) id <QLPreviewControllerDelegate> delegate;

@end

