//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC11WeatherMaps29ScrubberOverlayViewController : UIViewController
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *store;	// 24 = 0x18
    MISSING_TYPE *scrubberView;	// 32 = 0x20
    MISSING_TYPE *scrubberForecastHintView;	// 40 = 0x28
    MISSING_TYPE *storeObserver;	// 48 = 0x30
    MISSING_TYPE *hideTimer;	// 56 = 0x38
    MISSING_TYPE *hideDelay;	// 64 = 0x40
    MISSING_TYPE *horizontalPadding;	// 72 = 0x48
    MISSING_TYPE *verticalSpacingBeneathForecastHint;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000001381c0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000138190
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000137760
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000137150
- (void)viewDidLoad;	// IMP=0x0000000000136fe0
- (void)loadView;	// IMP=0x0000000000136b20
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000136ab0

@end
