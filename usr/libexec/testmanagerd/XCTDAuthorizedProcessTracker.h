//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface XCTDAuthorizedProcessTracker : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_pidsToDispatchSources;	// 16 = 0x10
    CDUnknownBlockType _dispatchSourceProvider;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000002e6b7
@property(readonly, copy) CDUnknownBlockType dispatchSourceProvider; // @synthesize dispatchSourceProvider=_dispatchSourceProvider;
@property(readonly) NSMutableDictionary *pidsToDispatchSources; // @synthesize pidsToDispatchSources=_pidsToDispatchSources;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)_dispatchSourceForProcessID:(int)arg1;	// IMP=0x001000000002e39d
- (_Bool)hasAuthorizedProcessID:(int)arg1;	// IMP=0x001000000002e233
- (void)authorizeProcessID:(int)arg1;	// IMP=0x001000000002df28
- (void)dealloc;	// IMP=0x001000000002de03
- (id)init;	// IMP=0x001000000002ddc5
- (id)initWithDispatchSourceProvider:(CDUnknownBlockType)arg1;	// IMP=0x001000000002dcfa

@end

