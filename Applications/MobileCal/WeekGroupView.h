//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSCalendar, NSDateComponents, NSString, NSTimeZone, WeekView;
@protocol WeekGroupViewDelegate;

@interface WeekGroupView : UIView
{
    WeekView *_weekView;	// 8 = 0x8
    UIView *_gutterView;	// 16 = 0x10
    _Bool _showsTimeMarker;	// 24 = 0x18
    _Bool _asyncLoading;	// 25 = 0x19
    id <WeekGroupViewDelegate> _delegate;	// 32 = 0x20
    long long _week;	// 40 = 0x28
    NSDateComponents *_highlightedDateComponents;	// 48 = 0x30
}

+ (double)standardWidthForOrientation:(long long)arg1 withViewInViewHierarchy:(id)arg2;	// IMP=0x002000000006f5be
- (void).cxx_destruct;	// IMP=0x0020000000070e7d
@property _Bool asyncLoading; // @synthesize asyncLoading=_asyncLoading;
@property(retain, nonatomic) NSDateComponents *highlightedDateComponents; // @synthesize highlightedDateComponents=_highlightedDateComponents;
@property(nonatomic) long long week; // @synthesize week=_week;
@property(nonatomic) _Bool showsTimeMarker; // @synthesize showsTimeMarker=_showsTimeMarker;
@property(readonly, nonatomic) WeekView *weekView; // @synthesize weekView=_weekView;
@property(nonatomic) __weak id <WeekGroupViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)weekViewFirstVisibleSecondChanged:(long long)arg1;	// IMP=0x0010000000070d50
- (void)weekViewOccurrenceLayoutDidChange:(id)arg1;	// IMP=0x0010000000070cc6
- (void)weekViewDidLayout:(id)arg1;	// IMP=0x0010000000070c3c
- (void)emptySpaceClickedOnDate:(id)arg1;	// IMP=0x0000000000070baf
- (void)emptySpaceClick;	// IMP=0x0010000000070b3a
- (void)setHourHeightScale:(double)arg1;	// IMP=0x0010000000070b1d
- (id)occurrenceViewAtPoint:(struct CGPoint)arg1;	// IMP=0x0010000000070a83
- (id)viewForEvent:(id)arg1;	// IMP=0x0010000000070a66
- (_Bool)scrollerIsParentOfView:(id)arg1 isAllDay:(_Bool)arg2;	// IMP=0x0010000000070a49
- (void)addViewToScroller:(id)arg1 isAllDay:(_Bool)arg2;	// IMP=0x0010000000070a2c
- (struct CGPoint)pointAtDate:(id)arg1 isAllDay:(_Bool)arg2;	// IMP=0x00100000000709e6
- (_Bool)containsDate:(id)arg1;	// IMP=0x00100000000709c9
- (id)dateAtPoint:(struct CGPoint)arg1 isAllDay:(_Bool *)arg2 requireAllDayRegionInsistence:(_Bool)arg3;	// IMP=0x00100000000706b8
- (id)dateForXOffset:(double)arg1;	// IMP=0x001000000007061a
- (long long)_secondAtPosition:(double)arg1;	// IMP=0x001000000007057e
- (void)weekView:(id)arg1 didSelectEvent:(id)arg2 userInitiated:(_Bool)arg3;	// IMP=0x00100000000704e1
- (void)loadDataAsyncWithCompletion:(CDUnknownBlockType)arg1 reverse:(_Bool)arg2;	// IMP=0x0010000000070427
- (void)reloadData;	// IMP=0x001000000007040a
@property(copy, nonatomic) NSTimeZone *timeZone;
@property(copy, nonatomic) NSCalendar *calendar;
- (id)highlightedCalendarDateComponents;	// IMP=0x0010000000070379
@property(copy, nonatomic) NSDateComponents *weekStartDate;
- (id)selectedEventsForEditMenu;	// IMP=0x00100000000702a6
- (id)presentationControllerForEditMenu;	// IMP=0x0010000000070260
- (id)weekViewForWeekAfter:(id)arg1;	// IMP=0x00100000000701a5
- (id)weekViewForWeekBefore:(id)arg1;	// IMP=0x00100000000700ea
- (void)weekView:(id)arg1 receivedTapInAllDayAreaOnDate:(id)arg2;	// IMP=0x0010000000070056
- (void)weekViewAllDaySectionDidScroll:(id)arg1;	// IMP=0x001000000006ffcc
- (void)weekViewDidEndDecelerating:(id)arg1;	// IMP=0x001000000006ff42
- (void)weekViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x001000000006feb0
- (void)weekViewDidScroll:(id)arg1;	// IMP=0x001000000006fe26
- (void)weekViewDidBeginDragging:(id)arg1;	// IMP=0x001000000006fd9c
- (void)adjustForVisibleRect:(struct CGRect)arg1;	// IMP=0x001000000006fcf9
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x001000000006fc51
- (double)gutterWidth;	// IMP=0x001000000006fc09
- (void)showOverlayMonthInCellAtOffset:(double)arg1 animated:(_Bool)arg2;	// IMP=0x001000000006fb7f
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x001000000006faaa
- (void)layoutSubviews;	// IMP=0x001000000006f970
@property(readonly, copy) NSString *description;
- (id)initWithFrame:(struct CGRect)arg1 sizeClass:(long long)arg2 targetWindow:(id)arg3 rightClickDelegate:(id)arg4;	// IMP=0x001000000006f5f7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

