//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;
@protocol RBSInvalidatable;

__attribute__((visibility("hidden")))
@interface RBSStateCaptureSetSegment : NSObject
{
    id <RBSInvalidatable> _invalidatable;	// 8 = 0x8
    NSMutableSet *_items;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005a1a4
- (void)dealloc;	// IMP=0x000000000005a162
- (_Bool)containsItem:(id)arg1;	// IMP=0x000000000005a14c
- (unsigned long long)count;	// IMP=0x000000000005a136
- (void)removeItem:(id)arg1;	// IMP=0x000000000005a120
- (void)addItem:(id)arg1 withLength:(unsigned long long)arg2;	// IMP=0x000000000005a10a
- (id)_stateCapture;	// IMP=0x0000000000059f31
- (id)init;	// IMP=0x0000000000059d38
@property(readonly, nonatomic) NSSet *items;

@end
