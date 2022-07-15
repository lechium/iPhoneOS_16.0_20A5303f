//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CalendarModel, MonthDayTransitionView, NSString, PaletteView;

@interface CompactMonthDayAnimator : NSObject
{
    _Bool _reverse;	// 8 = 0x8
    CalendarModel *_model;	// 16 = 0x10
    MonthDayTransitionView *_transitionView;	// 24 = 0x18
    PaletteView *_paletteView;	// 32 = 0x20
}

+ (Class)monthDayTransitionViewClass;	// IMP=0x002000000014b578
- (void).cxx_destruct;	// IMP=0x002000000014c012
@property(retain, nonatomic) PaletteView *paletteView; // @synthesize paletteView=_paletteView;
@property(retain, nonatomic) MonthDayTransitionView *transitionView; // @synthesize transitionView=_transitionView;
@property(nonatomic) _Bool reverse; // @synthesize reverse=_reverse;
@property(retain, nonatomic) CalendarModel *model; // @synthesize model=_model;
- (void)animateTransition:(id)arg1;	// IMP=0x001000000014b6d1
- (double)transitionDuration:(id)arg1;	// IMP=0x001000000014b681
- (id)initWithModel:(id)arg1 paletteView:(id)arg2 reverse:(_Bool)arg3;	// IMP=0x001000000014b589

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
