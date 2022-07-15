//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebBookmarks/NSObject-Protocol.h>

@class NSArray, NSString, WBTab, WBTabGroup;

@protocol WBTabProvider <NSObject>
@property(nonatomic) unsigned long long maximumTabsPerGroup;
@property(readonly, copy, nonatomic) NSArray *tabGroups;
@property(readonly, nonatomic) int privatePinnedTabsFolderID;
@property(readonly, nonatomic) int pinnedTabsFolderID;
- (WBTab *)tabWithUUID:(NSString *)arg1;
- (WBTabGroup *)tabGroupWithUUID:(NSString *)arg1;
- (NSArray *)tabsForTabGroup:(WBTabGroup *)arg1;
- (void)tabGroupsWithCompletionHandler:(void (^)(NSArray *))arg1;
@end
