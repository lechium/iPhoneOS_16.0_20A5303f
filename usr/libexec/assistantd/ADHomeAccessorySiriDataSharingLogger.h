//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ADHomeAccessorySiriDataSharingLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000002a3840
- (void)_logSiriDataSharingPropagationAccessoryIdentifier:(id)arg1 propagationEvent:(long long)arg2 propagationReason:(id)arg3 associatedLogEventIdentifier:(id)arg4;	// IMP=0x00100000002a35be
- (void)_logSiriDataSharingRepromptOptInStatus:(long long)arg1 source:(long long)arg2 reason:(id)arg3 logEventIdentifier:(id)arg4;	// IMP=0x00100000002a32f4
- (void)logSiriDataSharingPropagationAccessoryIdentifier:(id)arg1 propagationEvent:(long long)arg2 propagationReason:(id)arg3 associatedLogEventIdentifier:(id)arg4;	// IMP=0x00100000002a31db
- (id)logSiriDataSharingRepromptOptInStatus:(long long)arg1 source:(long long)arg2 reason:(id)arg3;	// IMP=0x00100000002a3094
- (id)initWithTargetQueue:(id)arg1;	// IMP=0x00100000002a3029

@end

