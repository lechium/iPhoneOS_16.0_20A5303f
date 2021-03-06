//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSDictionary, NSMutableArray, VUIAccessView_iOS, VUIAppSpinnerView;

__attribute__((visibility("hidden")))
@interface _VUIAccessViewController : UIViewController
{
    VUIAccessView_iOS *_accessView;	// 8 = 0x8
    VUIAppSpinnerView *_loadingView;	// 16 = 0x10
    NSArray *_channels;	// 24 = 0x18
    NSMutableArray *_bundleIDs;	// 32 = 0x20
    NSDictionary *_options;	// 40 = 0x28
    _Bool _hasCalledCompletion;	// 48 = 0x30
    NSArray *_appInfos;	// 56 = 0x38
    NSArray *_appChannels;	// 64 = 0x40
    NSMutableArray *_channelIds;	// 72 = 0x48
    _Bool _shouldDenyOnCancel;	// 80 = 0x50
    CDUnknownBlockType _completionHandler;	// 88 = 0x58
}

+ (_Bool)_isHostedInRemoteViewService;	// IMP=0x00600000002effda
- (void).cxx_destruct;	// IMP=0x00000000002f03fa
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (id)preferredFocusEnvironments;	// IMP=0x00000000002f02cc
- (id)cappedTraitCollection;	// IMP=0x00000000002f00a1
- (id)_watchListAppIcon;	// IMP=0x00000000002f0054
- (void)_fetchRemoteAppInfo;	// IMP=0x00000000002ef6e5
- (id)_imageForBundleID:(id)arg1;	// IMP=0x00000000002ef63f
- (void)_presentGenericErrorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002ef4af
- (void)_toggleLoadingScreen;	// IMP=0x00000000002ef3de
- (void)_setupAccessViews;	// IMP=0x00000000002ee7e0
- (void)_setupNavigationBar;	// IMP=0x00000000002ee6e9
- (void)_completeWithStatus:(unsigned long long)arg1;	// IMP=0x00000000002ee59f
- (void)_handleNackButton:(id)arg1;	// IMP=0x00000000002ee493
- (void)_handleMenuGesture:(id)arg1;	// IMP=0x00000000002ee2f4
- (void)_handleSeeAllButton:(id)arg1;	// IMP=0x00000000002ee13b
- (void)_disallow:(id)arg1;	// IMP=0x00000000002edbd9
- (void)_allow:(id)arg1;	// IMP=0x00000000002ed695
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000002ed4a9
- (void)viewDidLoad;	// IMP=0x00000000002ed12a
- (void)_init;	// IMP=0x00000000002ec962
- (id)init;	// IMP=0x00000000002ec923
- (id)initWithBundleIDs:(id)arg1 channels:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002ec797

@end

