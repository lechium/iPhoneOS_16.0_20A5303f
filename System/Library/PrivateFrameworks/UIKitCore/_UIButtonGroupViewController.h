//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class NSArray, NSString, UIColor, UIScrollView, _UIButtonBar;

__attribute__((visibility("hidden")))
@interface _UIButtonGroupViewController : UIViewController
{
    _UIButtonBar *_originalOwner;	// 8 = 0x8
    _UIButtonBar *_buttonBar;	// 16 = 0x10
    UIScrollView *_scrollView;	// 24 = 0x18
    NSArray *_barButtonItemGroups;	// 32 = 0x20
    _Bool _overLightKeyboard;	// 40 = 0x28
    UIColor *_tintColor;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001367c6
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIColor *backgroundColor;
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000136627
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001365de
- (void)loadView;	// IMP=0x000000000013620c
- (void)dismissIfNecessary;	// IMP=0x000000000013613b
- (id)initWithBarButtonItemGroups:(id)arg1 overLightKeyboard:(_Bool)arg2;	// IMP=0x0000000000135bbd
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000135b0e
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000135a5f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

