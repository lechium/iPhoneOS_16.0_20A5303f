//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HDMaintenanceOperation.h"

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _HDMaintenanceWorkCoordinatorSynchronousOperation : HDMaintenanceOperation
{
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    CDUnknownBlockType _block;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000003f6a67
- (void)main;	// IMP=0x00000000003f6a27
- (id)initWithName:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000003f6972

@end

