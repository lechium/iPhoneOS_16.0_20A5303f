//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MLRXPCActivityManager : NSObject
{
    _Bool _submissionWasAllowed;	// 8 = 0x8
    _Bool _hasRegistered;	// 9 = 0x9
}

- (id)createXPCActivityTasks;	// IMP=0x0020000000018b7e
- (void)setCriteriaForXPCActivityIfNeeded:(id)arg1 criteria:(id)arg2;	// IMP=0x0010000000018a58
- (void)registerWithIdentifier:(const char *)arg1 criteria:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000018a45
- (void)unregisterXPCActivityWithIdentifier:(const char *)arg1;	// IMP=0x0010000000018a38
- (_Bool)shouldDeferForXPCActivity:(id)arg1;	// IMP=0x0010000000018a2b
- (void)addEligibilityChangedHandlerForActivity:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000018a1b
- (long long)getStateForForXPCActivity:(id)arg1;	// IMP=0x0010000000018a0e
- (_Bool)setStateForXPCActivity:(id)arg1 state:(long long)arg2;	// IMP=0x0010000000018986
- (_Bool)submissionAllowed;	// IMP=0x001000000001897c
- (void)registerIfNeeded;	// IMP=0x00100000000183a1
- (void)runActivityTask:(id)arg1;	// IMP=0x0010000000017e52
- (void)handleDeferActivityTask:(id)arg1 withStartTime:(double)arg2;	// IMP=0x0010000000017c16
- (void)handleCompleteActivityTask:(id)arg1 withError:(id)arg2;	// IMP=0x0010000000017a44

@end

