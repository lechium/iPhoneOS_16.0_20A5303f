//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLVO2MaxSubscriptionAdapter : NSObject
{
    void *_subscription;	// 8 = 0x8
    _Bool _valid;	// 16 = 0x10
}

@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)invalidate;	// IMP=0x001000000074e3b3
- (void)onRetrocomputeStatusUpdate:(id)arg1;	// IMP=0x001000000074e27c
- (id)initWithSubscription:(void *)arg1;	// IMP=0x001000000074e220

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

