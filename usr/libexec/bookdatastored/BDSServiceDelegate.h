//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BDSICloudIdentityTokenTracker, BDSReachability, NSString;
@protocol BDSServiceConnectionClient;

@interface BDSServiceDelegate : NSObject
{
    int _tccNotifyToken;	// 8 = 0x8
    BDSICloudIdentityTokenTracker *_iCloudIdentityTokenTracker;	// 16 = 0x10
    id <BDSServiceConnectionClient> _serviceConnectionClient;	// 24 = 0x18
    BDSReachability *_networkReachability;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000006f7a4
@property(nonatomic) int tccNotifyToken; // @synthesize tccNotifyToken=_tccNotifyToken;
@property(retain, nonatomic) BDSReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
@property(nonatomic) __weak id <BDSServiceConnectionClient> serviceConnectionClient; // @synthesize serviceConnectionClient=_serviceConnectionClient;
@property(retain, nonatomic) BDSICloudIdentityTokenTracker *iCloudIdentityTokenTracker; // @synthesize iCloudIdentityTokenTracker=_iCloudIdentityTokenTracker;
- (void)deleteCloudDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000006f4af
- (void)_deleteLocaliCloudDataIfUserLoggedOutFromiCloudCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000006f28c
- (void)_dieIfUnacknowledgediCloudLogoutOcccurred;	// IMP=0x001000000006f16a
- (id)_bdsService;	// IMP=0x001000000006f0b0
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000006ed38
- (void)dealloc;	// IMP=0x001000000006ec38
- (id)initWithServiceConnectionClient:(id)arg1;	// IMP=0x001000000006e8ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

