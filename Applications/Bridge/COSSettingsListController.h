//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BPSNTKCustomization, BPSNTKFacesViewController, COSSkippedMiniFlowController, COSTinkerAppStoreAuthHelper, CSSearchQuery, FLPreferencesController, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, PSKeyboardNavigationSearchController, PSSpecifier, PSSpotlightSearchResultsController, UIViewController;

@interface COSSettingsListController
{
    _Bool _showAppSections;	// 194 = 0xc2
    _Bool _shouldRefreshRowsOnForegroundEvent;	// 195 = 0xc3
    _Bool _hasRowsPendingInstallation;	// 196 = 0xc4
    _Bool _receivedDiscoveryResult;	// 197 = 0xc5
    _Bool _navigateWhenReceivingCellularPlanResult;	// 198 = 0xc6
    _Bool _isBreatheAppInstalled;	// 199 = 0xc7
    _Bool _isReloadingWatchkitApps;	// 200 = 0xc8
    _Bool _wantsAnotherWatchkitAppsReload;	// 201 = 0xc9
    BPSNTKFacesViewController *_facesController;	// 208 = 0xd0
    NSDictionary *_inheritedWhiteList;	// 216 = 0xd8
    UIViewController *_nothingSelectedController;	// 224 = 0xe0
    NSMutableDictionary *_sockPuppetAppMapping;	// 232 = 0xe8
    NSMutableArray *_stashedWatchKitApps;	// 240 = 0xf0
    NSMutableArray *_stashedWatchKitAppsState;	// 248 = 0xf8
    PSSpecifier *_pairNewDeviceSpecifier;	// 256 = 0x100
    PSSpecifier *_loadingSpecifier;	// 264 = 0x108
    BPSNTKCustomization *_customizationController;	// 272 = 0x110
    FLPreferencesController *_fuPrefsController;	// 280 = 0x118
    COSSkippedMiniFlowController *_skippedMiniFlowController;	// 288 = 0x120
    PSKeyboardNavigationSearchController *_spotlightSearchController;	// 296 = 0x128
    PSSpotlightSearchResultsController *_spotlightResultsController;	// 304 = 0x130
    CSSearchQuery *_searchQuery;	// 312 = 0x138
    NSMutableSet *_searchCategoriesWithoutIcons;	// 320 = 0x140
    NSMutableDictionary *_watchAppInstallStates;	// 328 = 0x148
    COSTinkerAppStoreAuthHelper *_storeAuthHelper;	// 336 = 0x150
}

