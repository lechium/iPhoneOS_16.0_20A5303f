//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCCloudContext, FCFeedManager, FCNotificationsConfiguration, FCPrivateChannelMembershipController, FCReadingHistory, FCReadingList, FCShortcutList, FCSubscriptionController, FCSubscriptionList, FRAnalyticsController, FRAppActivityMonitor, FRArticleContentPool, FRArticlePrefetchManager, FRExternalAnalyticsController, FRGizmoSyncManager, FRNonArticleHeadlineVendor, FRNotificationManager, FRPersonalizationDataSource, FRPresubscribeService, FRSpotlightManager, FRStateRestoreController, NSString;
@protocol AAViewingSessionManagerType, FCBundleSubscriptionManagerType, FRAppSessionDataReporting, TSSharedImageCacheType;

@interface FRFeldsparContext : NSObject
{
    FCReadingHistory *_readingHistory;	// 8 = 0x8
    FCReadingList *_readingList;	// 16 = 0x10
    FCShortcutList *_shortcutList;	// 24 = 0x18
    FCCloudContext *_cloudContext;	// 32 = 0x20
    FCFeedManager *_feedManager;	// 40 = 0x28
    FCSubscriptionList *_subscriptionList;	// 48 = 0x30
    FRNotificationManager *_notificationManager;	// 56 = 0x38
    id <FRAppSessionDataReporting> _appSessionDataReporter;	// 64 = 0x40
    FRAppActivityMonitor *_appActivityMonitor;	// 72 = 0x48
    FRAnalyticsController *_analyticsController;	// 80 = 0x50
    FRExternalAnalyticsController *_externalAnalyticsController;	// 88 = 0x58
    FRNonArticleHeadlineVendor *_nonArticleVendor;	// 96 = 0x60
    FRPersonalizationDataSource *_personalizationDataSource;	// 104 = 0x68
    FRArticleContentPool *_articleContentPool;	// 112 = 0x70
    FRArticlePrefetchManager *_articlePrefetchManager;	// 120 = 0x78
    FRSpotlightManager *_spotlightManager;	// 128 = 0x80
    FRStateRestoreController *_stateRestoreController;	// 136 = 0x88
    id <TSSharedImageCacheType> _underlyingImageCache;	// 144 = 0x90
    FRGizmoSyncManager *_gizmoSyncManager;	// 152 = 0x98
    id <AAViewingSessionManagerType> _issueViewingSessionManager;	// 160 = 0xa0
    FRPresubscribeService *_presubscribeService;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x002000000008e248
@property(retain, nonatomic) FRPresubscribeService *presubscribeService; // @synthesize presubscribeService=_presubscribeService;
@property(retain, nonatomic) id <AAViewingSessionManagerType> issueViewingSessionManager; // @synthesize issueViewingSessionManager=_issueViewingSessionManager;
@property(retain, nonatomic) FRGizmoSyncManager *gizmoSyncManager; // @synthesize gizmoSyncManager=_gizmoSyncManager;
@property(retain, nonatomic) id <TSSharedImageCacheType> underlyingImageCache; // @synthesize underlyingImageCache=_underlyingImageCache;
@property(retain, nonatomic) FRStateRestoreController *stateRestoreController; // @synthesize stateRestoreController=_stateRestoreController;
@property(retain, nonatomic) FRSpotlightManager *spotlightManager; // @synthesize spotlightManager=_spotlightManager;
@property(retain, nonatomic) FRArticlePrefetchManager *articlePrefetchManager; // @synthesize articlePrefetchManager=_articlePrefetchManager;
@property(retain, nonatomic) FRArticleContentPool *articleContentPool; // @synthesize articleContentPool=_articleContentPool;
@property(retain, nonatomic) FRPersonalizationDataSource *personalizationDataSource; // @synthesize personalizationDataSource=_personalizationDataSource;
@property(retain, nonatomic) FRNonArticleHeadlineVendor *nonArticleVendor; // @synthesize nonArticleVendor=_nonArticleVendor;
@property(retain, nonatomic) FRExternalAnalyticsController *externalAnalyticsController; // @synthesize externalAnalyticsController=_externalAnalyticsController;
@property(retain, nonatomic) FRAnalyticsController *analyticsController; // @synthesize analyticsController=_analyticsController;
@property(retain, nonatomic) FRAppActivityMonitor *appActivityMonitor; // @synthesize appActivityMonitor=_appActivityMonitor;
@property(retain, nonatomic) id <FRAppSessionDataReporting> appSessionDataReporter; // @synthesize appSessionDataReporter=_appSessionDataReporter;
// Error: Property attributes should begin with the type ('T') attribute, property name: notificationManager
// Property attributes: (null)

@property(retain, nonatomic) FCFeedManager *feedManager; // @synthesize feedManager=_feedManager;
@property(retain, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
@property(retain, nonatomic) FCShortcutList *shortcutList; // @synthesize shortcutList=_shortcutList;
@property(retain, nonatomic) FCReadingList *readingList; // @synthesize readingList=_readingList;
@property(retain, nonatomic) FCReadingHistory *readingHistory; // @synthesize readingHistory=_readingHistory;
@property(readonly, nonatomic) id <FCBundleSubscriptionManagerType> bundleSubscriptionManager;
@property(readonly, nonatomic) FCNotificationsConfiguration *notificationsConfiguration;
@property(readonly, nonatomic) _Bool inOfflineMode;
@property(readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController;
@property(readonly, nonatomic) FCSubscriptionList *subscriptionList; // @synthesize subscriptionList=_subscriptionList;
@property(readonly, nonatomic) FCSubscriptionController *subscriptionController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

