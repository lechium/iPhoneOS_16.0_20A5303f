//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, TabDocument, _WKRemoteObjectInterface;

__attribute__((visibility("hidden")))
@interface PageLoadTest : NSObject
{
    TabDocument *_tabDocument;	// 8 = 0x8
    NSArray *_pagesNeedingMemoryWarningSent;	// 16 = 0x10
    _WKRemoteObjectInterface *_eventsListenerInterface;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e98d8
- (void)didFinishPageLoadWithLoadData:(id)arg1;	// IMP=0x00000000000e9865
- (void)resetAfterWebProcessCrash;	// IMP=0x00000000000e9837
- (void)_enablePageLoadMeasurementCollection;	// IMP=0x00000000000e9765
- (void)_setUpPageLoadTestEventsListener;	// IMP=0x00000000000e96ba
- (void)_setUpWebProcessForPageLoadMeasurementCollection;	// IMP=0x00000000000e968c
- (void)_invalidateRemoteObjects;	// IMP=0x00000000000e95fd
- (void)dealloc;	// IMP=0x00000000000e95bf
- (id)initWithTabDocument:(id)arg1 pagesNeedingMemoryWarningSent:(id)arg2;	// IMP=0x00000000000e9507
- (id)initWithTabDocument:(id)arg1;	// IMP=0x00000000000e94f3

@end

