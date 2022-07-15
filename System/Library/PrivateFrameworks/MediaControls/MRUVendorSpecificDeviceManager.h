//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DADeviceResolver, DADiscovery, NSArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol MRUVendorSpecificDeviceManagerDelegate;

__attribute__((visibility("hidden")))
@interface MRUVendorSpecificDeviceManager : NSObject
{
    id <MRUVendorSpecificDeviceManagerDelegate> _delegate;	// 8 = 0x8
    NSString *_appBundleID;	// 16 = 0x10
    NSArray *_serviceIdentifiers;	// 24 = 0x18
    DADiscovery *_discovery;	// 32 = 0x20
    DADeviceResolver *_resolver;	// 40 = 0x28
    NSMutableDictionary *_deviceMap;	// 48 = 0x30
    NSMutableDictionary *_coalescedDeviceMap;	// 56 = 0x38
    NSMutableDictionary *_activatingDeviceMap;	// 64 = 0x40
    NSMutableDictionary *_activatedDeviceMap;	// 72 = 0x48
    NSMutableDictionary *_invalidatingDeviceMap;	// 80 = 0x50
    NSMutableSet *_mutableResolverManagedAirPlayRouteIDs;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000002bd75
@property(retain, nonatomic) NSMutableSet *mutableResolverManagedAirPlayRouteIDs; // @synthesize mutableResolverManagedAirPlayRouteIDs=_mutableResolverManagedAirPlayRouteIDs;
@property(retain, nonatomic) NSMutableDictionary *invalidatingDeviceMap; // @synthesize invalidatingDeviceMap=_invalidatingDeviceMap;
@property(retain, nonatomic) NSMutableDictionary *activatedDeviceMap; // @synthesize activatedDeviceMap=_activatedDeviceMap;
@property(retain, nonatomic) NSMutableDictionary *activatingDeviceMap; // @synthesize activatingDeviceMap=_activatingDeviceMap;
@property(retain, nonatomic) NSMutableDictionary *coalescedDeviceMap; // @synthesize coalescedDeviceMap=_coalescedDeviceMap;
@property(retain, nonatomic) NSMutableDictionary *deviceMap; // @synthesize deviceMap=_deviceMap;
@property(retain, nonatomic) DADeviceResolver *resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) DADiscovery *discovery; // @synthesize discovery=_discovery;
@property(copy, nonatomic) NSArray *serviceIdentifiers; // @synthesize serviceIdentifiers=_serviceIdentifiers;
@property(copy, nonatomic) NSString *appBundleID; // @synthesize appBundleID=_appBundleID;
@property(nonatomic) __weak id <MRUVendorSpecificDeviceManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x000000000002bbe9
- (void)handleDiscoveryEvent:(id)arg1;	// IMP=0x000000000002b3bc
- (void)handleResolverEvent:(id)arg1;	// IMP=0x000000000002ad1b
- (void)setDevice:(id)arg1 picked:(_Bool)arg2;	// IMP=0x000000000002a9d7
- (void)stopDiscovery;	// IMP=0x000000000002a994
- (void)disconnectAllDevices;	// IMP=0x000000000002a407
- (void)connectToDevice:(id)arg1;	// IMP=0x0000000000029b5a
- (void)resolverRemoveNativeRoute:(id)arg1;	// IMP=0x0000000000029a44
- (_Bool)resolverAddNativeRoute:(id)arg1;	// IMP=0x000000000002915a
- (void)resolverRemoveVendorSpecificRoute:(id)arg1;	// IMP=0x000000000002909d
- (void)resolverAddVendorSpecificDevice:(id)arg1;	// IMP=0x0000000000028ec8
- (void)resolverRemoveNativeRoutes:(id)arg1;	// IMP=0x0000000000028d11
- (void)resolverAddNativeRoutes:(id)arg1;	// IMP=0x00000000000288f1
- (void)resolverSetLastSelectedRoute:(id)arg1;	// IMP=0x0000000000028622
- (void)updateLocalMapWith:(id)arg1 deviceIsLost:(_Bool)arg2;	// IMP=0x0000000000028327
- (void)startDiscovery;	// IMP=0x0000000000028195
- (long long)latestStateForDevice:(id)arg1;	// IMP=0x00000000000280a3
@property(readonly, copy, nonatomic) NSArray *resolverManagedAirPlayRouteIDs;
@property(readonly, copy, nonatomic) NSArray *pendingDeviceIDs;
@property(readonly, copy, nonatomic) NSArray *invalidatingDeviceIDs;
@property(readonly, copy, nonatomic) NSArray *activatingDeviceIDs;
@property(readonly, copy, nonatomic) NSArray *activatedDeviceIDs;
@property(readonly, copy, nonatomic) NSArray *coalescedDevices;
@property(readonly, copy, nonatomic) NSArray *devices;
- (id)initWithAppBundleID:(id)arg1 serviceIdentifiers:(id)arg2;	// IMP=0x0000000000027b7b

@end
