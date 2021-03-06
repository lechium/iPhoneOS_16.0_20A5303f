//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSConditionLock, NSMutableArray, PHFetchResult, PUCurationTragicFailureInHighlightsGridDebugViewController;

__attribute__((visibility("hidden")))
@interface PUCurationTragicFailureInHighlightsDebugViewController : UITableViewController
{
    PHFetchResult *_highlights;	// 8 = 0x8
    PUCurationTragicFailureInHighlightsGridDebugViewController *_assetCollectionViewController;	// 16 = 0x10
    unsigned long long _currentHighlightIndex;	// 24 = 0x18
    NSConditionLock *_backgroundActivityLock;	// 32 = 0x20
    NSMutableArray *_highlightDatas;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000047734b
- (void)goToPreviousHighlight:(id)arg1;	// IMP=0x00000000004772c1
- (void)goToNextHighlight:(id)arg1;	// IMP=0x000000000047722d
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000476c6c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000476c4f
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000476c44
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x0000000000476c3e
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x0000000000476c36
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000476c2e
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;	// IMP=0x0000000000476c28
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000476c1a
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000476b5e
- (void)_fetchUtilityAssetInformation;	// IMP=0x0000000000476843
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000004767db
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000476776
- (void)viewDidLoad;	// IMP=0x000000000047663f
- (void)dealloc;	// IMP=0x00000000004765d7

@end

