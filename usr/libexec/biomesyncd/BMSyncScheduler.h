//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMCloudKitSyncEngine, BMRapportSyncEngine, BMSyncDatabase, BMSyncDevicePeerStatusTracker;
@protocol OS_dispatch_queue;

@interface BMSyncScheduler : NSObject
{
    BMRapportSyncEngine *_rapportSyncEngine;	// 8 = 0x8
    BMCloudKitSyncEngine *_cloudKitSyncEngine;	// 16 = 0x10
    BMSyncDevicePeerStatusTracker *_peerStatusTracker;	// 24 = 0x18
    BMSyncDatabase *_database;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000003945c
- (void)syncCloudKitNowIfPolicyAllowsWithReason:(unsigned long long)arg1 activity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000038acf
- (_Bool)doCloudKitSyncNowWithReason:(unsigned long long)arg1;	// IMP=0x00100000000388f6
- (void)syncRapportNowIfPolicyAllowsWithReason:(unsigned long long)arg1 activity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000383cc
- (_Bool)doRapportSyncNowWithReason:(unsigned long long)arg1;	// IMP=0x00100000000381b8
- (void)syncAllTransportsNowIfPolicyAllowsWithReason:(unsigned long long)arg1 activity:(id)arg2;	// IMP=0x0010000000037e40
- (void)syncNowIfPolicyAllowsWithReason:(unsigned long long)arg1 transportType:(unsigned long long)arg2 activity:(id)arg3;	// IMP=0x0010000000037d59
- (id)initWithRapportSyncEngine:(id)arg1 cloudKitSyncEngine:(id)arg2 peerStatusTracker:(id)arg3 database:(id)arg4 queue:(id)arg5;	// IMP=0x0010000000037c57

@end
