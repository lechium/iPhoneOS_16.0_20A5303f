//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SDShareSheetUserDefaultsServer
{
}

- (void)requestFavoritesForActivityCategory:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x002000000002126d
- (void)connectionInvalidated:(id)arg1;	// IMP=0x0010000000021267
- (void)connectionEstablished:(id)arg1;	// IMP=0x0010000000021261
- (id)remoteObjectInterface;	// IMP=0x0010000000021241
- (id)exportedInterface;	// IMP=0x0010000000021221
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x0010000000021160
- (id)machServiceName;	// IMP=0x0010000000021153
- (void)invalidate;	// IMP=0x0010000000021124
- (void)activate;	// IMP=0x00100000000210f5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
