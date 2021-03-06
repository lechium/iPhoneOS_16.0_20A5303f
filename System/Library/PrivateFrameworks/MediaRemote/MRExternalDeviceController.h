//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSNetServiceBrowser, NSString;
@protocol MRExternalDeviceControllerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRExternalDeviceController : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSNetServiceBrowser *_serviceBrowser;	// 16 = 0x10
    NSMutableSet *_discoveredDevices;	// 24 = 0x18
    NSMutableSet *_resolvingServices;	// 32 = 0x20
    NSMutableSet *_monitoringServices;	// 40 = 0x28
    _Bool _discovering;	// 48 = 0x30
    id <MRExternalDeviceControllerDelegate> _delegate;	// 56 = 0x38
    NSString *_bonjourServiceType;	// 64 = 0x40
}

+ (Class)externalDeviceClass;	// IMP=0x0010000000172a31
- (void).cxx_destruct;	// IMP=0x0000000000173cf1
@property(readonly, nonatomic, getter=isDiscovering) _Bool discovering; // @synthesize discovering=_discovering;
@property(readonly, nonatomic) NSString *bonjourServiceType; // @synthesize bonjourServiceType=_bonjourServiceType;
@property(nonatomic) __weak id <MRExternalDeviceControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_isManagedConfigIDAllowed:(id)arg1;	// IMP=0x000000000017398f
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;	// IMP=0x00000000001736b8
- (void)netServiceDidResolveAddress:(id)arg1;	// IMP=0x0000000000173317
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;	// IMP=0x0000000000172fa8
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;	// IMP=0x0000000000172e98
- (void)endDiscovery;	// IMP=0x0000000000172de6
- (void)beginDiscovery;	// IMP=0x0000000000172d25
- (void)dealloc;	// IMP=0x0000000000172ccf
- (id)initWithBonjourServiceType:(id)arg1;	// IMP=0x0000000000172a42

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

