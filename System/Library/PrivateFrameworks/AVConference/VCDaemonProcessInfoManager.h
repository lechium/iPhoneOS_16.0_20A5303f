//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCDaemonProcessInfoManager : NSObject
{
    NSObject<OS_dispatch_queue> *_xpcQueue;	// 8 = 0x8
}

+ (id)copyProcessInfo;	// IMP=0x00600000000db97a
+ (id)sharedManager;	// IMP=0x00600000000db92b
- (id)copyProcessInfo;	// IMP=0x00000000000dbbf5
- (void)deregisterBlocksForService;	// IMP=0x00000000000dbbbc
- (void)registerBlocksForService;	// IMP=0x00000000000dbad2
- (id)autorelease;	// IMP=0x00000000000dbac9
- (oneway void)release;	// IMP=0x00000000000dbac3
- (unsigned long long)retainCount;	// IMP=0x00000000000dbab6
- (id)retain;	// IMP=0x00000000000dbaad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000dbaa4
- (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000dba97
- (void)dealloc;	// IMP=0x00000000000dba2d
- (id)init;	// IMP=0x00000000000db9ad

@end

