//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SHLSyncSessionTaskDelegate-Protocol.h"

@class NSArray, SHLSyncSession, SHLSyncSessionModifyTask;

@protocol SHLSyncSessionModifyTaskDelegate <SHLSyncSessionTaskDelegate>
- (void)session:(SHLSyncSession *)arg1 task:(SHLSyncSessionModifyTask *)arg2 didDeleteItemsWithIdentifiers:(NSArray *)arg3;
- (void)session:(SHLSyncSession *)arg1 task:(SHLSyncSessionModifyTask *)arg2 didModifyGroups:(NSArray *)arg3;
- (void)session:(SHLSyncSession *)arg1 task:(SHLSyncSessionModifyTask *)arg2 didModifyTracks:(NSArray *)arg3;
@end

