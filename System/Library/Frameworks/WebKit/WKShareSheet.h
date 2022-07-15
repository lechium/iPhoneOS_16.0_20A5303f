//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol WKShareSheetDelegate;

__attribute__((visibility("hidden")))
@interface WKShareSheet : NSObject
{
    struct RetainPtr<NSURL> _temporaryFileShareDirectory;	// 8 = 0x8
    struct WeakObjCPtr<WKWebView> _webView;	// 16 = 0x10
    struct WeakObjCPtr<id<WKShareSheetDelegate>> _delegate;	// 24 = 0x18
    struct CompletionHandler<void (bool)> _completionHandler;	// 32 = 0x20
    struct RetainPtr<UIActivityViewController> _shareSheetViewController;	// 40 = 0x28
    struct RetainPtr<UIViewController> _presentationViewController;	// 48 = 0x30
    _Bool _didShareSuccessfully;	// 56 = 0x38
}

+ (id)writeFileToShareableURL:(id)arg1 data:(id)arg2 temporaryDirectory:(id)arg3;	// IMP=0x0010000000906830
+ (id)createRandomSharingDirectoryForFile:(id)arg1;	// IMP=0x001000000090672f
+ (id)createTemporarySharingDirectory;	// IMP=0x00100000009066da
- (id).cxx_construct;	// IMP=0x000000000090695a
- (void).cxx_destruct;	// IMP=0x00000000009068dd
- (void)dismiss;	// IMP=0x00000000009064c3
- (void)presentWithShareDataArray:(id)arg1 inRect:(optional_1d8eff86)arg2;	// IMP=0x0000000000906256
- (void)presentWithParameters:(const void *)arg1 inRect:(optional_1d8eff86)arg2 completionHandler:(void *)arg3;	// IMP=0x0000000000905c36
- (id)initWithView:(id)arg1;	// IMP=0x0000000000905be4
@property(nonatomic) __weak id <WKShareSheetDelegate> delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
