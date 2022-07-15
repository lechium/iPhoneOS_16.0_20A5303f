//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, PreferencesDoubleTwoPartValueCell;

__attribute__((visibility("hidden")))
@interface EKEventDateDetailItem
{
    PreferencesDoubleTwoPartValueCell *_cell;	// 40 = 0x28
    NSDate *_startDate;	// 48 = 0x30
    NSDate *_endDate;	// 56 = 0x38
    _Bool _indent;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000fedd3
- (void)shortenCell:(id)arg1;	// IMP=0x00000000000fec66
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000fe8ad
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 forceUpdate:(_Bool)arg3;	// IMP=0x00000000000fe89c
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;	// IMP=0x00000000000fe795
- (void)setEvent:(id)arg1 store:(id)arg2;	// IMP=0x00000000000fe6ac
- (void)reset;	// IMP=0x00000000000fe672
- (void)dealloc;	// IMP=0x00000000000fe634

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
