//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLNetworkLocationProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x0020000000273e7b
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000273e62
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000273e05
- (void)fetchQueryLocationsForWifis:(CDUnknownBlockType)arg1 useCache:(_Bool)arg2 piggyback:(_Bool)arg3 config:(CDUnknownBlockType)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x0020000000279c99
- (int);	// IMP=0x0010000000279c2e
- (int)syncgetQueryLocationsForCells:(const void *)arg1 useCache:(_Bool)arg2;	// IMP=0x0010000000279874
- (int)syncgetBestMatchLocation:(struct CLDaemonLocation *)arg1 forCell:(const void *)arg2;	// IMP=0x0010000000279571
- (void)resetRetryCounters:(id)arg1;	// IMP=0x0010000000279234
- (void)removeResponseListener:(struct CLNetworkLocationServerResponseListener *)arg1;	// IMP=0x00100000002791fe
- (void)addResponseListener:(struct CLNetworkLocationServerResponseListener *)arg1;	// IMP=0x00100000002791c4
- (int)syncgetQueryNearbys:(const struct CLDaemonLocation *)arg1 forFenceKeys:(const void *)arg2;	// IMP=0x0010000000278ea9
- (_Bool)syncgetMetric:(void *)arg1;	// IMP=0x0010000000278d04
- (void)setPrivateMode:(_Bool)arg1;	// IMP=0x0010000000278cd4
- (_Bool)syncgetIsBroadConnection;	// IMP=0x0010000000278b3b
- (void)setLocation_NR:(id)arg1 forCell:(CDUnknownBlockType)arg2;	// IMP=0x0010000000278443
- (void)setLocation_LTE:(id)arg1 forCell:(CDUnknownBlockType)arg2;	// IMP=0x0010000000277d4c
- (void)setLocation_CDMA:(id)arg1 forCell:(CDUnknownBlockType)arg2;	// IMP=0x00100000002775f3
- (void)setLocation_SCDMA:(id)arg1 forCell:(CDUnknownBlockType)arg2;	// IMP=0x0010000000277017
- (void)setLocation_GSM:(id)arg1 forCell:(CDUnknownBlockType)arg2;	// IMP=0x0010000000276a3c
- (_Bool)syncgetLocation_CELL:(struct CLDaemonLocation *)arg1 forCell:(void *)arg2;	// IMP=0x00100000002766b7
- (_Bool)syncgetLocation_LTE:(struct CLDaemonLocation *)arg1 forCell:(struct LteCell *)arg2;	// IMP=0x0010000000275ce6
- (_Bool)syncgetLocation_CDMA:(struct CLDaemonLocation *)arg1 forCell:(void *)arg2;	// IMP=0x00100000002750ce
- (_Bool)syncgetLocation_SCDMA:(struct CLDaemonLocation *)arg1 forCell:(struct ScdmaCell *)arg2;	// IMP=0x00100000002748ae
- (_Bool)syncgetLocation_GSM:(struct CLDaemonLocation *)arg1 forCell:(struct Cell *)arg2;	// IMP=0x001000000027408e
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000274066
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000274039
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000274011
- (void *)adaptee;	// IMP=0x0010000000273fde
- (void)endService;	// IMP=0x0010000000273fc3
- (void)beginService;	// IMP=0x0010000000273f14
- (id)init;	// IMP=0x0010000000273ed7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

