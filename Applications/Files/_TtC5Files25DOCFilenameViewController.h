//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class FPItem, MISSING_TYPE, NSArray, _TtC5Files15DOCFilenameView;

@interface _TtC5Files25DOCFilenameViewController : UIViewController
{
    MISSING_TYPE *filenameView;	// 8 = 0x8
    MISSING_TYPE *keyboardWasOnScreenInViewWillAppear;	// 16 = 0x10
    MISSING_TYPE *transitionProxy;	// 24 = 0x18
    MISSING_TYPE *item;	// 32 = 0x20
    MISSING_TYPE *dismissing;	// 40 = 0x28
    MISSING_TYPE *visibilityState;	// 41 = 0x29
    MISSING_TYPE *contentMustBeSelected;	// 42 = 0x2a
}

- (void).cxx_destruct;	// IMP=0x00400000001e7510
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000001e74c0
- (void)effectiveAppearanceDidChange:(id)arg1;	// IMP=0x00100000001e73d0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000001e6ed0
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x00100000001e6d80
- (void)editingDidChange:(id)arg1;	// IMP=0x00100000001e6cf0
- (void)editingDidEnd:(id)arg1;	// IMP=0x00100000001e6b10
@property(nonatomic, readonly) NSArray *keyCommands;
- (void);	// IMP=0x00100000001e63c0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000001e6200
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000001e6160
- (void)viewDidLoad;	// IMP=0x00100000001e6130
- (void)loadView;	// IMP=0x00100000001e60b0
- (_Bool)presentFromViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000001e6050
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001e5e00
@property(nonatomic, readonly) FPItem *item; // @synthesize item;
@property(nonatomic, readonly) _TtC5Files15DOCFilenameView *filenameView; // @synthesize filenameView;

@end

