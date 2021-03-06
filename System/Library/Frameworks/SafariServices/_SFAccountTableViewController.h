//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSCountedSet, NSString, UISearchController, WBSSavedAccount, _SFAccountIconController, _SFAccountTableConfiguration;

__attribute__((visibility("hidden")))
@interface _SFAccountTableViewController : UITableViewController
{
    _SFAccountIconController *_iconController;	// 8 = 0x8
    NSCountedSet *_visibleDomains;	// 16 = 0x10
    _SFAccountTableConfiguration *_configuration;	// 24 = 0x18
    _Bool _isAuthenticatingForOneTimeSharing;	// 32 = 0x20
    NSString *_searchPattern;	// 40 = 0x28
    UISearchController *_searchController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000006226
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(readonly, nonatomic) NSString *searchPattern; // @synthesize searchPattern=_searchPattern;
@property(readonly, nonatomic) _Bool shouldSuppressAccountManagerLockedView;
- (void)searchPatternDidUpdate;	// IMP=0x00000000000061da
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x000000000000612f
- (long long)positionForBar:(id)arg1;	// IMP=0x0000000000006124
- (void)willDismissSearchController:(id)arg1;	// IMP=0x00000000000060dd
- (void)willPresentSearchController:(id)arg1;	// IMP=0x000000000000607d
- (id)iconControllerForAccountDetailViewController:(id)arg1;	// IMP=0x0000000000006068
- (void)_updateIconForDomain:(id)arg1 forCell:(id)arg2;	// IMP=0x0000000000005ec0
- (void)iconDidUpdateForDomain:(id)arg1 iconController:(id)arg2;	// IMP=0x0000000000005b86
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;	// IMP=0x0000000000005b37
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;	// IMP=0x0000000000005acf
- (id)_tableView:(id)arg1 previewForIndexPath:(id)arg2;	// IMP=0x0000000000005737
- (id)tableView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;	// IMP=0x00000000000056ae
- (id)tableView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;	// IMP=0x0000000000005625
- (void)tableView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000000055ad
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x0000000000004b27
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000004a78
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000004993
- (_Bool)_shouldShowToolbarWhenSearching;	// IMP=0x0000000000004981
- (_Bool)_shouldUseStackedSearchBarPlacement;	// IMP=0x0000000000004932
- (void)handleContextMenuDeleteForIndexPath:(id)arg1;	// IMP=0x000000000000492c
- (void)_shareSavedAccount:(id)arg1 authenticationContext:(id)arg2 modalPresentationSourceView:(id)arg3;	// IMP=0x00000000000045cb
- (void)_shareSavedAccount:(id)arg1 modalPresentationSourceView:(id)arg2;	// IMP=0x00000000000043cf
- (_Bool)_hasMarkedText;	// IMP=0x0000000000004344
@property(retain, nonatomic) NSString *searchQuery;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000041e7
- (void)_sceneDidEnterBackground:(id)arg1;	// IMP=0x0000000000004093
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000000401a
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000003f7c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000003f33
- (void)viewDidLoad;	// IMP=0x0000000000003d04
- (id)initWithStyle:(long long)arg1 siteMetadataManager:(id)arg2 configuration:(id)arg3;	// IMP=0x0000000000003bcb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) WBSSavedAccount *savedAccountToRemoveAfterCompletedUpgradeInDetailView;
@property(nonatomic, getter=isShowingAccountManagerLockedView) _Bool showingAccountManagerLockedView;
@property(readonly) Class superclass;

@end

