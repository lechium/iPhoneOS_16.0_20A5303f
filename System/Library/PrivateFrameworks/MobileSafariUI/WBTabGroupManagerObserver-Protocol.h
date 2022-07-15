//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class WBTab, WBTabGroup, WBTabGroupManager, WebBookmarkList;

@protocol WBTabGroupManagerObserver <NSObject>

@optional
- (void)tabGroupManager:(WBTabGroupManager *)arg1 didUpdateScopedBookmarkList:(WebBookmarkList *)arg2;
- (void)tabGroupManagerDidUpdateSyncableContent:(WBTabGroupManager *)arg1;
- (void)tabGroupManager:(WBTabGroupManager *)arg1 didUpdateTab:(WBTab *)arg2 userDriven:(_Bool)arg3;
- (void)tabGroupManager:(WBTabGroupManager *)arg1 didUpdateTabsInTabGroup:(WBTabGroup *)arg2;
- (void)tabGroupManager:(WBTabGroupManager *)arg1 didUpdateTabGroup:(WBTabGroup *)arg2;
- (void)tabGroupManager:(WBTabGroupManager *)arg1 didRemoveTabGroup:(WBTabGroup *)arg2;
- (void)tabGroupManagerDidUpdateTabGroups:(WBTabGroupManager *)arg1;
- (void)tabGroupManagerDidFinishSetup:(WBTabGroupManager *)arg1;
@end
