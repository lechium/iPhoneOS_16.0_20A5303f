//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIViewController;
@protocol PXGridPresentationBarsUpdateDelegate;

__attribute__((visibility("hidden")))
@interface PUPXFilteredMomentsViewController
{
    UIViewController *_containerViewController;	// 8 = 0x8
    id <PXGridPresentationBarsUpdateDelegate> _barsUpdateDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002e1170
@property(nonatomic) __weak id <PXGridPresentationBarsUpdateDelegate> barsUpdateDelegate; // @synthesize barsUpdateDelegate=_barsUpdateDelegate;
@property(nonatomic) __weak UIViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000002e10b4
- (_Bool)isInPlaces:(id)arg1;	// IMP=0x00000000002e1027
- (void)pu_performBarsVisibilityUpdatesWithAnimationSettings:(struct PUBarAnimationSettings)arg1;	// IMP=0x00000000002e0f01
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002e0dfa
- (void)updateNavigationBarAnimated:(_Bool)arg1;	// IMP=0x00000000002e0d2e
- (void)getEmptyPlaceholderViewTitle:(id *)arg1 message:(id *)arg2 buttonTitle:(id *)arg3 buttonAction:(CDUnknownBlockType *)arg4;	// IMP=0x00000000002e0cb4
- (id)oneUpPresentationHelperViewController:(id)arg1;	// IMP=0x00000000002e0c41
- (void)viewDidLoad;	// IMP=0x00000000002e0bce
- (void)loadView;	// IMP=0x00000000002e0b8d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

