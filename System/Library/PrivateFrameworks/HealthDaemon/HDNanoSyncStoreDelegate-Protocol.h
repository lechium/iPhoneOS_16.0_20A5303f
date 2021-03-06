//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDNanoSyncStore, NSString;

@protocol HDNanoSyncStoreDelegate <NSObject>
@property(readonly, nonatomic) _Bool isMaster;
- (void)nanoSyncStore:(HDNanoSyncStore *)arg1 deviceNameDidChange:(NSString *)arg2;
- (void)nanoSyncStore:(HDNanoSyncStore *)arg1 restoreStateDidChange:(long long)arg2;
- (void)nanoSyncStore:(HDNanoSyncStore *)arg1 remoteSystemBuildVersionDidChange:(NSString *)arg2;
@end

