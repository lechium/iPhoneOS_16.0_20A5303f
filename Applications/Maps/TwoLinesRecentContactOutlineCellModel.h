//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRRecentContact, NSString, UICollectionViewCellRegistration;

@interface TwoLinesRecentContactOutlineCellModel
{
    CRRecentContact *_recentContact;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000aec7fd
@property(readonly, nonatomic) CRRecentContact *recentContact; // @synthesize recentContact=_recentContact;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000aec709
@property(readonly) unsigned long long hash;
- (id)initWithRecentContact:(id)arg1 backgroundModel:(id)arg2;	// IMP=0x0010000000aec607
@property(readonly, nonatomic) id homeRecentsItem;
@property(readonly, nonatomic) id homeDragAndDropObject;
@property(readonly, nonatomic) id homeActionObject;

// Remaining properties
@property(readonly, nonatomic) UICollectionViewCellRegistration *cellRegistration;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

