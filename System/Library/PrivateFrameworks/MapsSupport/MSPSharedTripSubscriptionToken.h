//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MSPSharedTripSubscriptionToken : NSObject
{
    NSString *_sharedTripIdentifier;	// 8 = 0x8
    CDUnknownBlockType _invalidationHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000bb918
- (void)dealloc;	// IMP=0x00000000000bb8a4
- (id)initWithSharedTripIdentifier:(id)arg1 invalidationHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bb7f9

@end
