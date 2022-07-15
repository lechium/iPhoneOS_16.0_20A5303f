//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GKUtilityService-Protocol.h"

@class NSArray, NSData, NSNumber, NSString, NSURL;

@protocol GKUtilityServicePrivate <GKUtilityService>
- (oneway void)getHostGameWithHandler:(void (^)(GKGameInternal *))arg1;
- (oneway void)currentNonGameCenterForegroundGameHandler:(void (^)(GKGameInternal *))arg1;
- (oneway void)clearCoreRecencyBlackList;
- (oneway void)contactSuggestionsWithLimit:(NSNumber *)arg1 handler:(void (^)(NSArray *))arg2;
- (oneway void)suggestedContactsListWithLimit:(NSNumber *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)loadContactsFromCoreRecencyWithLimit:(NSNumber *)arg1 contactKeyDescriptors:(NSArray *)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
- (oneway void)denyGroup:(NSString *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)denyContact:(NSString *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)contactAndGroupSuggestions:(NSNumber *)arg1 handler:(void (^)(NSArray *))arg2;
- (oneway void)checkAndUpdateArcadeSubscriberStatusWithHandler:(void (^)(NSError *))arg1;
- (oneway void)cancelNetworkManagerTasks;
- (oneway void)loadDataForURL:(NSURL *)arg1 postBody:(NSData *)arg2 completionHandler:(void (^)(NSData *, NSError *))arg3;
- (oneway void)refreshPreferencesWithDataType:(unsigned int)arg1;
- (oneway void)refreshPreferences;
- (oneway void)updateNotificationTopics;
- (oneway void)pingWithHandler:(void (^)(void))arg1;
- (oneway void)clearCaches;
- (oneway void)terminate;
- (oneway void)openGameCenterSettings;
- (oneway void)openICloudSettings;
- (oneway void)openSettings;
- (oneway void)getCredentialInfoAndStoreBagValuesForKeys:(NSArray *)arg1 handler:(void (^)(NSString *, NSString *, NSString *, NSData *, NSDictionary *, NSError *))arg2;
@end
