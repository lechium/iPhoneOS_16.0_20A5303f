//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString, UITableView;

@interface COSTinkerFamilyMemberSelectionViewController
{
    _Bool _familyAtMaximumSize;	// 8 = 0x8
    NSArray *_familyMembers;	// 16 = 0x10
    NSDictionary *_pairedTinkerDevices;	// 24 = 0x18
    NSString *_activePairingDeviceSerialNumber;	// 32 = 0x20
    UITableView *_tableView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000001280ff
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;	// IMP=0x00100000001280d9
- (void)showMustUnpairFirstAlert:(id)arg1;	// IMP=0x0010000000127e89
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000127be2
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0010000000127b22
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0010000000127a63
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000001276f7
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000001273fb
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00100000001273e0
- (id)detailString;	// IMP=0x0010000000127374
- (id)titleString;	// IMP=0x0010000000127308
- (id)familyMemberAtIndexPath:(id)arg1;	// IMP=0x0010000000126eec
- (long long)sectionNumberFromSection:(long long)arg1;	// IMP=0x0010000000126e9a
- (long long)logicalSectionFromSectionNumber:(long long)arg1;	// IMP=0x0010000000126b7d
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000126ac2
- (void)viewDidLoad;	// IMP=0x0010000000125e99
- (id)init;	// IMP=0x0010000000125e39

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

