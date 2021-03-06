//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSString;

@interface ExtensionListViewController : UITableViewController
{
    NSArray *_extensions;	// 8 = 0x8
    long long _extensionItemActivationStyle;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000003ef9
@property(nonatomic) long long extensionItemActivationStyle; // @synthesize extensionItemActivationStyle=_extensionItemActivationStyle;
- (void)editingSceneViewController:(id)arg1 userDidDismissWithAction:(long long)arg2 updatedConfiguration:(id)arg3 updatedConfiguredProperties:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000003ebe
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000003ca1
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x001000000000397c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000000386d
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000003850
- (void)_loadExtensions;	// IMP=0x00100000000032fa
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000032cb
- (void)viewDidLoad;	// IMP=0x00100000000031ed
- (id)init;	// IMP=0x00100000000031be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

