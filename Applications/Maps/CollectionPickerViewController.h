//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CollectionListDataSource, CollectionSaveSession, MISSING_TYPE, NSString, UITableView;
@protocol CollectionPickerViewControllerDelegate;

@interface CollectionPickerViewController : UIViewController
{
    CollectionSaveSession *_collectionSession;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    CollectionListDataSource *_collectionListDataSource;	// 24 = 0x18
    id <CollectionPickerViewControllerDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001956e0
@property(nonatomic) __weak id <CollectionPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dataSource:(id)arg1 confirmDeleteCollections:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000001956ad
- (void)dataSource:(id)arg1 didChangeSelectedCollections:(id)arg2;	// IMP=0x00100000001956a7
- (void)dataSource:(id)arg1 shareCollection:(id)arg2 sourceView:(id)arg3;	// IMP=0x00100000001956a1
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;	// IMP=0x0010000000195629
- (void)dataSource:(id)arg1 itemFocused:(id)arg2;	// IMP=0x0010000000195623
- (void)dataSourceUpdated:(id)arg1;	// IMP=0x00100000001955cb
- (void)loadDataSource;	// IMP=0x00100000001954e5
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000019548f
- (void)viewDidLayoutSubviews;	// IMP=0x00100000001952f7
- (struct CGSize)contentSize;	// IMP=0x00100000001951b9
- (void)viewDidLoad;	// IMP=0x0010000000194d74
- (MISSING_TYPE *)initWithCollectionEditSession: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000194d02

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