+ (id)installedWatchkitApps;	// IMP=0x00200000000751c0
+ (id)unavailableWatchKitApps;	// IMP=0x00100000000745e0
+ (id)sharedTopLevelIconsLazyLoadingQueue;	// IMP=0x001000000006a123
- (void).cxx_destruct;	// IMP=0x0020000000076e64
@property(retain, nonatomic) COSTinkerAppStoreAuthHelper *storeAuthHelper; // @synthesize storeAuthHelper=_storeAuthHelper;
@property(nonatomic) _Bool wantsAnotherWatchkitAppsReload; // @synthesize wantsAnotherWatchkitAppsReload=_wantsAnotherWatchkitAppsReload;
@property(nonatomic) _Bool isReloadingWatchkitApps; // @synthesize isReloadingWatchkitApps=_isReloadingWatchkitApps;
@property(nonatomic) _Bool isBreatheAppInstalled; // @synthesize isBreatheAppInstalled=_isBreatheAppInstalled;
@property(retain, nonatomic) NSMutableDictionary *watchAppInstallStates; // @synthesize watchAppInstallStates=_watchAppInstallStates;
@property(retain, nonatomic) NSMutableSet *searchCategoriesWithoutIcons; // @synthesize searchCategoriesWithoutIcons=_searchCategoriesWithoutIcons;
@property(retain, nonatomic) CSSearchQuery *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(retain, nonatomic) PSSpotlightSearchResultsController *spotlightResultsController; // @synthesize spotlightResultsController=_spotlightResultsController;
@property(retain, nonatomic) PSKeyboardNavigationSearchController *spotlightSearchController; // @synthesize spotlightSearchController=_spotlightSearchController;
@property(retain, nonatomic) COSSkippedMiniFlowController *skippedMiniFlowController; // @synthesize skippedMiniFlowController=_skippedMiniFlowController;
@property(retain, nonatomic) FLPreferencesController *fuPrefsController; // @synthesize fuPrefsController=_fuPrefsController;
@property(retain, nonatomic) BPSNTKCustomization *customizationController; // @synthesize customizationController=_customizationController;
@property(nonatomic) _Bool navigateWhenReceivingCellularPlanResult; // @synthesize navigateWhenReceivingCellularPlanResult=_navigateWhenReceivingCellularPlanResult;
@property(retain, nonatomic) PSSpecifier *loadingSpecifier; // @synthesize loadingSpecifier=_loadingSpecifier;
@property(retain, nonatomic) PSSpecifier *pairNewDeviceSpecifier; // @synthesize pairNewDeviceSpecifier=_pairNewDeviceSpecifier;
@property(nonatomic) _Bool receivedDiscoveryResult; // @synthesize receivedDiscoveryResult=_receivedDiscoveryResult;
@property(nonatomic) _Bool hasRowsPendingInstallation; // @synthesize hasRowsPendingInstallation=_hasRowsPendingInstallation;
@property(nonatomic) _Bool shouldRefreshRowsOnForegroundEvent; // @synthesize shouldRefreshRowsOnForegroundEvent=_shouldRefreshRowsOnForegroundEvent;
@property(retain, nonatomic) NSMutableArray *stashedWatchKitAppsState; // @synthesize stashedWatchKitAppsState=_stashedWatchKitAppsState;
@property(nonatomic) _Bool showAppSections; // @synthesize showAppSections=_showAppSections;
@property(retain, nonatomic) NSMutableArray *stashedWatchKitApps; // @synthesize stashedWatchKitApps=_stashedWatchKitApps;
@property(retain, nonatomic) NSMutableDictionary *sockPuppetAppMapping; // @synthesize sockPuppetAppMapping=_sockPuppetAppMapping;
@property(retain, nonatomic) UIViewController *nothingSelectedController; // @synthesize nothingSelectedController=_nothingSelectedController;
@property(retain, nonatomic) NSDictionary *inheritedWhiteList; // @synthesize inheritedWhiteList=_inheritedWhiteList;
@property(retain, nonatomic) BPSNTKFacesViewController *facesController; // @synthesize facesController=_facesController;
- (void)updateInstallProgressForApplication:(id)arg1 progress:(double)arg2 installPhase:(long long)arg3;	// IMP=0x0010000000076959
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x001000000007650c
- (_Bool)searchBarShouldEndEditing:(id)arg1;	// IMP=0x0010000000076447
- (void)searchBarTextDidEndEditing:(id)arg1;	// IMP=0x0010000000076410
- (id)searchResultsController:(id)arg1 iconForCategory:(id)arg2;	// IMP=0x0010000000075d46
- (long long)searchResultsController:(id)arg1 sortCategory1:(id)arg2 sortCategory2:(id)arg3;	// IMP=0x0010000000075c71
- (void)searchResultsController:(id)arg1 didSelectURL:(id)arg2;	// IMP=0x0010000000075aa5
- (void)reindexIfNeeded;	// IMP=0x0010000000075a30
- (void)insertContiguousSpecifiersForIndexing:(id)arg1;	// IMP=0x0010000000075723
- (void)removeContiguousSpecifiersFromIndexing:(id)arg1;	// IMP=0x0010000000075491
- (void)indexSpecifiersIfNeeded;	// IMP=0x0010000000075227
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0010000000075215
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00100000000751d1
- (void)_refreshAppInstallationStatus;	// IMP=0x0010000000074fc2
- (void)compatibilityStateChanged:(id)arg1;	// IMP=0x0010000000074f1d
- (void)deviceBecamePaired:(id)arg1;	// IMP=0x0010000000074e78
- (void)deviceBecameActive:(id)arg1;	// IMP=0x0010000000074d7a
- (void)deviceBecameInActive:(id)arg1;	// IMP=0x0010000000074c17
- (void)reloadApplicationForGreenfieldInstall:(id)arg1;	// IMP=0x00100000000749e0
- (void)facesViewControllerDidUpdateContent:(id)arg1;	// IMP=0x001000000007497b
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00100000000747ff
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x00100000000747ed
- (void)addUnavailableAppsSectionIfNeeded;	// IMP=0x00100000000745e8
- (_Bool)watchKitOneAppsEOL;	// IMP=0x0010000000074514
- (id)localizedPrefsStringForString:(id)arg1;	// IMP=0x0010000000074507
- (id)additionalSpecifiers;	// IMP=0x00100000000742e4
- (id)sockPuppetAppValue:(id)arg1;	// IMP=0x00100000000742c5
- (id)sockPuppetApps;	// IMP=0x0010000000074223
- (id)_pptApps;	// IMP=0x001000000007421b
- (void)appsInstalledOrRemoved:(id)arg1;	// IMP=0x0010000000074209
- (void)appInstallErrorReceived:(id)arg1;	// IMP=0x0010000000073df8
- (id)freezeDryAppStates:(id)arg1;	// IMP=0x0010000000073aba
- (void)groupLocallyAvailableAppsWithWatchOnlyApps:(id)arg1 withStates:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000073671
- (void)gatherAllWatchAppsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000732ed
- (void)_insertSpecifierIntoTableAndStash:(id)arg1 atIndex:(unsigned long long)arg2 stashIndex:(unsigned long long)arg3 animated:(_Bool)arg4;	// IMP=0x001000000007326e
- (void)_removeSpecifierFromTableAndStash:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000731de
- (void)_removeSpecifier:(id)arg1 andInsertSpecifier:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00100000000730fc
- (void)insertAndDeleteSpecifiersForChanges:(id)arg1;	// IMP=0x001000000007243c
- (void)_kickOffWatchKitAppReload;	// IMP=0x00100000000717f5
- (id)filterForWatchInstalledApps:(id)arg1;	// IMP=0x0010000000071656
- (id)filterSockPuppetApps:(id)arg1;	// IMP=0x0010000000071234
- (void)refreshAppleAppGroupFooterState:(_Bool)arg1;	// IMP=0x0010000000070ae6
- (long long)_groupIndexForGroup:(id)arg1;	// IMP=0x0010000000070ab0
- (id)specifiersForWKApps:(id)arg1;	// IMP=0x0010000000070269
- (void)decorateSpecifierWithWKDetails:(id)arg1 byIdentifier:(id)arg2 andApplication:(id)arg3;	// IMP=0x001000000006fc38
- (id)wkAppSpinnerGroup;	// IMP=0x001000000006faf4
- (id)specialCaseVictoryRow;	// IMP=0x001000000006fa9a
- (id)hardcodedSpecifiers;	// IMP=0x001000000006fa8d
- (_Bool)reloadsWhenBecomingActive;	// IMP=0x001000000006fa85
- (void)stopSpinner;	// IMP=0x001000000006f9f5
- (void)startSpinnerInCellForSpecifier:(id)arg1;	// IMP=0x001000000006f916
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x001000000006f6f6
- (void)_pushCustomControllerForPath:(id)arg1 andTitle:(id)arg2;	// IMP=0x001000000006f686
- (id)customControllerForBundlePath:(id)arg1;	// IMP=0x001000000006f4c4
- (id)customControllerForRootSpecifierID:(id)arg1;	// IMP=0x001000000006f39a
- (void)pushCustomControllerForRootSpecifierID:(id)arg1;	// IMP=0x001000000006f283
- (_Bool)wantsCustomControllerForRootSpecifierID:(id)arg1;	// IMP=0x001000000006f100
- (long long)indexOfGeneralController;	// IMP=0x001000000006f0e7
- (id)generalViewController;	// IMP=0x001000000006f081
- (void)refreshSoftwareUpdateBadge:(id)arg1;	// IMP=0x000000000006f06f
- (void)reloadAppleWatchDetails:(id)arg1;	// IMP=0x001000000006f05d
- (void)discoveredAdvertisingWatch:(id)arg1;	// IMP=0x001000000006ef6f
- (void)skippedMiniFlowDidFinish:(id)arg1;	// IMP=0x001000000006eede
- (void)presentSkippedPanes:(id)arg1;	// IMP=0x001000000006e7d7
- (_Bool)showPairingButton;	// IMP=0x001000000006e259
- (void)_prepareDiscoveryIfNeeded;	// IMP=0x001000000006e1b5
- (void)loadSpolightSearchControllers;	// IMP=0x001000000006debe
- (void)updateNavTitle;	// IMP=0x001000000006dcf3
- (long long)preferredStatusBarStyle;	// IMP=0x001000000006dce8
- (void)didEnterBackground:(id)arg1;	// IMP=0x001000000006dc4c
- (void)willEnterForeground:(id)arg1;	// IMP=0x001000000006daa9
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000006da13
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000006d95e
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000006d8aa
- (void)viewDidLayoutSubviews;	// IMP=0x001000000006d865
- (void)loadView;	// IMP=0x001000000006d809
- (void)_hackToRemoveExtraSearchView;	// IMP=0x001000000006d67b
- (void)presentPairingFlowIfPossible;	// IMP=0x001000000006d637
- (id)fakeDevice;	// IMP=0x001000000006d440
- (void)jumpToAppStoreWatchSection:(id)arg1;	// IMP=0x001000000006d33e
- (void)notifyNTKAboutActiveWatch;	// IMP=0x001000000006d189
- (id)activeWatchOrFakeWatch;	// IMP=0x001000000006d126
- (void)_stopSpinnerInSpecifier:(id)arg1;	// IMP=0x001000000006cffa
- (void)_startSpinnerInSpecifier:(id)arg1;	// IMP=0x001000000006cf4e
- (void)proceedWithStoreRepairForAccount:(id)arg1 withWatchAKDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006cc69
- (void)_storeReauthStepForTinkerFamilyMember:(id)arg1 withWatchAKDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006c47f
- (void)_appStoreSpecifierTapped:(id)arg1;	// IMP=0x001000000006bcc6
- (void)systemAppSpecifierProcessing:(id)arg1;	// IMP=0x001000000006b1fa
- (id)specifiers;	// IMP=0x001000000006a179
- (id)settingsFileName;	// IMP=0x001000000006a116
- (id)title;	// IMP=0x001000000006a0aa
- (void)_showDevicePicker:(id)arg1;	// IMP=0x0010000000069fe9
- (void)viewDidLoad;	// IMP=0x0010000000069ded
- (void)dealloc;	// IMP=0x0010000000069d2e
- (id)init;	// IMP=0x00100000000697bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
