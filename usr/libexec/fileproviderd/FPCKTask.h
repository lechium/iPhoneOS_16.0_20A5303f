//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface FPCKTask : NSObject
{
    NSObject<OS_dispatch_queue> *workQueue;	// 8 = 0x8
}

+ (id)sharedManager;	// IMP=0x0040000000004e76
- (void).cxx_destruct;	// IMP=0x0020000000005463
- (void)dumpDatabaseAt:(id)arg1 fullDump:(_Bool)arg2 writeTo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000052d5
- (void)scheduleFPCKRun:(id)arg1 databasesBackupsPath:(id)arg2 url:(id)arg3 options:(unsigned long long)arg4 fpfs:(_Bool)arg5 ciconia:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x0010000000004f4d
- (id)init;	// IMP=0x0010000000004ecb

@end

