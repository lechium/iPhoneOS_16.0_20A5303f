//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class NSArray, NSString, UIView;

__attribute__((visibility("hidden")))
@interface UICandidateViewController : UIViewController
{
    UIView *_candidateView;	// 8 = 0x8
}

+ (double)preferredCandidateBarHeightForTraitCollection:(id)arg1;	// IMP=0x0010000000a4bc73
- (void).cxx_destruct;	// IMP=0x0000000000a4c9e2
@property(retain, nonatomic) UIView *candidateView; // @synthesize candidateView=_candidateView;
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000a4c4fa
- (long long)overrideUserInterfaceStyle;	// IMP=0x0000000000a4c480
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000a4c392
- (void)loadView;	// IMP=0x0000000000a4c325
@property(readonly, nonatomic) NSArray *displayedCandidates;
- (_Bool)hidesExpandableButton;	// IMP=0x0000000000a4c275
- (double)preferredHeightForTraitCollection:(id)arg1;	// IMP=0x0000000000a4c25c
- (_Bool)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2;	// IMP=0x0000000000a4bbe3
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000a4bbdb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
