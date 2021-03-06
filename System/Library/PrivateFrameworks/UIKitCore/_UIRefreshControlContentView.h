//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSAttributedString, UIColor, UIImpactFeedbackGenerator, UIRefreshControl;

__attribute__((visibility("hidden")))
@interface _UIRefreshControlContentView : UIView
{
    UIRefreshControl *_refreshControl;	// 184 = 0xb8
    UIColor *_tintColor;	// 192 = 0xc0
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00000000005e1d15
@property(retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator; // @synthesize impactFeedbackGenerator=_impactFeedbackGenerator;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
- (void)_removeAllAnimations;	// IMP=0x00000000005e1ca3
- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;	// IMP=0x00000000005e1c9a
- (void)didTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x00000000005e1c94
- (void)willTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x00000000005e1c4d
- (void)refreshControlInvalidatedSnappingHeight;	// IMP=0x00000000005e1c47
@property(readonly, nonatomic) double maximumSnappingHeight;
@property(readonly, nonatomic) double minimumSnappingHeight;
@property(readonly, nonatomic) long long style;
@property(retain, nonatomic) NSAttributedString *attributedTitle;

@end

