//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, RTRoutineManager;

@interface MCRoutineHelper : NSObject
{
    RTRoutineManager *_routineManager;	// 8 = 0x8
    NSArray *_allLOIs;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000132fa
- (void)findMUIDsForPlaceInferences:(id)arg1 analytics:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000124bf
- (void)findWorkLocationsWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000120db
- (void)findNearbySignificantLocationsAtLocation:(id)arg1 inRadius:(double)arg2 numberOfVisitsBucketSize:(unsigned int)arg3 completionQueue:(id)arg4 finishedHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000011c19
- (void)findSignificantLocationWithLocation:(id)arg1 numberOfVisitsBucketSize:(unsigned int)arg2 completionQueue:(id)arg3 finishedHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000001189b
- (void)findSignificantLocationWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011738
- (id)init;	// IMP=0x00100000000116e2

@end

