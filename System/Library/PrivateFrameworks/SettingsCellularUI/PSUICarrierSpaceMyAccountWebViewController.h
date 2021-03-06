//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSURL, UIBarButtonItem, WKWebView;

__attribute__((visibility("hidden")))
@interface PSUICarrierSpaceMyAccountWebViewController : UIViewController
{
    NSURL *_myAccountURL;	// 8 = 0x8
    WKWebView *_webView;	// 16 = 0x10
    UIBarButtonItem *_cancelButton;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000072eca
@property(retain, nonatomic) UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSURL *myAccountURL; // @synthesize myAccountURL=_myAccountURL;
- (void)addCancelButton;	// IMP=0x0000000000072da9
- (void)viewDidLoad;	// IMP=0x0000000000072ce6
- (void)dismissMyAccount;	// IMP=0x0000000000072ccd
- (void)loadView;	// IMP=0x0000000000072b47
- (id)initWithWebView:(id)arg1 url:(id)arg2;	// IMP=0x0000000000072a65
- (id)initWithURLString:(id)arg1;	// IMP=0x0000000000072992

@end

