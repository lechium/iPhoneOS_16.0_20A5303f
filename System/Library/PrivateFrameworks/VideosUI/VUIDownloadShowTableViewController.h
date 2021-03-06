//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSMutableArray, NSString, UIBarButtonItem, VUIDownloadShowDataSource, VUIDownloadShowTableHeaderView, VUIMediaEntitiesDataSource;

__attribute__((visibility("hidden")))
@interface VUIDownloadShowTableViewController : UITableViewController
{
    VUIDownloadShowDataSource *_downloadDataSource;	// 8 = 0x8
    VUIMediaEntitiesDataSource *_seasonsDataSource;	// 16 = 0x10
    VUIDownloadShowTableHeaderView *_sizingHeader;	// 24 = 0x18
    NSMutableArray *_groupings;	// 32 = 0x20
    UIBarButtonItem *_rightBarButtonItem;	// 40 = 0x28
    UIBarButtonItem *_leftBarButtonItem;	// 48 = 0x30
    UIBarButtonItem *_backBarButtonItem;	// 56 = 0x38
    NSArray *_seasons;	// 64 = 0x40
    NSMutableArray *_assetControllersToRemove;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000002e191
@property(retain, nonatomic) NSMutableArray *assetControllersToRemove; // @synthesize assetControllersToRemove=_assetControllersToRemove;
@property(retain, nonatomic) NSArray *seasons; // @synthesize seasons=_seasons;
@property(retain, nonatomic) UIBarButtonItem *backBarButtonItem; // @synthesize backBarButtonItem=_backBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *leftBarButtonItem; // @synthesize leftBarButtonItem=_leftBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *rightBarButtonItem; // @synthesize rightBarButtonItem=_rightBarButtonItem;
@property(retain, nonatomic) NSMutableArray *groupings; // @synthesize groupings=_groupings;
@property(retain, nonatomic) VUIDownloadShowTableHeaderView *sizingHeader; // @synthesize sizingHeader=_sizingHeader;
@property(retain, nonatomic) VUIMediaEntitiesDataSource *seasonsDataSource; // @synthesize seasonsDataSource=_seasonsDataSource;
@property(retain, nonatomic) VUIDownloadShowDataSource *downloadDataSource; // @synthesize downloadDataSource=_downloadDataSource;
- (void)_updateNavigationBarPadding;	// IMP=0x000000000002ddf8
- (_Bool)_mediaItemShouldShowRenewOption:(id)arg1;	// IMP=0x000000000002dc4b
- (void)_didPressGetMoreEpisodes:(id)arg1;	// IMP=0x000000000002dbc1
- (_Bool)_episodeHasAllCanonicalIDs:(id)arg1;	// IMP=0x000000000002db0f
- (id)_moreEpisodesURLForSection:(long long)arg1;	// IMP=0x000000000002d62d
- (void)_popIfNeeded;	// IMP=0x000000000002d599
- (void)_exitEditingMode;	// IMP=0x000000000002d43c
- (id)_configureRenewAlertControllerForIndexPath:(id)arg1 forPreferredStyle:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002bd7b
- (id)_configureDeleteAlertControllerForIndexPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002a8c6
- (void)_cancelPressed;	// IMP=0x000000000002a8b4
- (void)_editToggled;	// IMP=0x000000000002a694
- (id)_headerTitleForEpisodeMediaItem:(id)arg1;	// IMP=0x000000000002a547
- (void)downloadCellDidRequestCancelDownload:(id)arg1;	// IMP=0x000000000002a2f4
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000029af9
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;	// IMP=0x0000000000029a64
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;	// IMP=0x00000000000299cf
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000298d9
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000294fa
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000000292cd
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0000000000028fee
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000028fd1
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000028f7f
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000028d13
- (void)dataSourceDidFinishFetching:(id)arg1;	// IMP=0x0000000000028b0a
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000028a24
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000002895c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000002890f
- (void)viewWillLayoutSubviews;	// IMP=0x00000000000288ce
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000002865a
- (void)loadView;	// IMP=0x0000000000028294
- (id)initWithDataSource:(id)arg1 seasonsDataSource:(id)arg2;	// IMP=0x00000000000281b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

