//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSProxy.h"

@class NSUndoManager;

__attribute__((visibility("hidden")))
@interface NSUndoManagerProxy : NSProxy
{
    NSUndoManager *_manager;	// 8 = 0x8
    Class _targetClass;	// 16 = 0x10
}

- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x000000000059f00f
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000059eff2
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000059efd5
- (void)superRelease;	// IMP=0x000000000059ef83
- (oneway void)release;	// IMP=0x000000000059ef1e
- (_Bool)_tryRetain;	// IMP=0x000000000059eead
- (id)retain;	// IMP=0x000000000059ee48
- (void)setTargetClass:(Class)arg1;	// IMP=0x000000000059ee37
- (id)initWithManager:(id)arg1;	// IMP=0x000000000059ee23

@end

