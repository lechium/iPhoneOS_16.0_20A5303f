//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperationQueue.h>

@interface NSOperationQueue (FCAsyncBlockAdditions)
+ (id)fc_ckRequestOperationQueue;	// IMP=0x00800000002f33bf
+ (id)fc_sharedSerialQueue;	// IMP=0x00800000002f3318
+ (id)fc_sharedConcurrentQueue;	// IMP=0x00800000002f3286
- (void)fc_addAsyncOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000018361d
- (void)fc_addMainThreadOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000002f3451
@end

