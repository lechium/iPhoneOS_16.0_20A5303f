//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface SKServiceProxy : NSObject
{
    NSLock *_serviceConnectionLock;	// 8 = 0x8
    NSXPCConnection *_serviceConnection;	// 16 = 0x10
}

+ (id)serviceProxy;	// IMP=0x0060000000031518
+ (id)inAppClientInterface;	// IMP=0x006000000003130c
+ (id)inAppServiceInterface;	// IMP=0x00600000000312ec
- (void).cxx_destruct;	// IMP=0x00000000000319a5
- (id)inAppService;	// IMP=0x0000000000031991
- (id)inAppServiceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003197f
- (id)objectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000031899
- (void)_serviceConnectionInvalidated;	// IMP=0x0000000000031854
- (id)serviceConnection;	// IMP=0x00000000000315c3
- (id)init;	// IMP=0x000000000003156d

@end

