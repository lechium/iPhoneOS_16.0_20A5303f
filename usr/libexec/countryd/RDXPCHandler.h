//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RDCachedData, RPCompanionLinkClient;

@interface RDXPCHandler : NSObject
{
    RDCachedData *_dataCache;	// 8 = 0x8
    RPCompanionLinkClient *_rpclcProvider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000004895
@property(retain) RPCompanionLinkClient *rpclcProvider; // @synthesize rpclcProvider=_rpclcProvider;
@property(retain) RDCachedData *dataCache; // @synthesize dataCache=_dataCache;
- (void)createCacheDirAtPath:(id)arg1;	// IMP=0x001000000000472c
- (void)ping;	// IMP=0x001000000000468a
- (void)clearStatusSharedWithPeers;	// IMP=0x0010000000004684
- (void)shareStatusWithPeers;	// IMP=0x00100000000031cb
- (void)updatePeer:(id)arg1 withEstimate:(id)arg2;	// IMP=0x0010000000002ac8
- (void)updatePeer:(id)arg1 withCountryCode:(id)arg2 priority:(int)arg3 andTimestamp:(id)arg4;	// IMP=0x00100000000029fc
- (void)update:(long long)arg1 withCountryCode:(id)arg2;	// IMP=0x00100000000025a5
- (void)clearDataCache;	// IMP=0x0010000000002593
- (id)init;	// IMP=0x0010000000001d8c
- (void)createNewDataCache;	// IMP=0x0010000000001d40

@end

