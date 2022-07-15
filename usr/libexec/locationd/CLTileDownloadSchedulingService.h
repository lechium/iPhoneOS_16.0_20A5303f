//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSMutableArray, NSString;

@interface CLTileDownloadSchedulingService : CLIntersiloService
{
    _Bool _hasRegisteredForWifiConnectivity;	// 8 = 0x8
    _Bool _hasRegisteredForCellularConnectivity;	// 9 = 0x9
    NSMutableArray *_clients;	// 16 = 0x10
}

+ (id)getSilo;	// IMP=0x002000000038169a
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000381681
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000381624
@property(nonatomic) _Bool hasRegisteredForCellularConnectivity; // @synthesize hasRegisteredForCellularConnectivity=_hasRegisteredForCellularConnectivity;
@property(nonatomic) _Bool hasRegisteredForWifiConnectivity; // @synthesize hasRegisteredForWifiConnectivity=_hasRegisteredForWifiConnectivity;
@property(retain, nonatomic) NSMutableArray *clients; // @synthesize clients=_clients;
- (void)scheduleDownloadsWithCellularConnectivity;	// IMP=0x0010000000382180
- (void)scheduleDownloadsWithWifiConnectivity;	// IMP=0x0010000000381b81
- (void)stopListeningForForScheduledTileDownload:(byref id)arg1;	// IMP=0x0010000000381a3a
- (void)requestForSchedulingTileDownload:(byref id)arg1;	// IMP=0x00100000003817e1
- (void)endService;	// IMP=0x00100000003817b6
- (void)beginService;	// IMP=0x001000000038178b
- (void)dealloc;	// IMP=0x0010000000381733
- (id)init;	// IMP=0x00100000003816f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
