//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _FMPriorityQueueingStrategy : NSObject
{
    CDUnknownBlockType _priorityComparator;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000364c
- (unsigned long long)_insertionIndexForObject:(id)arg1 buffer:(id)arg2;	// IMP=0x000000000000355e
- (void)enqueueObject:(id)arg1 buffer:(id)arg2;	// IMP=0x00000000000034e0
- (id)initWithComparator:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003456
- (id)init;	// IMP=0x0000000000003442

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
