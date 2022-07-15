//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class HMHome, HUUserListTableManager, NSString;
@protocol HSUserListViewControllerDelegate;

@interface HSUserListViewController : UITableViewController
{
    id <HSUserListViewControllerDelegate> _delegate;	// 8 = 0x8
    HUUserListTableManager *_tableViewManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000003e1bf
@property(retain, nonatomic) HUUserListTableManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(nonatomic) __weak id <HSUserListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateEditButton;	// IMP=0x001000000003e0d1
- (_Bool)_isUserListEmpty;	// IMP=0x001000000003dffc
- (void)_doneTapped;	// IMP=0x001000000003dfbd
- (void)managerDidCancelInvite:(id)arg1 error:(id)arg2;	// IMP=0x001000000003df6b
- (void)managerDidRemoveUser:(id)arg1 error:(id)arg2;	// IMP=0x001000000003df19
- (void)managerDidUpdateUserList;	// IMP=0x001000000003df07
- (void)managerDidSendInvitations:(id)arg1;	// IMP=0x001000000003de95
- (void)managerDidDismissWithError:(id)arg1;	// IMP=0x001000000003de23
- (void)updateHome:(id)arg1;	// IMP=0x001000000003ddf5
@property(retain, nonatomic) HMHome *home;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x001000000003d9a2
- (void)viewDidLoad;	// IMP=0x001000000003d8f0
- (id)init;	// IMP=0x001000000003d82e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
