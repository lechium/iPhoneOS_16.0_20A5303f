//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventEditedByDetailItem
{
    UITableViewCell *_cell;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000008ef30
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;	// IMP=0x000000000008edee
- (_Bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;	// IMP=0x000000000008ed27
- (void)shortenCell:(id)arg1;	// IMP=0x000000000008ec6a
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000008e944
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 forceUpdate:(_Bool)arg3;	// IMP=0x000000000008e8d7
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;	// IMP=0x000000000008e799
- (void)reset;	// IMP=0x000000000008e778

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
