//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class DOCConfiguration, MISSING_TYPE, NSArray;

@interface _TtC5Files24DOCServiceViewController : UIViewController
{
    MISSING_TYPE *currentViewController;	// 8 = 0x8
    MISSING_TYPE *currentServiceContext;	// 16 = 0x10
    MISSING_TYPE *configuration;	// 24 = 0x18
    MISSING_TYPE *isBrowserViewController;	// 32 = 0x20
    MISSING_TYPE *shouldOverrideWindowAppearance;	// 33 = 0x21
    MISSING_TYPE *lastAppearance;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0040000000195fa0
- (void)embedViewController:(id)arg1;	// IMP=0x0010000000195f00
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
- (void)updateEditingTo:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000195b90
- (void)updateAppearance:(id)arg1 shouldFlushCA:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000195a40
- (void)updateAppearance:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000195650
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x0010000000195580
- (void)viewDidLoad;	// IMP=0x00100000001954c0
- (void)loadView;	// IMP=0x0010000000195440
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000195400
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000195390
@property(nonatomic) struct CGSize preferredContentSize;
@property(nonatomic) _Bool shouldOverrideWindowAppearance; // @synthesize shouldOverrideWindowAppearance;
@property(nonatomic) _Bool isBrowserViewController; // @synthesize isBrowserViewController;
@property(nonatomic, retain) DOCConfiguration *configuration; // @synthesize configuration;

@end

