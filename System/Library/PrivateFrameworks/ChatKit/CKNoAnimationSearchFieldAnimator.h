//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKNoAnimationSearchFieldAnimator : NSObject
{
    _Bool _appearing;	// 8 = 0x8
}

@property(nonatomic, getter=isAppearing) _Bool appearing; // @synthesize appearing=_appearing;
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000003aeeb0
- (void)animateTransition:(id)arg1;	// IMP=0x00000000003aed6b
- (id)initWithAppearing:(_Bool)arg1;	// IMP=0x00000000003aed30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
