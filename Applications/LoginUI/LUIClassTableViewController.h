//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LKUsers, LUIPaneHeaderView, LUIPrivacyView, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIImage, UITableView, UIView;
@protocol LKClassProviding, LUIProgressAnimationProtocol;

@interface LUIClassTableViewController
{
    _Bool _firstUpdate;	// 8 = 0x8
    _Bool _haveRecentUsersSection;	// 9 = 0x9
    id <LKClassProviding> _classProvider;	// 16 = 0x10
    UITableView *_tableView;	// 24 = 0x18
    NSDictionary *_sectionDictionary;	// 32 = 0x20
    NSArray *_sectionTitles;	// 40 = 0x28
    NSMutableArray *_localUsersByName;	// 48 = 0x30
    LKUsers *_recentUsers;	// 56 = 0x38
    LUIPaneHeaderView *_headerView;	// 64 = 0x40
    LUIPrivacyView *_privacyView;	// 72 = 0x48
    UIImage *_initialMonogramImage;	// 80 = 0x50
    NSMutableDictionary *_collectionControllerDictionary;	// 88 = 0x58
    NSArray *_sectionTitlesSortDescriptors;	// 96 = 0x60
    UIView<LUIProgressAnimationProtocol> *_progressView;	// 104 = 0x68
    double _headerHeight;	// 112 = 0x70
    double _sectionHeaderLeftSidePadding;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x002000000004a4bf
@property(nonatomic) double sectionHeaderLeftSidePadding; // @synthesize sectionHeaderLeftSidePadding=_sectionHeaderLeftSidePadding;
// Error: Property attributes should begin with the type ('T') attribute, property name: headerHeight
// Property attributes: (null)

@property(nonatomic) _Bool haveRecentUsersSection; // @synthesize haveRecentUsersSection=_haveRecentUsersSection;
@property(nonatomic) _Bool firstUpdate; // @synthesize firstUpdate=_firstUpdate;
@property(retain, nonatomic) UIView<LUIProgressAnimationProtocol> *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSArray *sectionTitlesSortDescriptors; // @synthesize sectionTitlesSortDescriptors=_sectionTitlesSortDescriptors;
@property(retain, nonatomic) NSMutableDictionary *collectionControllerDictionary; // @synthesize collectionControllerDictionary=_collectionControllerDictionary;
@property(retain, nonatomic) UIImage *initialMonogramImage; // @synthesize initialMonogramImage=_initialMonogramImage;
@property(retain, nonatomic) LUIPrivacyView *privacyView; // @synthesize privacyView=_privacyView;
@property(retain, nonatomic) LUIPaneHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) LKUsers *recentUsers; // @synthesize recentUsers=_recentUsers;
@property(retain, nonatomic) NSMutableArray *localUsersByName; // @synthesize localUsersByName=_localUsersByName;
@property(retain, nonatomic) NSArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
@property(retain, nonatomic) NSDictionary *sectionDictionary; // @synthesize sectionDictionary=_sectionDictionary;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) id <LKClassProviding> classProvider; // @synthesize classProvider=_classProvider;
- (void)presentPasscodeViewControllerForUser:(id)arg1 passcodeViewDidAppearAction:(CDUnknownBlockType)arg2 passcodeCanceledAction:(CDUnknownBlockType)arg3 passcodeEnteredAction:(CDUnknownBlockType)arg4;	// IMP=0x001000000004a244
- (void)update;	// IMP=0x001000000004a232
- (void)handleLongPress:(id)arg1;	// IMP=0x001000000004a03b
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0010000000049713
- (void)footerButtonPressed:(id)arg1;	// IMP=0x00100000000496c9
- (_Bool)haveCellsInSection:(long long)arg1;	// IMP=0x00100000000495c2
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00100000000494eb
- (id)titleForSection:(long long)arg1;	// IMP=0x0010000000049333
- (double)heightForHeaderInTableView:(id)arg1;	// IMP=0x001000000004917d
- (id)viewForHeaderInTableView:(id)arg1;	// IMP=0x001000000004916b
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00100000000490ec
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000048fd3
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x0010000000048fac
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0010000000048f6f
- (double)heightForFooterInTableView:(id)arg1;	// IMP=0x0010000000048f61
- (id)viewForFooterInTableView:(id)arg1;	// IMP=0x0010000000048f48
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x0010000000048ee1
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0010000000048982
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;	// IMP=0x001000000004897a
- (void)_tableView:(id)arg1 didSelectClassRowAtIndexPath:(id)arg2;	// IMP=0x0010000000048779
- (void)_tableView:(id)arg1 didSelectUserRowAtIndexPath:(id)arg2;	// IMP=0x00100000000486b9
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000048574
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;	// IMP=0x0010000000048529
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00100000000484de
- (id)_tableView:(id)arg1 classCellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000000482b1
- (id)_tableView:(id)arg1 recentUserCellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000048097
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000047fd6
- (id)_allStudentsClass;	// IMP=0x0010000000047ee5
- (id)_fixedClassGroupDictionary;	// IMP=0x0010000000047d21
- (void)setClassProviderWithGroupDictionary:(id)arg1;	// IMP=0x0010000000047939
- (long long)recentUsersCount;	// IMP=0x0010000000047892
- (unsigned long long)_recentUsersSection;	// IMP=0x001000000004788a
- (void)reloadRecentUsersIfNeeded;	// IMP=0x0010000000047323
- (unsigned long long)haveRecentUsers;	// IMP=0x00100000000472d7
- (void)bottomLeftVibrantButtonTapped:(id)arg1;	// IMP=0x00100000000470b4
- (id)titleForBottomRightVibrantButton;	// IMP=0x001000000004704c
- (id)titleForBottomLeftVibrantButton;	// IMP=0x0010000000046fe4
- (long long)imageTypeForBottomRightVibrantButton;	// IMP=0x0010000000046fd9
- (long long)imageTypeForBottomLeftVibrantButton;	// IMP=0x0010000000046fd1
- (_Bool)shouldShowBottomRightVibrantButton;	// IMP=0x0010000000046f86
- (_Bool)shouldShowBottomLeftVibrantButton;	// IMP=0x0010000000046f7e
- (id)tableViewConstraints;	// IMP=0x0010000000046c02
- (void)activateLayoutConstraints;	// IMP=0x0010000000046b17
- (id)sortDescriptors;	// IMP=0x0010000000046516
- (void)setSortDescriptors:(id)arg1;	// IMP=0x00100000000462e7
- (void)setClassProvider:(id)arg1 forController:(id)arg2;	// IMP=0x0010000000046275
- (void)_addLongPressGestureRecognizer;	// IMP=0x00100000000461d3
- (void)_setTitle;	// IMP=0x00100000000460c2
- (void)_checkOpacities;	// IMP=0x0010000000045d5c
- (void)_checkNeedForScrolling;	// IMP=0x0010000000045c65
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000045be6
- (long long)preferredStatusBarStyle;	// IMP=0x0010000000045b9b
- (void)viewDidLayoutSubviews;	// IMP=0x0010000000045b16
- (void)viewDidLoad;	// IMP=0x00100000000457b3
- (void)dealloc;	// IMP=0x001000000004559c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

