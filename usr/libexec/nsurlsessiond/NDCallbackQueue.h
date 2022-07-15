//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol NDCallbackQueueDelegate;

@interface NDCallbackQueue : NSObject
{
    NSMutableArray *_callbacks;	// 8 = 0x8
    id <NDCallbackQueueDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000063d4d
@property __weak id <NDCallbackQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)count;	// IMP=0x0010000000063d10
- (void)drainCallbacksForTaskIdentifier:(unsigned long long)arg1;	// IMP=0x0010000000063a24
- (void)performAllCallbacks;	// IMP=0x00100000000638de
- (void)addPendingCallback:(id)arg1 wakeRequirement:(long long)arg2;	// IMP=0x0010000000063808
- (void)addPendingCallbackToFront:(id)arg1;	// IMP=0x00100000000637f0
- (void)drainCallback:(id)arg1;	// IMP=0x0010000000063230
- (void)performCallback:(id)arg1;	// IMP=0x001000000006143e
- (id)initWithDelegate:(id)arg1;	// IMP=0x001000000006137d

@end
