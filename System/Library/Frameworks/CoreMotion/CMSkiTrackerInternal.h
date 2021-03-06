//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMSkiData;
@protocol OS_dispatch_queue;

@interface CMSkiTrackerInternal : NSObject
{
    void *fLocationdConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *fInternalQueue;	// 16 = 0x10
    _Bool fStartedUpdates;	// 24 = 0x18
    CMSkiData *fMostRecentRecord;	// 32 = 0x20
    CDUnknownBlockType fHandler;	// 40 = 0x28
    double fRunDistanceOffset;	// 48 = 0x30
    double fRunElevationDescendedOffset;	// 56 = 0x38
}

- (void)_handleUpdates:(id)arg1;	// IMP=0x00000000001a9dbb
- (void)_queryUpdatesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a978f
- (void)_stopUpdates;	// IMP=0x00000000001a950b
- (void)_startUpdatesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a8dc4
- (void)_teardown;	// IMP=0x00000000001a8d6b
- (void)dealloc;	// IMP=0x00000000001a8d31
- (id)init;	// IMP=0x00000000001a8930

@end

