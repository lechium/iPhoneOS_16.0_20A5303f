//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, RAPReport, RAPWebBundleHomeViewController, UINavigationController;

@interface RAPWebBundleContaineeViewController
{
    RAPReport *_report;	// 8 = 0x8
    RAPWebBundleHomeViewController *_contentViewController;	// 16 = 0x10
    UINavigationController *_navController;	// 24 = 0x18
    double _cardContentsHeight;	// 32 = 0x20
    double _keyboardHeight;	// 40 = 0x28
    _Bool _keyboardShown;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000171385
- (void)_keyboardAboutToHide:(id)arg1;	// IMP=0x0010000000171363
- (void)_keyboardAboutToChangeFrame:(id)arg1;	// IMP=0x0010000000171340
- (void)_keyboardAboutToShow:(id)arg1;	// IMP=0x0010000000171321
- (void)_handleKeyboardNotification:(id)arg1 aboutToHide:(_Bool)arg2;	// IMP=0x00100000001710a8
- (void)saveInitialCardHeight:(double)arg1;	// IMP=0x0010000000170e84
- (void)updateCardHeight:(double)arg1;	// IMP=0x0010000000170e24
- (void)enableDismissByGesture:(_Bool)arg1;	// IMP=0x0010000000170dc0
- (_Bool)_supportsFullHeightCardsOnly;	// IMP=0x0010000000170d65
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x0010000000170c00
- (id)webBundleQuestion;	// IMP=0x0010000000170b71
- (void)_setInitialCardHeightIfNeeded;	// IMP=0x0010000000170a44
- (MISSING_TYPE *)_setupConstraints;	// IMP=0x00100000001706b8
- (void)_setupViews;	// IMP=0x00100000001704c7
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000170452
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000170336
- (void)viewDidLoad;	// IMP=0x00100000001702d1
- (id)initWithReport:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001701e3

@end

