//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKSafeBrowsingWarning : UIScrollView
{
    struct CompletionHandler<void (std::variant<WebKit::ContinueUnsafeLoad, WTF::URL>&&)> _completionHandler;	// 8 = 0x8
    struct RefPtr<const WebKit::SafeBrowsingWarning, WTF::RawPtrTraits<const WebKit::SafeBrowsingWarning>, WTF::DefaultRefDerefTraits<const WebKit::SafeBrowsingWarning>> _warning;	// 16 = 0x10
    struct WeakObjCPtr<WKSafeBrowsingTextView> _details;	// 24 = 0x18
    struct WeakObjCPtr<WKSafeBrowsingBox> _box;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x00000000009056f0
- (void).cxx_destruct;	// IMP=0x0000000000905681
- (_Bool)forMainFrameNavigation;	// IMP=0x000000000090566d
- (void)clickedOnLink:(id)arg1;	// IMP=0x000000000090552a
- (void)goBackClicked;	// IMP=0x000000000090548c
- (void)dealloc;	// IMP=0x00000000009053b5
- (void)didMoveToWindow;	// IMP=0x00000000009053a3
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x000000000090538b
- (void)layoutSubviews;	// IMP=0x000000000090534a
- (void)layoutText;	// IMP=0x0000000000905329
- (void)updateContentSize;	// IMP=0x0000000000905100
- (void)showDetailsClicked;	// IMP=0x00000000009048f3
- (void)addContent;	// IMP=0x000000000090381c
- (id)initWithFrame:(struct CGRect)arg1 safeBrowsingWarning:(const void *)arg2 completionHandler:(void *)arg3;	// IMP=0x000000000090362f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

