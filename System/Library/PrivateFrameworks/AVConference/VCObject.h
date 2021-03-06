//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VCDispatchTimer;

__attribute__((visibility("hidden")))
@interface VCObject : NSObject
{
    id _reportingAgent;	// 8 = 0x8
    VCDispatchTimer *_timeoutTimer;	// 16 = 0x10
    NSString *_logPrefix;	// 24 = 0x18
    struct _opaque_pthread_mutex_t _mutex;	// 32 = 0x20
    struct _opaque_pthread_mutex_t _timeoutMutex;	// 96 = 0x60
}

@property(retain, nonatomic) NSString *logPrefix; // @synthesize logPrefix=_logPrefix;
- (void)stopTerminationTimer;	// IMP=0x00000000003ee164
- (void)startTerminationTimer:(unsigned int)arg1 terminationType:(int)arg2;	// IMP=0x00000000003edea6
- (void)stopTimeoutTimer;	// IMP=0x00000000003ede94
- (void)startTimeoutTimer;	// IMP=0x00000000003ede78
- (void)startDeallocTimerWithTimeout:(unsigned int)arg1;	// IMP=0x00000000003ede61
- (void)startDeallocTimer;	// IMP=0x00000000003ede4a
@property(nonatomic) struct opaqueRTCReporting *reportingAgent;
- (void)unlock;	// IMP=0x00000000003edde0
- (void)lock;	// IMP=0x00000000003eddd2
- (void)dealloc;	// IMP=0x00000000003edd46
- (id)init;	// IMP=0x00000000003edcbe

@end

