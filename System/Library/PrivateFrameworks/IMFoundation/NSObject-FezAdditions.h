//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (FezAdditions)
- (_Bool)isNull;	// IMP=0x00600000000023fe
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 ignoreMenuTracking:(_Bool)arg4;	// IMP=0x006000000000a115
- (id)__im_getInvocation:(id *)arg1;	// IMP=0x006000000000c627
- (id)__im_afterDelay:(double)arg1 modes:(id)arg2;	// IMP=0x006000000000c5c1
- (id)__im_afterDelay:(double)arg1;	// IMP=0x006000000000c57f
- (id)__im_onThread:(id)arg1;	// IMP=0x006000000000c56b
- (id)__im_onThread:(id)arg1 immediateForMatchingThread:(_Bool)arg2;	// IMP=0x006000000000c50a
- (id)__im_onDetachedThread;	// IMP=0x006000000000c4f6
- (id)__im_onMainThreadIfNecessary;	// IMP=0x006000000000c48b
- (id)__im_onMainThread;	// IMP=0x006000000000c425
@end

