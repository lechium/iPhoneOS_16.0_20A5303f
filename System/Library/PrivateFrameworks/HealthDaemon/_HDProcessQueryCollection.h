//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDQueryServerClientState, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _HDProcessQueryCollection : NSObject
{
    NSMutableDictionary *_queryServersByUUID;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_timer;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSString *_processBundleIdentifier;	// 32 = 0x20
    HDQueryServerClientState *_clientState;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000123d0b

@end
