//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NRRemoteObjectClassC
{
}

- (void)idsHandleCheckTermsEvent:(id)arg1;	// IMP=0x004000000002789c
- (void)idsHandleAddTermsEvent:(id)arg1;	// IMP=0x001000000002742a
- (void)checkTermsEvent:(id)arg1 toIDSBTUUID:(id)arg2 withResponseBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000270be
- (void)addTermsEvent:(id)arg1 toIDSBTUUID:(id)arg2 withResponseBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000026cc7
- (void)sendPropertyResponseWithTimeout:(id)arg1 withProperties:(id)arg2 withRequestIdentifier:(id)arg3 withSentBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000026b40
- (void)sendPropertyRequestWithTimeout:(id)arg1 toIDSBTUUID:(id)arg2 withResponseBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000002680b
- (id)_unpackProperty:(id)arg1 name:(id *)arg2;	// IMP=0x0010000000026764
- (id)_unpackPropertyValue:(id)arg1;	// IMP=0x0010000000025a7d
- (id)packProperties:(id)arg1 thisIsAllOfThem:(_Bool)arg2;	// IMP=0x001000000002571c
- (id)_getSunriseDate;	// IMP=0x0010000000025628
- (id)_packProperty:(id)arg1 withValue:(id)arg2;	// IMP=0x0010000000025576
- (id)_packPropertyValue:(id)arg1;	// IMP=0x00100000000245c1
- (void)sendPropertyChanges:(id)arg1 isAllProperties:(_Bool)arg2 toIDSBTUUID:(id)arg3 withSentBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000000243f8
- (void)idsHandlePropertyRequest:(id)arg1;	// IMP=0x00100000000242aa
- (id)_unpackProperties:(id)arg1;	// IMP=0x001000000002406b
- (void)idsHandlePropertiesChanged:(id)arg1;	// IMP=0x0010000000023d81
- (void)registerProtobufHandlers;	// IMP=0x0010000000023cd3
- (id)initWithDelegate:(id)arg1 andQueue:(id)arg2;	// IMP=0x0010000000023c9a

@end

