//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, OspreyDeferredObject;

__attribute__((visibility("hidden")))
@interface OspreyClientStreamContextPromise : NSObject
{
    OspreyDeferredObject *_deferredContext;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000af53
- (void)writeFrame:(id)arg1 compressed:(_Bool)arg2;	// IMP=0x000000000000ae9a
- (void)writeFrame:(id)arg1;	// IMP=0x000000000000adec
- (void)finishWriting;	// IMP=0x000000000000adba
- (void)fulfill:(id)arg1;	// IMP=0x000000000000ada4
- (id)initWithFulfillmentQueue:(id)arg1;	// IMP=0x000000000000ad22

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

