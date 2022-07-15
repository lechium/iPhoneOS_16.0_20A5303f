//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSSet, NSString;

@interface FREvent : NSObject
{
    _Bool _isAnalyticsEvent;	// 8 = 0x8
    _Bool _isWatchAnalyticsEvent;	// 9 = 0x9
    _Bool _isAppAnalyticsEvent;	// 10 = 0xa
    NSSet *_desiredCommonAnalyticsProperties;	// 16 = 0x10
    NSDictionary *_analyticsProperties;	// 24 = 0x18
    NSDictionary *_properties;	// 32 = 0x20
}

+ (id)fillNativeCampaignDataFromIdentifier:(id)arg1 forProperties:(id)arg2;	// IMP=0x00200000000182c3
+ (void)fillExperimentalTitleMetadataProperties:(id)arg1 experimentalTitleMetadata:(id)arg2;	// IMP=0x00100000000181b2
+ (void)fillReferralProperties:(id)arg1 referral:(id)arg2;	// IMP=0x0010000000017f91
+ (_Bool)validateProperties:(id)arg1;	// IMP=0x0010000000017f51
+ (id)fillInAutomaticProperties:(id)arg1;	// IMP=0x0010000000017e6f
+ (id)articleFeedbackEventWithArticleID:(id)arg1 sourceChannelID:(id)arg2 topicID:(id)arg3 language:(id)arg4 feedbackValue:(long long)arg5;	// IMP=0x0010000000029a16
+ (id)articleSessionResumeEventWithArticleID:(id)arg1 articleType:(long long)arg2 sourceChannelID:(id)arg3 publisherArticleVersion:(long long)arg4 articleViewingSessionId:(id)arg5;	// IMP=0x0010000000029873
+ (id)articleSessionResignEventWithArticleID:(id)arg1 articleType:(long long)arg2 sourceChannelID:(id)arg3 publisherArticleVersion:(long long)arg4 articleViewingSessionId:(id)arg5;	// IMP=0x00100000000296d0
+ (id)appSessionResumeEvent;	// IMP=0x0010000000029651
+ (id)tocExposureEventWithAreaPresentationReason:(long long)arg1 exposureID:(id)arg2;	// IMP=0x0010000000029549
+ (id)tocCellExposureEventWithTOCExposureType:(long long)arg1 exposureID:(id)arg2 isBadged:(_Bool)arg3 displayRank:(long long)arg4 rankInSection:(long long)arg5 tocSection:(long long)arg6 startDate:(id)arg7 endDate:(id)arg8 feedType:(long long)arg9 feedID:(id)arg10 section:(long long)arg11 hostViewExposureID:(id)arg12 headline:(id)arg13;	// IMP=0x0010000000028fe4
+ (id)tocReorderEventWithTOCExposureID:(id)arg1 oldIndex:(long long)arg2 newIndex:(long long)arg3 feedID:(id)arg4 feedType:(long long)arg5;	// IMP=0x0010000000028e1d
+ (id)appAnalyticsEventWithPBEvent:(id)arg1;	// IMP=0x0010000000028dff
+ (id)analyticsEventWithPBEvent:(id)arg1;	// IMP=0x0010000000028ca8
+ (id)linkTapEventWithTapLocationType:(long long)arg1 articleID:(id)arg2 tappedLinkURL:(id)arg3 webEmbedID:(id)arg4 webEmbedLocation:(long long)arg5;	// IMP=0x0010000000028af1
+ (id)inAppWebEmbedExposureWithModuleEventType:(long long)arg1 moduleLocation:(long long)arg2 moduleExposureID:(id)arg3 feedViewExposureID:(id)arg4 webEmbedLocation:(long long)arg5 articleID:(id)arg6 webEmbedID:(id)arg7;	// IMP=0x0010000000028aae
+ (id)inAppWebEmbedExposureWithModuleEventType:(long long)arg1 moduleLocation:(long long)arg2 moduleItemCount:(long long)arg3 moduleExposureID:(id)arg4 feedViewExposureID:(id)arg5 webEmbedLocation:(long long)arg6 articleID:(id)arg7 moduleItemPosition:(long long)arg8 webEmbedID:(id)arg9;	// IMP=0x001000000002896c
+ (id)_inAppWebEmbedExposureWithModuleEventType:(long long)arg1 moduleLocation:(long long)arg2 moduleItemCount:(id)arg3 moduleExposureID:(id)arg4 feedViewExposureID:(id)arg5 webEmbedLocation:(long long)arg6 articleID:(id)arg7 moduleItemPosition:(id)arg8 webEmbedID:(id)arg9;	// IMP=0x00100000000286db
+ (id)feedPrewarmEventWithStartDate:(id)arg1 endDate:(id)arg2 feedType:(long long)arg3 loadType:(long long)arg4 prefetchRole:(long long)arg5;	// IMP=0x00100000000284d3
+ (id)appForegroundEventWithTimeAway:(double)arg1 timeSinceBackgroundFetch:(double)arg2 didLaunch:(_Bool)arg3;	// IMP=0x0010000000028377
+ (id)backgroundFetchEventWithStartDate:(id)arg1 endDate:(id)arg2 reason:(long long)arg3 fetchResult:(unsigned long long)arg4 timedOut:(_Bool)arg5;	// IMP=0x001000000002817b
+ (id)optInButtonExposureWithLocationId:(id)arg1 buttonLocation:(long long)arg2 buttonType:(long long)arg3;	// IMP=0x001000000002802d
+ (id)suggestionsFeedBackEventWithSuggestionsFeedback:(id)arg1 sourceProvider:(CDUnknownBlockType)arg2 gradeProvider:(CDUnknownBlockType)arg3 feedbackText:(id)arg4;	// IMP=0x0010000000027a96
+ (id)bundleIDMappingMissEventWithBundleID:(id)arg1;	// IMP=0x00100000000279d4
+ (id)urlMappingMissEventWithURL:(id)arg1 domain:(id)arg2 paths:(id)arg3;	// IMP=0x00100000000278ac
+ (id)discoverMoreInterstitialExposureWithUserAction:(long long)arg1 nextArticleAffordanceType:(long long)arg2 tappedNextArticleAffordanceFeedID:(id)arg3 withNextArticleAffordance:(_Bool)arg4;	// IMP=0x0010000000027722
+ (id)feedGroupViewExposureWithStartDate:(id)arg1 endDate:(id)arg2 groupFeedID:(id)arg3 groupViewExposureID:(id)arg4 groupedArticles:(id)arg5 displayRank:(long long)arg6 articleCount:(long long)arg7 groupType:(long long)arg8 feedType:(long long)arg9 isSubscribed:(_Bool)arg10 feedViewExposureID:(id)arg11 formationReason:(unsigned long long)arg12 autoSubscribeType:(unsigned long long)arg13 reachedEndOfGroup:(_Bool)arg14 groupLocation:(int)arg15 groupLocationFeedType:(long long)arg16 groupExposedInLocationID:(id)arg17 groupExposedInSourceChannelID:(id)arg18 articleViewingSessionID:(id)arg19 screenfulsFromTop:(long long)arg20;	// IMP=0x0010000000027120
+ (long long)groupViewExposureTypeForGroupType:(long long)arg1 andFeedType:(long long)arg2;	// IMP=0x0010000000026fcc
+ (long long)frPurchaseTypeWithNPPurchaseType:(long long)arg1;	// IMP=0x0010000000026fad
+ (id)subscriptionDetectionScreenViewEventWithCountOfSubscriptionsDetected:(unsigned long long)arg1;	// IMP=0x0010000000026ed8
+ (id)backgroundSubscriptionValidationEventWithSourceChannelID:(id)arg1 resultType:(long long)arg2 errorMessage:(id)arg3 errorCode:(id)arg4;	// IMP=0x0010000000026d66
+ (id)feedEngagementMenuExposureEventWithArticleID:(id)arg1 referencedArticleID:(id)arg2 feedType:(long long)arg3 swipeActionMenuType:(long long)arg4 feedID:(id)arg5;	// IMP=0x0010000000026bb8
+ (id)readingListAddRemoveWithArticleID:(id)arg1 referencedArticleID:(id)arg2 isUserSubscribedToFeed:(_Bool)arg3 articleType:(long long)arg4 feedType:(long long)arg5 surfacedByChannelID:(id)arg6 surfacedBySectionID:(id)arg7 surfacedByTopicID:(id)arg8 sectionHeadlineID:(id)arg9 readingListAddRemoveUserAction:(long long)arg10 readingListAddRemoveLocation:(long long)arg11 personalizationFeaturesBundle:(id)arg12 notificationID:(id)arg13 referral:(id)arg14 isFreeArticle:(_Bool)arg15 isNativeAd:(_Bool)arg16 nativeAdCampaignData:(id)arg17 isPaidSubscriberToSourceChannel:(_Bool)arg18 openedFromNextArticleAffordance:(_Bool)arg19 nextArticleAffordanceType:(long long)arg20 nextArticleAffordanceTypeFeedID:(id)arg21 isCoverArticle:(_Bool)arg22 topStoryType:(long long)arg23 publisherArticleVersion:(long long)arg24 backendArticleVersion:(long long)arg25 previousArticleID:(id)arg26 previousArticleVersion:(long long)arg27 groupType:(long long)arg28;	// IMP=0x0010000000026324
+ (id)videoQuartileEventWithQuartile:(long long)arg1 personalizationFeatureBundle:(id)arg2;	// IMP=0x001000000002621c
+ (id)mediaExposureEventWithArticleID:(id)arg1 referencedArticleID:(id)arg2 articleSessionID:(id)arg3 articleViewSessionID:(id)arg4 parentFeedType:(long long)arg5 parentFeedID:(id)arg6 feedPickerViewSection:(long long)arg7 isUserSubscribedToParentFeed:(_Bool)arg8 articleType:(long long)arg9 surfacedByChannelID:(id)arg10 surfacedBySectionID:(id)arg11 surfacedByTopicID:(id)arg12 sourceChannelID:(id)arg13 mediaType:(long long)arg14 mediaID:(id)arg15 galleryType:(long long)arg16 startDate:(id)arg17 endDate:(id)arg18 adSupported:(_Bool)arg19 isNativeAd:(_Bool)arg20 nativeAdCampaignData:(id)arg21 isVideoInFeed:(_Bool)arg22 mediaLocation:(long long)arg23 numberOfImagesExposed:(long long)arg24 numberOfImagesInGallery:(long long)arg25 publisherArticleVersion:(long long)arg26 backendArticleVersion:(long long)arg27 previousArticleID:(id)arg28 previousArticleVersion:(long long)arg29 metaData:(id)arg30 videoType:(long long)arg31 issueData:(id)arg32 issueViewData:(id)arg33;	// IMP=0x00100000000257f0
+ (id)mediaViewEventWithArticleID:(id)arg1 referencedArticleID:(id)arg2 articleSessionID:(id)arg3 articleViewSessionID:(id)arg4 parentFeedType:(long long)arg5 parentFeedID:(id)arg6 feedPickerViewSection:(long long)arg7 isUserSubscribedToParentFeed:(_Bool)arg8 articleType:(long long)arg9 surfacedByChannelID:(id)arg10 surfacedBySectionID:(id)arg11 surfacedByTopicID:(id)arg12 sourceChannelID:(id)arg13 mediaType:(long long)arg14 mediaID:(id)arg15 galleryType:(long long)arg16 galleryImageIDs:(id)arg17 galleryImageCount:(unsigned long long)arg18 startDate:(id)arg19 endDate:(id)arg20 adSupported:(_Bool)arg21 isNativeAd:(_Bool)arg22 nativeAdCampaignData:(id)arg23 publisherArticleVersion:(long long)arg24 backendArticleVersion:(long long)arg25 previousArticleID:(id)arg26 previousArticleVersion:(long long)arg27 metaData:(id)arg28 issueData:(id)arg29 issueViewData:(id)arg30;	// IMP=0x0010000000024ec8
+ (id)mediaEngageEventCompleteWithArticleID:(id)arg1 referencedArticleID:(id)arg2 articleSessionID:(id)arg3 articleViewSessionID:(id)arg4 parentFeedType:(long long)arg5 parentFeedID:(id)arg6 feedPickerViewSection:(long long)arg7 isUserSubscribedToParentFeed:(_Bool)arg8 articleType:(long long)arg9 surfacedByChannelID:(id)arg10 surfacedBySectionID:(id)arg11 surfacedByTopicID:(id)arg12 sourceChannelID:(id)arg13 mediaType:(long long)arg14 mediaID:(id)arg15 mediaDuration:(double)arg16 timePlayed:(double)arg17 videoFrameRate:(double)arg18 startDate:(id)arg19 endDate:(id)arg20 adSupported:(_Bool)arg21 isNativeAd:(_Bool)arg22 nativeAdCampaignData:(id)arg23 isVideoInFeed:(_Bool)arg24 mediaLocation:(long long)arg25 personalizationFeaturesBundle:(id)arg26 publisherArticleVersion:(long long)arg27 backendArticleVersion:(long long)arg28 previousArticleID:(id)arg29 previousArticleVersion:(long long)arg30 metaData:(id)arg31 videoType:(long long)arg32 groupType:(long long)arg33 groupExposureID:(id)arg34 experimentalTitleMetadata:(id)arg35 issueData:(id)arg36 issueViewData:(id)arg37;	// IMP=0x00100000000243bf
+ (id)mediaEngageResumeEventWithArticleID:(id)arg1 referencedArticleID:(id)arg2 articleSessionID:(id)arg3 articleViewSessionID:(id)arg4 parentFeedType:(long long)arg5 parentFeedID:(id)arg6 feedPickerViewSection:(long long)arg7 isUserSubscribedToParentFeed:(_Bool)arg8 articleType:(long long)arg9 surfacedByChannelID:(id)arg10 surfacedBySectionID:(id)arg11 surfacedByTopicID:(id)arg12 sourceChannelID:(id)arg13 mediaType:(long long)arg14 mediaID:(id)arg15 mediaDuration:(double)arg16 videoFrameRate:(double)arg17 resumeMethod:(long long)arg18 resumePosition:(unsigned long long)arg19 timePlayed:(double)arg20 startDate:(id)arg21 endDate:(id)arg22 adSupported:(_Bool)arg23 isNativeAd:(_Bool)arg24 nativeAdCampaignData:(id)arg25 isVideoInFeed:(_Bool)arg26 mediaLocation:(long long)arg27 publisherArticleVersion:(long long)arg28 backendArticleVersion:(long long)arg29 previousArticleID:(id)arg30 previousArticleVersion:(long long)arg31 metaData:(id)arg32 videoType:(long long)arg33 groupType:(long long)arg34 groupExposureID:(id)arg35 experimentalTitleMetadata:(id)arg36 issueData:(id)arg37 issueViewData:(id)arg38;	// IMP=0x0010000000023877
+ (id)mediaEngagePauseEventWithArticleID:(id)arg1 referencedArticleID:(id)arg2 articleSessionID:(id)arg3 articleViewSessionID:(id)arg4 parentFeedType:(long long)arg5 parentFeedID:(id)arg6 feedPickerViewSection:(long long)arg7 isUserSubscribedToParentFeed:(_Bool)arg8 articleType:(long long)arg9 surfacedByChannelID:(id)arg10 surfacedBySectionID:(id)arg11 surfacedByTopicID:(id)arg12 sourceChannelID:(id)arg13 mediaType:(long long)arg14 mediaID:(id)arg15 mediaDuration:(double)arg16 videoFrameRate:(double)arg17 pauseMethod:(long long)arg18 pausePosition:(unsigned long long)arg19 timePlayed:(double)arg20 startDate:(id)arg21 endDate:(id)arg22 adSupported:(_Bool)arg23 isNativeAd:(_Bool)arg24 nativeAdCampaignData:(id)arg25 isVideoInFeed:(_Bool)arg26 mediaLocation:(long long)arg27 publisherArticleVersion:(long long)arg28 backendArticleVersion:(long long)arg29 previousArticleID:(id)arg30 previousArticleVersion:(long long)arg31 metaData:(id)arg32 videoType:(long long)arg33 groupType:(long long)arg34 groupExposureID:(id)arg35 experimentalTitleMetadata:(id)arg36 issueData:(id)arg37 issueViewData:(id)arg38;	// IMP=0x0010000000022d2d
+ (id)mediaEngagePlayEventWithArticleID:(id)arg1 referencedArticleID:(id)arg2 articleSessionID:(id)arg3 articleViewSessionID:(id)arg4 parentFeedType:(long long)arg5 parentFeedID:(id)arg6 feedPickerViewSection:(long long)arg7 isUserSubscribedToParentFeed:(_Bool)arg8 articleType:(long long)arg9 surfacedByChannelID:(id)arg10 surfacedBySectionID:(id)arg11 surfacedByTopicID:(id)arg12 sourceChannelID:(id)arg13 mediaType:(long long)arg14 mediaID:(id)arg15 mediaDuration:(double)arg16 playMethod:(long long)arg17 videoFrameRate:(double)arg18 startDate:(id)arg19 endDate:(id)arg20 adSupported:(_Bool)arg21 isNativeAd:(_Bool)arg22 nativeAdCampaignData:(id)arg23 isVideoInFeed:(_Bool)arg24 mediaLocation:(long long)arg25 publisherArticleVersion:(long long)arg26 backendArticleVersion:(long long)arg27 previousArticleID:(id)arg28 previousArticleVersion:(long long)arg29 metaData:(id)arg30 videoType:(long long)arg31 groupType:(long long)arg32 groupExposureID:(id)arg33 experimentalTitleMetadata:(id)arg34 issueData:(id)arg35 issueViewData:(id)arg36;	// IMP=0x001000000002227b
+ (id)mediaEngageInitiatePlayEventWithArticleID:(id)arg1 referencedArticleID:(id)arg2 articleSessionID:(id)arg3 articleViewSessionID:(id)arg4 parentFeedType:(long long)arg5 parentFeedID:(id)arg6 feedPickerViewSection:(long long)arg7 isUserSubscribedToParentFeed:(_Bool)arg8 articleType:(long long)arg9 surfacedByChannelID:(id)arg10 surfacedBySectionID:(id)arg11 surfacedByTopicID:(id)arg12 sourceChannelID:(id)arg13 mediaType:(long long)arg14 mediaID:(id)arg15 startDate:(id)arg16 endDate:(id)arg17 adSupported:(_Bool)arg18 isNativeAd:(_Bool)arg19 nativeAdCampaignData:(id)arg20 isVideoInFeed:(_Bool)arg21 mediaLocation:(long long)arg22 personalizationFeaturesBundle:(id)arg23 publisherArticleVersion:(long long)arg24 backendArticleVersion:(long long)arg25 previousArticleID:(id)arg26 previousArticleVersion:(long long)arg27 metaData:(id)arg28 videoType:(long long)arg29 groupType:(long long)arg30 groupExposureID:(id)arg31 experimentalTitleMetadata:(id)arg32 issueData:(id)arg33 issueViewData:(id)arg34;	// IMP=0x001000000002180b
+ (id)onboardingChannelPickerCompleteEventWithSelectedChannelIDs:(id)arg1 selectedTopicIDs:(id)arg2 totalChannelSelections:(long long)arg3 totalTopicSelections:(long long)arg4 presentationReason:(long long)arg5;	// IMP=0x00100000000215e1
+ (id)onboardingScreenViewEventWithScreenType:(long long)arg1 userActivityType:(id)arg2 referringURL:(id)arg3 referringApplication:(id)arg4 notificationAction:(long long)arg5 notificationsCount:(unsigned long long)arg6 presentationReason:(long long)arg7;	// IMP=0x00100000000212f8
+ (id)searchResultSelectEventWithSearchText:(id)arg1 completedText:(id)arg2 resultType:(long long)arg3 resultID:(id)arg4 topicResults:(id)arg5 channelResults:(id)arg6 articleResults:(id)arg7 topArticleResult:(id)arg8 topChannelResult:(id)arg9 topTopicResult:(id)arg10 selectedSection:(long long)arg11 displayRankInSection:(long long)arg12 searchMethod:(long long)arg13 numberOfResults:(long long)arg14 numberOfResultsInSection:(long long)arg15 selectedResultActionType:(long long)arg16 selectedShowMore:(_Bool)arg17 searchLocation:(long long)arg18;	// IMP=0x0010000000020db0
+ (id)searchExecuteEventWithSearchMethod:(long long)arg1 text:(id)arg2 completedText:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 numberOfResults:(long long)arg6 topArticleResult:(id)arg7 topChannelResult:(id)arg8 topTopicResult:(id)arg9 articleResults:(id)arg10 channelResults:(id)arg11 topicResults:(id)arg12 searchLocation:(long long)arg13;	// IMP=0x00100000000209a1
+ (id)searchBeginEventWithSearchLocation:(long long)arg1;	// IMP=0x00100000000208cc
+ (id)shareResultEventWithStatus:(long long)arg1 articleID:(id)arg2 referencedArticleID:(id)arg3 articleSessionID:(id)arg4 articleViewingSessionID:(id)arg5 articleType:(long long)arg6 feedViewExposureID:(id)arg7 location:(long long)arg8 activityType:(id)arg9 surfacedByChannelID:(id)arg10 surfacedBySectionID:(id)arg11 surfacedByTopicID:(id)arg12 externalWeblinkURL:(id)arg13 personalizationFeaturesBundle:(id)arg14 groupType:(long long)arg15 feedType:(long long)arg16 groupFeedID:(id)arg17 notificationID:(id)arg18 isFreeArticle:(_Bool)arg19 isNativeAd:(_Bool)arg20 nativeAdCampaignData:(id)arg21 referral:(id)arg22 isPaidSubscriberToSourceChannel:(_Bool)arg23 openedFromNextArticleAffordance:(_Bool)arg24 nextArticleAffordanceType:(long long)arg25 nextArticleAffordanceTypeFeedID:(id)arg26 isCoverArticle:(_Bool)arg27 topStoryType:(long long)arg28 publisherArticleVersion:(long long)arg29 backendArticleVersion:(long long)arg30 previousArticleID:(id)arg31 previousArticleVersion:(long long)arg32 cohortMemberships:(id)arg33 groupViewExposureID:(id)arg34;	// IMP=0x001000000001fe19
+ (id)articleLikeDislikeEventWithAction:(long long)arg1 articleID:(id)arg2 referencedArticleID:(id)arg3 articleSessionID:(id)arg4 articleViewingSessionID:(id)arg5 articleType:(long long)arg6 feedViewExposureID:(id)arg7 location:(long long)arg8 surfacedByChannelID:(id)arg9 surfacedBySectionID:(id)arg10 surfacedByTopicID:(id)arg11 personalizationFeaturesBundle:(id)arg12 groupFeedId:(id)arg13 groupType:(long long)arg14 feedType:(long long)arg15 isFreeArticle:(_Bool)arg16 isNativeAd:(_Bool)arg17 nativeAdCampaignData:(id)arg18 referral:(id)arg19 isPaidSubscriberToSourceChannel:(_Bool)arg20 openedFromNextArticleAffordance:(_Bool)arg21 nextArticleAffordanceType:(long long)arg22 nextArticleAffordanceTypeFeedID:(id)arg23 isCoverArticle:(_Bool)arg24 topStoryType:(long long)arg25 publisherArticleVersion:(long long)arg26 backendArticleVersion:(long long)arg27 previousArticleID:(id)arg28 previousArticleVersion:(long long)arg29;	// IMP=0x001000000001f541
+ (id)notificationSubscribeUnsubscribeEventWithAction:(long long)arg1 location:(long long)arg2 channelID:(id)arg3 isPaidSubscriberToChannel:(_Bool)arg4 referral:(id)arg5 notificationSettingsType:(long long)arg6;	// IMP=0x001000000001f31b
+ (id)notificationSettingsEventWithPresentationReason:(long long)arg1 referral:(id)arg2;	// IMP=0x001000000001f1f0
+ (id)suggestionIgnoreEventWithFeedType:(int)arg1 location:(int)arg2 feedID:(id)arg3 position:(long long)arg4;	// IMP=0x001000000001efa8
+ (id)channelMuteUnmuteEventWithAction:(long long)arg1 articleID:(id)arg2 referencedArticleID:(id)arg3 articleSessionID:(id)arg4 articleViewingSessionID:(id)arg5 feedType:(long long)arg6 feedIdentifier:(id)arg7 feedViewExposureID:(id)arg8 location:(long long)arg9 isUserSubscribedToFeed:(_Bool)arg10 personalizationFeaturesBundle:(id)arg11 groupType:(long long)arg12 referral:(id)arg13 previousArticleID:(id)arg14 previousArticleVersion:(long long)arg15;	// IMP=0x001000000001eaed
+ (id)feedUnsubscribeEventWithFeedType:(long long)arg1 feedIdentifier:(id)arg2 articleID:(id)arg3 feedViewExposureID:(id)arg4 location:(long long)arg5 postSubscribedTagIDs:(id)arg6 personalizationFeaturesBundle:(id)arg7 groupType:(long long)arg8 groupFeedID:(id)arg9 feedPickerType:(long long)arg10 previousArticleID:(id)arg11 previousArticleVersion:(long long)arg12;	// IMP=0x001000000001e6bb
+ (id)feedSubscribeEventWithFeedType:(long long)arg1 feedIdentifier:(id)arg2 articleID:(id)arg3 feedViewExposureID:(id)arg4 searchText:(id)arg5 location:(long long)arg6 displayRank:(long long)arg7 presentationReason:(long long)arg8 preSubscribedTagIDs:(id)arg9 personalizationFeaturesBundle:(id)arg10 groupType:(long long)arg11 groupFeedID:(id)arg12 feedPickerType:(long long)arg13 referral:(id)arg14 subscriptionReason:(unsigned long long)arg15 previousArticleID:(id)arg16 previousArticleVersion:(long long)arg17;	// IMP=0x001000000001e169
+ (id)appSessionEndEventWithReason:(long long)arg1 channelSubscriptionCount:(unsigned long long)arg2 topicSubscriptionCount:(unsigned long long)arg3 appSessionDuration:(double)arg4 paidSubscriptionChannelIDs:(id)arg5 subscribedFeedIds:(id)arg6 notificationChannelIDs:(id)arg7 autoFavoriteTagIDs:(id)arg8 autoGroupableFavoriteTagIDs:(id)arg9 progressivePersonalizationContext:(id)arg10 syncedOtherUserIDInSession:(_Bool)arg11;	// IMP=0x001000000001db93
+ (id)appSessionStartEventWithLastSessionStartDate:(id)arg1 channelSubscriptionCount:(unsigned long long)arg2 topicSubscriptionCount:(unsigned long long)arg3 paidSubscriptionChannelIDs:(id)arg4 subscribedFeedIds:(id)arg5 notificationChannelIDs:(id)arg6 notificationID:(id)arg7 notificationArticleID:(id)arg8 notificationSenderChannelID:(id)arg9 notificationSourceChannelID:(id)arg10 autoFavoriteTagIDs:(id)arg11 autoGroupableFavoriteTagIDs:(id)arg12 referral:(id)arg13 progressivePersonalizationContext:(id)arg14 isMarketingNotificationEnabled:(_Bool)arg15 isNewIssuesNotificationEnabled:(_Bool)arg16;	// IMP=0x001000000001d2cc
+ (id)feedSelectionEventWithFeedID:(id)arg1 personalizationFeaturesBundle:(id)arg2;	// IMP=0x001000000001d1da
+ (id)feedPullToRefreshEventWithFeedID:(id)arg1 feedIdentifier:(id)arg2;	// IMP=0x001000000001d0ca
+ (id)headlineSeenEventWithArticleID:(id)arg1 displayRank:(long long)arg2 groupDisplayRank:(long long)arg3 personalizationFeaturesBundle:(id)arg4 fractionalCohortMembership:(id)arg5;	// IMP=0x001000000001cf30
+ (id)anfComponentExposureEventWithArticleID:(id)arg1 sourceChannelID:(id)arg2 componentID:(id)arg3 componentType:(id)arg4 componentRole:(id)arg5 metaData:(id)arg6 publisherArticleVersion:(long long)arg7 backendArticleVersion:(long long)arg8 issueData:(id)arg9 issueViewData:(id)arg10;	// IMP=0x001000000001cc57
+ (id)exposureEventWithStartDate:(id)arg1 endDate:(id)arg2 hostViewType:(long long)arg3 articleID:(id)arg4 referencedArticleID:(id)arg5 articleSessionID:(id)arg6 articleViewingSessionID:(id)arg7 articleType:(long long)arg8 feedViewExposureID:(id)arg9 displayRank:(long long)arg10 viewFrameInScreen:(struct CGRect)arg11 parentFeedType:(long long)arg12 parentFeedID:(id)arg13 isUserSubscribedToParentFeed:(_Bool)arg14 feedViewPresentationReason:(long long)arg15 feedViewFeedPickerViewSection:(long long)arg16 feedViewSearchText:(id)arg17 topicIDs:(id)arg18 surfacedByChannelID:(id)arg19 surfacedBySectionID:(id)arg20 surfacedByTopicID:(id)arg21 surfacedByBinID:(id)arg22 surfacedByTagIDs:(id)arg23 isNewUserToArticle:(_Bool)arg24 adSupported:(_Bool)arg25 isNativeAd:(_Bool)arg26 nativeAdCampaignData:(id)arg27 iAdCategories:(id)arg28 sourceChannelID:(id)arg29 personalizationFeaturesBundle:(id)arg30 isVideoInFeed:(_Bool)arg31 storyType:(id)arg32 topStoryType:(long long)arg33 userActivityType:(id)arg34 isFreeArticle:(_Bool)arg35 isSharedSubscriptionOnlyArticle:(_Bool)arg36 isPaidSubscriberToSourceChannel:(_Bool)arg37 isGroupedArticle:(_Bool)arg38 groupFeedId:(id)arg39 groupType:(long long)arg40 groupFeedType:(long long)arg41 groupDisplayRank:(long long)arg42 isSubscribedToGroup:(_Bool)arg43 articleDisplayRankInGroup:(long long)arg44 paidSubscriberToFeedType:(long long)arg45 nextArticleAffordanceType:(long long)arg46 nextArticleAffordanceTypeFeedID:(id)arg47 isCoverArticle:(_Bool)arg48 coverArticleDisplayRank:(unsigned long long)arg49 coverArticleFeatureType:(long long)arg50 favoritingSourceChannel:(_Bool)arg51 previousArticleID:(id)arg52 previousArticleVersion:(long long)arg53 publisherArticleVersion:(long long)arg54 backendArticleVersion:(long long)arg55 personalizationScore:(double)arg56 scoreProfile:(id)arg57 previousWebEmbedID:(id)arg58 previousWebEmbedLocation:(long long)arg59 groupLocation:(int)arg60 exposedInLocationID:(id)arg61 groupViewExposureID:(id)arg62 exposedGroupSourceChannelID:(id)arg63 articleSuggestionOrigin:(int)arg64 experimentalTitleMetadata:(id)arg65 language:(id)arg66 articleRole:(long long)arg67 issueData:(id)arg68 issueViewData:(id)arg69 issueViewContextData:(id)arg70 channelData:(id)arg71;	// IMP=0x001000000001bdaf
+ (id)safariHistoryEventWithStartDate:(id)arg1 content:(id)arg2 personalizationFeaturesBundle:(id)arg3;	// IMP=0x001000000001bcbd
+ (id)appInFocusEventWithStartDate:(id)arg1 content:(id)arg2 personalizationFeaturesBundle:(id)arg3;	// IMP=0x000000000001bbcb
+ (id)appInstallEventWithStartDate:(id)arg1 content:(id)arg2 personalizationFeaturesBundle:(id)arg3;	// IMP=0x001000000001bad9
+ (id)_articleHostViewExposureEventWithStartDate:(id)arg1 endDate:(id)arg2 articleID:(id)arg3 referencedArticleID:(id)arg4 articleSessionID:(id)arg5 articleViewingSessionID:(id)arg6 articleType:(long long)arg7 feedViewExposureID:(id)arg8 displayRank:(long long)arg9 viewFrameInScreen:(struct CGRect)arg10 parentFeedType:(long long)arg11 parentFeedID:(id)arg12 isUserSubscribedToParentFeed:(_Bool)arg13 feedViewPresentationReason:(long long)arg14 feedViewSearchText:(id)arg15 topicIDs:(id)arg16 surfacedByChannelID:(id)arg17 surfacedBySectionID:(id)arg18 surfacedByTopicID:(id)arg19 surfacedByBinID:(id)arg20 surfacedByTagIDs:(id)arg21 isNewUserToArticle:(_Bool)arg22 adSupported:(_Bool)arg23 isNativeAd:(_Bool)arg24 nativeAdCampaignData:(id)arg25 iAdCategories:(id)arg26 sourceChannelID:(id)arg27 sourceURL:(id)arg28 sourceApplication:(id)arg29 personalizationFeaturesBundle:(id)arg30 isVideoInFeed:(_Bool)arg31 storyType:(id)arg32 topStoryType:(long long)arg33 userActivityType:(id)arg34 isFreeArticle:(_Bool)arg35 isSharedSubscriptionOnlyArticle:(_Bool)arg36 isPaidSubscriberToSourceChannel:(_Bool)arg37 isGroupedArticle:(_Bool)arg38 groupFeedId:(id)arg39 groupType:(long long)arg40 groupFeedType:(long long)arg41 groupDisplayRank:(long long)arg42 isSubscribedToGroup:(_Bool)arg43 articleDisplayRankInGroup:(long long)arg44 referral:(id)arg45 paidSubscriberToFeedType:(long long)arg46 nextArticleAffordanceType:(long long)arg47 nextArticleAffordanceTypeFeedID:(id)arg48 favoritingSourceChannel:(_Bool)arg49 componentID:(id)arg50 isEditorialTabShowingBadge:(_Bool)arg51 previousArticleID:(id)arg52 previousArticleVersion:(long long)arg53 publisherArticleVersion:(long long)arg54 backendArticleVersion:(long long)arg55 personalizationScore:(double)arg56 groupLocation:(int)arg57 exposedInLocationID:(id)arg58 groupViewExposureID:(id)arg59 exposedGroupSourceChannelID:(id)arg60 articleSuggestionOrigin:(int)arg61 experimentalTitleMetadata:(id)arg62 language:(id)arg63 articleRole:(long long)arg64 issueData:(id)arg65 issueViewData:(id)arg66 issueViewContextData:(id)arg67 channelData:(id)arg68;	// IMP=0x001000000001a64e
+ (id)headlineTapEventWithArticleID:(id)arg1 referencedArticleID:(id)arg2 topicIDs:(id)arg3 surfacedByChannelID:(id)arg4 surfacedBySectionID:(id)arg5 surfacedByTopicID:(id)arg6 iAdCategories:(id)arg7 sourceChannelID:(id)arg8 personalizationFeaturesBundle:(id)arg9 fractionalCohortMembership:(id)arg10;	// IMP=0x001000000001a3cf
+ (id)searchExposureEvent;	// IMP=0x001000000001a31e
+ (id)feedPickerCellExposureEventWithStartDate:(id)arg1 endDate:(id)arg2 feedType:(long long)arg3 feedID:(id)arg4 isUserSubscribedToFeed:(_Bool)arg5 feedPickerType:(long long)arg6 section:(long long)arg7 displayRankInSection:(unsigned long long)arg8 viewFrameInScreen:(struct CGRect)arg9 hostViewExposureID:(id)arg10 personalizationFeaturesBundle:(id)arg11;	// IMP=0x0010000000019f78
+ (id)feedPickerCellHostViewExposureEventWithStartDate:(id)arg1 endDate:(id)arg2 feedPickerType:(long long)arg3 referral:(id)arg4;	// IMP=0x0010000000019d7f
+ (id)feedViewEventWithStartDate:(id)arg1 endDate:(id)arg2 feedType:(long long)arg3 feedID:(id)arg4 feedViewExposureID:(id)arg5 groupViewExposureID:(id)arg6 isUserSubscribedToFeed:(_Bool)arg7 presentationReason:(long long)arg8 searchText:(id)arg9 viewFrameInScreen:(struct CGRect)arg10 feedPickerSection:(long long)arg11 feedPickerType:(long long)arg12 sourceURL:(id)arg13 sourceApplication:(id)arg14 userActivityType:(id)arg15 isPaidSubscriberToFeed:(_Bool)arg16 groupType:(long long)arg17 isSubscribedToGroupFeed:(_Bool)arg18 countOfTotalGroupExposures:(long long)arg19 adSupported:(_Bool)arg20 rankInToC:(long long)arg21 referral:(id)arg22 previousArticleID:(id)arg23 previousArticleVersion:(long long)arg24 endReason:(long long)arg25;	// IMP=0x0010000000019574
+ (id)feedLoadEventWithStartDate:(id)arg1 endDate:(id)arg2 feedType:(long long)arg3 feedID:(id)arg4 feedViewExposureID:(id)arg5;	// IMP=0x0010000000019353
+ (id)scrollEventWithStartPosition:(double)arg1 endPosition:(double)arg2 velocity:(double)arg3 startDate:(id)arg4 endDate:(id)arg5 articleID:(id)arg6 referencedArticleID:(id)arg7 articleSessionID:(id)arg8 articleViewingSessionID:(id)arg9 hostViewType:(long long)arg10 adSupported:(_Bool)arg11 experimentalTitleMetadata:(id)arg12 issueData:(id)arg13 issueViewData:(id)arg14;	// IMP=0x0010000000018e89
+ (id)analyticsEventWithProperties:(id)arg1 additionalCommonProperties:(id)arg2;	// IMP=0x0010000000018db3
+ (id)analyticsEventWithProperties:(id)arg1;	// IMP=0x0010000000018d3c
+ (id)eventWithProperties:(id)arg1;	// IMP=0x0010000000018ce7
+ (id)appendFractionalCohortMembershipWithEvent:(id)arg1 membership:(id)arg2;	// IMP=0x0010000000018b8f
- (void).cxx_destruct;	// IMP=0x0010000000018b0e
@property(readonly, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) NSDictionary *analyticsProperties; // @synthesize analyticsProperties=_analyticsProperties;
@property(readonly, nonatomic) NSSet *desiredCommonAnalyticsProperties; // @synthesize desiredCommonAnalyticsProperties=_desiredCommonAnalyticsProperties;
@property(readonly, nonatomic) _Bool isAppAnalyticsEvent; // @synthesize isAppAnalyticsEvent=_isAppAnalyticsEvent;
@property(readonly, nonatomic) _Bool isWatchAnalyticsEvent; // @synthesize isWatchAnalyticsEvent=_isWatchAnalyticsEvent;
@property(readonly, nonatomic) _Bool isAnalyticsEvent; // @synthesize isAnalyticsEvent=_isAnalyticsEvent;
- (id)description;	// IMP=0x00100000000189de
@property(readonly, nonatomic) NSString *appAnalyticsEventIdentifier;
- (id)referringSource;	// IMP=0x001000000001892a
@property(readonly, nonatomic) NSString *referringType;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) NSDate *occurrenceDate;
@property(readonly, nonatomic) NSString *type;
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x001000000001871c
- (id)initWithProperties:(id)arg1 isAnalyticsEvent:(_Bool)arg2 isWatchAnalyticsEvent:(_Bool)arg3 desiredCommonAnalyticsProperties:(id)arg4;	// IMP=0x00100000000185c1
- (_Bool)shouldOmitFractionalCohortMembership;	// IMP=0x0010000000018b41
- (id)featuresWithDuration:(double)arg1 heavyClickMinimumDuration:(double)arg2 headlineLookup:(CDUnknownBlockType)arg3 issueLookup:(CDUnknownBlockType)arg4 readingHistory:(id)arg5 personalizationTreatment:(id)arg6;	// IMP=0x00100000000b0ced

@end
