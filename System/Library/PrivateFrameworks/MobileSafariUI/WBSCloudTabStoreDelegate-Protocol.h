//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class NSError, WBSCloudTabStore;

@protocol WBSCloudTabStoreDelegate <NSObject>

@optional
- (void)didGetCachedDevicesFromCloudKitForCloudTabStore:(WBSCloudTabStore *)arg1;
- (void)didUpdateDevicesAndCloseRequestsFromCloudKitForCloudTabStore:(WBSCloudTabStore *)arg1 error:(NSError *)arg2;
@end
