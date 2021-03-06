//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID, PRProximityDeviceParameters;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface PRProximityDevice : NSObject
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
    NSString *_model;	// 16 = 0x10
    PRProximityDeviceParameters *_proximityParameters;	// 24 = 0x18
    struct deque<BtProxData, std::allocator<BtProxData>> _samples;	// 32 = 0x20
    long long _proximity;	// 80 = 0x50
    NSUUID *_peer;	// 88 = 0x58
}

- (id).cxx_construct;	// IMP=0x00000000000261ab
- (void).cxx_destruct;	// IMP=0x0000000000026164
@property(readonly) NSUUID *peer; // @synthesize peer=_peer;
- (void)estimateProximity;	// IMP=0x0000000000025d1e
- (long long)deviceProximity;	// IMP=0x0000000000025d14
- (_Bool)proxReady;	// IMP=0x0000000000025ce9
- (void)addSample:(struct BtProxData)arg1;	// IMP=0x0000000000025ba7
- (id)initWithPeer:(id)arg1 andPeerModel:(id)arg2 withError:(id *)arg3;	// IMP=0x0000000000025a4e
- (id)init;	// IMP=0x0000000000025a10

@end

