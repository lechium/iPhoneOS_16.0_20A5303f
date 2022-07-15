//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSNumber, NSString, PUEditPlugin, PUEditingExtensionUndoProxyHostSide, UIBarButtonItem;
@protocol NSCopying, PUEditPluginHostViewControllerDataSource, PUEditPluginHostViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUEditPluginHostViewController : UIViewController
{
    _Bool _extensionDidBeginContentEditing;	// 8 = 0x8
    _Bool _didHandleCancel;	// 9 = 0x9
    _Bool _didHandleDone;	// 10 = 0xa
    _Bool _showUndoRedoButtons;	// 11 = 0xb
    PUEditPlugin *_plugin;	// 16 = 0x10
    id <PUEditPluginHostViewControllerDataSource> _dataSource;	// 24 = 0x18
    id <PUEditPluginHostViewControllerDelegate> _delegate;	// 32 = 0x20
    UIViewController *_remoteViewController;	// 40 = 0x28
    id <NSCopying> _request;	// 48 = 0x30
    id _disablingIdleTimerToken;	// 56 = 0x38
    NSNumber *_allowsFullScreen;	// 64 = 0x40
    PUEditingExtensionUndoProxyHostSide *_undoProxy;	// 72 = 0x48
    UIBarButtonItem *_undoBarButtonItem;	// 80 = 0x50
    UIBarButtonItem *_redoBarButtonItem;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000001474a6
@property(nonatomic) _Bool showUndoRedoButtons; // @synthesize showUndoRedoButtons=_showUndoRedoButtons;
@property(nonatomic) __weak UIBarButtonItem *redoBarButtonItem; // @synthesize redoBarButtonItem=_redoBarButtonItem;
@property(nonatomic) __weak UIBarButtonItem *undoBarButtonItem; // @synthesize undoBarButtonItem=_undoBarButtonItem;
@property(retain, nonatomic) PUEditingExtensionUndoProxyHostSide *undoProxy; // @synthesize undoProxy=_undoProxy;
@property(retain, nonatomic) NSNumber *allowsFullScreen; // @synthesize allowsFullScreen=_allowsFullScreen;
@property(retain, nonatomic) id disablingIdleTimerToken; // @synthesize disablingIdleTimerToken=_disablingIdleTimerToken;
@property(nonatomic) _Bool didHandleDone; // @synthesize didHandleDone=_didHandleDone;
@property(nonatomic) _Bool didHandleCancel; // @synthesize didHandleCancel=_didHandleCancel;
@property(nonatomic) _Bool extensionDidBeginContentEditing; // @synthesize extensionDidBeginContentEditing=_extensionDidBeginContentEditing;
@property(copy) id <NSCopying> request; // @synthesize request=_request;
@property(retain) UIViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(nonatomic) __weak id <PUEditPluginHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <PUEditPluginHostViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) PUEditPlugin *plugin; // @synthesize plugin=_plugin;
- (void)handleRedoButton:(id)arg1;	// IMP=0x0000000000147267
- (void)handleUndoButton:(id)arg1;	// IMP=0x000000000014722a
- (void)setUndoEnabled:(_Bool)arg1 redoEnabled:(_Bool)arg2;	// IMP=0x00000000001471dd
- (void)setShowUndoRedo:(_Bool)arg1;	// IMP=0x0000000000147193
- (void)_setupUndoProxy;	// IMP=0x00000000001470b1
- (void)_endDisablingIdleTimerIfNecessary;	// IMP=0x0000000000146fa2
- (void)_beginDisablingIdleTimer;	// IMP=0x0000000000146e6c
- (void)_handleDoneButton:(id)arg1;	// IMP=0x0000000000146d26
- (void)_handleCancel;	// IMP=0x0000000000146c94
- (void)_handleCancelButton:(id)arg1;	// IMP=0x0000000000146bad
- (_Bool)prepareForDismissingForced:(_Bool)arg1;	// IMP=0x0000000000146b94
- (void)_updateBarButtonsWithUndoRedoVisible:(_Bool)arg1;	// IMP=0x00000000001466f5
- (void)_dismiss;	// IMP=0x00000000001465af
- (id)_extensionVendorProxy;	// IMP=0x0000000000146535
- (id)_hostContext;	// IMP=0x00000000001463ff
- (void)_addRemoteViewControllerIfNeededAllowingFullscreen:(_Bool)arg1;	// IMP=0x0000000000145ee6
- (void)_beginContentEditingWithCompletionHandler:(CDUnknownBlockType)arg1 timeout:(double)arg2;	// IMP=0x0000000000145c6d
- (void)_queryShouldShowCancelConfirmationWithResponseHandler:(CDUnknownBlockType)arg1 timeout:(double)arg2;	// IMP=0x0000000000145aa8
- (void)queryHandlingCapabilityForAdjustmentData:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2 timeout:(double)arg3;	// IMP=0x00000000001458c3
- (void)_handleVendorVersion:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001457f2
- (void)_queryAllowsFullScreen:(CDUnknownBlockType)arg1;	// IMP=0x000000000014566f
- (void)loadRemoteViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001452e5
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000145248
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001451b7
- (_Bool)prefersStatusBarHidden;	// IMP=0x00000000001451af
- (void)loadView;	// IMP=0x00000000001450a7
- (void)dealloc;	// IMP=0x0000000000145069
- (id)initWithPlugin:(id)arg1;	// IMP=0x0000000000144ffb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
