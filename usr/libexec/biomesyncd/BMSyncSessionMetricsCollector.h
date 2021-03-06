//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMSyncDatabase;

@interface BMSyncSessionMetricsCollector : NSObject
{
    BMSyncDatabase *_database;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000064b9
- (void)recordAtomMergeResult:(unsigned long long)arg1 inStream:(id)arg2 ownerSite:(id)arg3 originatingSite:(id)arg4 eventCreatedAt:(double)arg5 sessionContext:(id)arg6;	// IMP=0x0010000000006361
- (void)recordMessageToDeviceIdentifier:(id)arg1 reachable:(_Bool)arg2 bytes:(unsigned long long)arg3 isReciprocal:(_Bool)arg4 sessionContext:(id)arg5;	// IMP=0x0010000000006235
- (void)recordSessionEnd:(id)arg1;	// IMP=0x001000000000621f
- (void)recordSessionStart:(id)arg1 transport:(unsigned long long)arg2 reason:(unsigned long long)arg3 isReciprocal:(_Bool)arg4;	// IMP=0x0010000000006209
- (id)sessionContext;	// IMP=0x0010000000006169
- (id)initWithDatabase:(id)arg1;	// IMP=0x00100000000060fe

@end

