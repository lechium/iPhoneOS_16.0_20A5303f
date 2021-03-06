//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AWUnitTestFaceDetectOperation;
@protocol BKDevicePearlDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWUnitTestPearlDevice : NSObject
{
    CDStruct_2c6bab44 _sampleStats;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_awQueue;	// 32 = 0x20
    AWUnitTestFaceDetectOperation *_lastOperation;	// 40 = 0x28
    CDUnknownBlockType _displayCallback;	// 48 = 0x30
    CDUnknownBlockType _smartCoverCallback;	// 56 = 0x38
    _Bool _facePresent;	// 64 = 0x40
    _Bool _pearlError;	// 65 = 0x41
    id <BKDevicePearlDelegate> _delegate;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
    CDStruct_2c6bab44 *_sampleStatsPtr;	// 88 = 0x58
}

+ (id)sharedDevice;	// IMP=0x0010000000016cb7
- (void).cxx_destruct;	// IMP=0x0000000000016631
@property _Bool pearlError; // @synthesize pearlError=_pearlError;
@property _Bool facePresent; // @synthesize facePresent=_facePresent;
@property CDStruct_2c6bab44 *sampleStatsPtr; // @synthesize sampleStatsPtr=_sampleStatsPtr;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <BKDevicePearlDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setPearlErrorState:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016567
- (void)setPearlErrorState:(_Bool)arg1;	// IMP=0x00000000000163e3
- (void)setSmartCoverCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016356
- (void)setSmartCoverClosed:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001630a
- (void)setSmartCoverClosed:(_Bool)arg1;	// IMP=0x0000000000016186
- (void)setDisplayCallback:(CDUnknownBlockType)arg1;	// IMP=0x00000000000160f9
- (void)setDisplayState:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000160ad
- (void)setDisplayState:(_Bool)arg1;	// IMP=0x0000000000015f29
- (void)setSampleState:(_Bool)arg1 deliverEvent:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000015ece
- (void)setSampleState:(_Bool)arg1 deliverEvent:(_Bool)arg2;	// IMP=0x0000000000015d3d
- (void)setSampleState:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015cf1
- (void)setSampleState:(_Bool)arg1;	// IMP=0x0000000000015cda
- (void)resetStats;	// IMP=0x0000000000015c8f
- (void)getStatsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015c02
- (void)deliverPearlDeviceState:(long long)arg1;	// IMP=0x0000000000015b86
- (void)deliverPearlDeviceEvent:(long long)arg1;	// IMP=0x0000000000015b0a
- (id)createPresenceDetectOperationWithError:(id *)arg1;	// IMP=0x0000000000015a51
- (id)init;	// IMP=0x00000000000159ee

@end

