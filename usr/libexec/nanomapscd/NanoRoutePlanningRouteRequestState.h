//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NanoRouteManager;

@interface NanoRoutePlanningRouteRequestState
{
    NanoRouteManager *_routeManager;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000011420
- (void)stop;	// IMP=0x001000000001140e
- (void)cancelRequest;	// IMP=0x0010000000011350
- (void)_processIncomingRoutes:(id)arg1 traffic:(id)arg2 traceRecordingData:(id)arg3 error:(id)arg4;	// IMP=0x00100000000110b3
- (void)start;	// IMP=0x0010000000010a71
- (void)dealloc;	// IMP=0x0010000000010a0c

@end
