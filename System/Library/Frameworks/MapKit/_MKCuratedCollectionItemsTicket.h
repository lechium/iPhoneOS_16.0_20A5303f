//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapServiceTraits, NSString;
@protocol GEOMapServiceCuratedCollectionItemsTicket;

__attribute__((visibility("hidden")))
@interface _MKCuratedCollectionItemsTicket : NSObject
{
    id <GEOMapServiceCuratedCollectionItemsTicket> _ticket;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000d83aa
- (void)cancel;	// IMP=0x00000000000d8394
- (void)submitWithCallbackQueue:(id)arg1 handler:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d7bd7
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d7b93
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (id)initWithTicket:(id)arg1;	// IMP=0x00000000000d7b12

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
