//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface PaymentPolygonCache : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000735756
- (void)cachePolygon:(id)arg1 forLocation:(id)arg2;	// IMP=0x0010000000735130
- (_Bool)cachedPolygonForLocation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000073489a
- (void)_deleteCachedFiles;	// IMP=0x001000000073457b
- (id)init;	// IMP=0x00100000007344f9

@end

