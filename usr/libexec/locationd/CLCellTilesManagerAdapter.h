//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLCellTilesManagerAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x002000000090801a
+ (id)getSilo;	// IMP=0x0010000000907e08
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000907def
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000907d92
- (void)requestCellTileDownloadByType:(int)arg1 lat:(double)arg2 lon:(double)arg3 seckey:(unsigned long long)arg4;	// IMP=0x00200000009080d4
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000907ff2
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000907fc5
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000907f9d
- (void *)adaptee;	// IMP=0x0010000000907f6a
- (void)endService;	// IMP=0x0010000000907f4f
- (void)beginService;	// IMP=0x0010000000907ea1
- (id)init;	// IMP=0x0010000000907e64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

