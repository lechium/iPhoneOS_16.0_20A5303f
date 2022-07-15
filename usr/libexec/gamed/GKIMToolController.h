//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GKIMToolController : NSObject
{
    unsigned int _caps;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000000a8426
- (void)removeListenerCapabilities:(unsigned int)arg1;	// IMP=0x00200000000a8750
- (void)addListenerCapabilities:(unsigned int)arg1;	// IMP=0x00100000000a868a
- (void)disconnect;	// IMP=0x00100000000a863f
- (void)connect;	// IMP=0x00100000000a8598
- (void)daemonConnectionLost;	// IMP=0x00100000000a8592
- (void)daemonControllerDidDisconnect;	// IMP=0x00100000000a858c
- (void)daemonControllerDidConnect;	// IMP=0x00100000000a8586
- (void)daemonControllerWillConnect;	// IMP=0x00100000000a8542
- (id)init;	// IMP=0x00100000000a8463

@end
