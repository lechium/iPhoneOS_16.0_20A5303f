//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@class NSString, QLRemoteItemViewController;

__attribute__((visibility("hidden")))
@interface QLPreviewExtensionHostContext : NSExtensionContext
{
    QLRemoteItemViewController *_remoteItemViewController;	// 8 = 0x8
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x001000000007620a
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x00100000000761f1
- (void).cxx_destruct;	// IMP=0x000000000007715b
@property(nonatomic) __weak QLRemoteItemViewController *remoteItemViewController; // @synthesize remoteItemViewController=_remoteItemViewController;
- (void)getARQLInlineProxy3WithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000077068
- (void)getARQLInlineProxy2WithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000076fa2
- (void)getARQLInlineProxyWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000076edc
- (void)generatePreviewForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000076dfd
- (void)invalidateService;	// IMP=0x0000000000076dc0
- (void)getPrinterProxyWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000076bb0
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000076858
- (void)setHostViewControllerProxy:(id)arg1;	// IMP=0x00000000000767e6
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000007676e
- (void)previewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000076722
- (void)previewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000766d6
- (void)previewDidAppear:(_Bool)arg1;	// IMP=0x000000000007668a
- (void)previewWillAppear:(_Bool)arg1;	// IMP=0x000000000007663e
- (void)previewControllerDidUpdatePreferredContentSize:(id)arg1;	// IMP=0x0000000000076580
- (void)previewControllerDidUpdateTitle:(id)arg1;	// IMP=0x000000000007649c
- (void)previewControllerWantsFullScreen:(_Bool)arg1;	// IMP=0x0000000000076411
- (id)protocolService;	// IMP=0x00000000000763fd
- (id)protocolServiceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000076223

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

