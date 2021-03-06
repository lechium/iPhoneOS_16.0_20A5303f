//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebDefaultFrameLoadDelegate : NSObject
{
}

+ (id)sharedFrameLoadDelegate;	// IMP=0x00800000000ef7a0
- (void)webView:(id)arg1 didLayout:(unsigned long long)arg2;	// IMP=0x00000000000ef980
- (void)webView:(id)arg1 didRemoveFrameFromHierarchy:(id)arg2;	// IMP=0x00000000000ef970
- (void)webView:(id)arg1 didClearInspectorWindowObject:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000000000ef960
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;	// IMP=0x00000000000ef950
- (void)webView:(id)arg1 didHandleOnloadEventsForFrame:(id)arg2;	// IMP=0x00000000000ef940
- (void)webView:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;	// IMP=0x00000000000ef930
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;	// IMP=0x00000000000ef920
- (void)webView:(id)arg1 didPopStateWithinPageForFrame:(id)arg2;	// IMP=0x00000000000ef910
- (void)webView:(id)arg1 didReplaceStateWithinPageForFrame:(id)arg2;	// IMP=0x00000000000ef900
- (void)webView:(id)arg1 didPushStateWithinPageForFrame:(id)arg2;	// IMP=0x00000000000ef8f0
- (void)webView:(id)arg1 didClearWindowObjectForFrame:(id)arg2 inScriptWorld:(id)arg3;	// IMP=0x00000000000ef8e0
- (void)webView:(id)arg1 didDetectXSS:(id)arg2;	// IMP=0x00000000000ef8d0
- (void)webView:(id)arg1 didRunInsecureContent:(id)arg2;	// IMP=0x00000000000ef8c0
- (void)webViewDidDisplayInsecureContent:(id)arg1;	// IMP=0x00000000000ef8b0
- (void)webView:(id)arg1 didCreateJavaScriptContext:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000000000ef8a0
- (void)webView:(id)arg1 windowScriptObjectAvailable:(id)arg2;	// IMP=0x00000000000ef890
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000000000ef880
- (void)webView:(id)arg1 willCloseFrame:(id)arg2;	// IMP=0x00000000000ef870
- (void)webView:(id)arg1 didCancelClientRedirectForFrame:(id)arg2;	// IMP=0x00000000000ef860
- (void)webView:(id)arg1 willPerformClientRedirectToURL:(id)arg2 delay:(double)arg3 fireDate:(id)arg4 forFrame:(id)arg5;	// IMP=0x00000000000ef850
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;	// IMP=0x00000000000ef840
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000000000ef830
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;	// IMP=0x00000000000ef820
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000000000ef810
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;	// IMP=0x00000000000ef800
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000000000ef7f0
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2;	// IMP=0x00000000000ef7e0
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;	// IMP=0x00000000000ef7d0

@end

