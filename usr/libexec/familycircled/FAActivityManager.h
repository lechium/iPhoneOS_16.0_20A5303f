//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FAHeartbeatActivity;

@interface FAActivityManager : NSObject
{
    FAHeartbeatActivity *_heartbeatActivity;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000061ff
- (void)handleAccountDeletion:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000615e
- (void)handleAccountAddition:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000604f
- (void)checkinXPCActivities;	// IMP=0x0010000000005fd8
- (id)initWithQueueProvider:(id)arg1;	// IMP=0x0010000000005f56

@end
