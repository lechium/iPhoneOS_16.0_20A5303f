//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ADAVSystemControllerLifecycleManager : NSObject
{
}

+ (id)sharedManager;	// IMP=0x00400000001140f0
- (void)removeObserver:(id)arg1;	// IMP=0x0040000000114190
- (void)addObserver:(id)arg1;	// IMP=0x001000000011418a
- (void)getAVSystemControllerWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000114174
- (id)init;	// IMP=0x0010000000114145

@end
