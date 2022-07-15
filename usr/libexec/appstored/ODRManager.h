//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock, UnfairLock;
@protocol OS_dispatch_source;

@interface ODRManager : NSObject
{
    NSMutableDictionary *_applicationMapping;	// 8 = 0x8
    UnfairLock *_applicationMappingLock;	// 16 = 0x10
    NSRecursiveLock *_resourcesLock;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_lowDisk;	// 32 = 0x20
}

+ (void)initialize;	// IMP=0x0040000000079fa2
- (void).cxx_destruct;	// IMP=0x002000000007c3e2
- (id)init;	// IMP=0x001000000007a01b

@end
