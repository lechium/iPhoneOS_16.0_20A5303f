//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCAsyncSerialQueue, MISSING_TYPE, NSArray, NSString;

@interface FRPrivateDataUpdateCoordinator : NSObject
{
    MISSING_TYPE *_privateDataControllers;	// 8 = 0x8
    FCAsyncSerialQueue *_updateQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000b88ec
@property(retain, nonatomic) FCAsyncSerialQueue *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(copy, nonatomic) NSArray *privateDataControllers; // @synthesize privateDataControllers=_privateDataControllers;
- (void)networkReachabilityDidChange:(id)arg1;	// IMP=0x00100000000b888b
- (void)privateDataControllerDidBecomeDirty:(id)arg1;	// IMP=0x00100000000b8830
- (void)_updatePrivateDataControllersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b84a8
- (void)markAllPrivateDataControllersAsNeedingUpdate;	// IMP=0x00100000000b837b
- (void)updatePrivateDataControllersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b8319
- (id)init;	// IMP=0x00100000000b7ff7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

