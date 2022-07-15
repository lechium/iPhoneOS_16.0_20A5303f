//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLCompassDatabaseLocationdAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x0020000000490f49
+ (id)getSilo;	// IMP=0x0010000000490d96
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000490d7d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000490d20
- (_Bool)syncgetLookupBiasWithMagneticField:(CDStruct_869f9c67)arg1 acceleration:(CDStruct_869f9c67)arg2 bias:(CDStruct_869f9c67 *)arg3 level:(int *)arg4 noResults:(_Bool *)arg5;	// IMP=0x00200000004910df
- (void)getBiasWithMagneticField:(CDStruct_869f9c67)arg1 acceleration:(CDStruct_869f9c67)arg2;	// IMP=0x0010000000491092
- (int)syncgetPendingSetBiasCount;	// IMP=0x0010000000491036
- (void)setBias:(CDStruct_869f9c67)arg1 withMagneticField:(CDStruct_869f9c67)arg2 level:(int)arg3 magnitude:(float)arg4 inclination:(float)arg5;	// IMP=0x0010000000490fc3
- (void)dumpDatabase:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000490f8a
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000490f21
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000490ef4
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000490ecc
- (void *)adaptee;	// IMP=0x0010000000490e99
- (void)endService;	// IMP=0x0010000000490e7e
- (void)beginService;	// IMP=0x0010000000490e2f
- (id)init;	// IMP=0x0010000000490df2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
