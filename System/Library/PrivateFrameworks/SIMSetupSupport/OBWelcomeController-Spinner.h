//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBWelcomeController.h>

@class NSArray, NSString, SSSpinner, UIView;

@interface OBWelcomeController (Spinner)
- (void)_showButtonTraySpinner:(_Bool)arg1;	// IMP=0x0020000000006307
- (void)_layoutButtonTraySpinner;	// IMP=0x0020000000005d1f

// Remaining properties
@property _Bool animating;
@property(retain) NSArray *cachedButtons;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain) SSSpinner *spinner;
@property(retain) UIView *spinnerContainer;
@property(readonly) Class superclass;
@end
