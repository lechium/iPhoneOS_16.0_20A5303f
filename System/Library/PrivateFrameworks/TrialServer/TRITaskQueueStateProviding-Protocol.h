//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, TRIRunningXPCActivityDescriptor;
@protocol OS_xpc_object;

@protocol TRITaskQueueStateProviding
- (TRIRunningXPCActivityDescriptor *)activeActivityDescriptorGrantingCapability:(unsigned long long)arg1;
- (NSObject<OS_xpc_object> *)activeActivityGrantingCapability:(unsigned long long)arg1;
@end

