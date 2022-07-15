//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKCalendar, UIMenu, UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventCalendarDetailItem
{
    EKCalendar *_calendar;	// 40 = 0x28
    UITableViewCell *_cell;	// 48 = 0x30
    UIMenu *_popupMenu;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001433da
- (_Bool)_shouldAllowViewingDetailsForCalendar:(id)arg1;	// IMP=0x0000000000143352
- (_Bool)_calendarCanBeChanged;	// IMP=0x000000000014319c
- (_Bool)editItemViewControllerSave:(id)arg1;	// IMP=0x0000000000143168
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;	// IMP=0x00000000001430b0
- (id)popupMenu:(id)arg1;	// IMP=0x0000000000142d83
- (id)eligibleCalendars;	// IMP=0x0000000000142c04
- (_Bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000142bfc
- (id)cellForSubitemAtIndex:(unsigned long long)arg1 withTraitCollection:(id)arg2;	// IMP=0x00000000001425ec
- (_Bool)eventViewController:(id)arg1 shouldSelectSubitem:(unsigned long long)arg2;	// IMP=0x00000000001425d7
- (_Bool)minimalMode;	// IMP=0x000000000014257d
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;	// IMP=0x0000000000142461
- (void)_contentSizeCategoryChanged:(id)arg1;	// IMP=0x000000000014244f
- (void)reset;	// IMP=0x00000000001423f6
- (void)dealloc;	// IMP=0x0000000000142374
- (id)init;	// IMP=0x00000000001422e0

@end
