//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIViewPropertyAnimator;

__attribute__((visibility("hidden")))
@interface _UIDragAnimatingWrapper : NSObject
{
    UIViewPropertyAnimator *_animator;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000613a0e
- (void)_api_addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000006139f8
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000006139e2
- (void)addAnimations:(CDUnknownBlockType)arg1;	// IMP=0x00000000006139cc
- (id)initWithPropertyAnimator:(id)arg1;	// IMP=0x0000000000613961

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
