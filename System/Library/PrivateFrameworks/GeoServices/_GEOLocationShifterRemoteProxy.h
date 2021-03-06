//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSNumber, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOLocationShifterRemoteProxy : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSNumber *_shiftingEnabled;	// 16 = 0x10
    NSNumber *_shiftingFxnVersion;	// 24 = 0x18
    NSCache *_shiftFunctionCache;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000783b25
- (void)flushDiskCache;	// IMP=0x0000000000783a4a
- (unsigned int)locationShiftFunctionVersion;	// IMP=0x0000000000783739
- (_Bool)_isLocationShiftRequiredForCoordinateViaProxy:(CDStruct_c3b9c2ee)arg1;	// IMP=0x0000000000783548
- (_Bool)_isLocationShiftRequiredForCoordinateInProcess:(CDStruct_c3b9c2ee)arg1;	// IMP=0x0000000000783362
- (_Bool)isLocationShiftRequiredForCoordinate:(CDStruct_c3b9c2ee)arg1;	// IMP=0x00000000007832b4
- (_Bool)isLocationShiftEnabled;	// IMP=0x0000000000782e52
- (void)shiftLatLng:(id)arg1 auditToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000007829ef
@property(readonly, nonatomic) NSCache *memoryCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (id)init;	// IMP=0x00000000007827d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

