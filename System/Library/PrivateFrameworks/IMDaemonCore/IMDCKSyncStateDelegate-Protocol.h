//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMDaemonCore/NSObject-Protocol.h>

@class IMDCKSyncState;

@protocol IMDCKSyncStateDelegate <NSObject>

@optional
- (void)syncStateDidUpdate:(IMDCKSyncState *)arg1;
- (void)syncStateWillUpdate:(IMDCKSyncState *)arg1;
@end

