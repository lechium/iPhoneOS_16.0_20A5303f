//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MSPSenderLiveStrategy
{
    _Bool _needToSendRoute;	// 72 = 0x48
}

- (void)trafficUpdated:(id)arg1;	// IMP=0x0000000000023b01
- (void)routeUpdated:(id)arg1;	// IMP=0x0000000000023a6a
- (void)waypointsUpdated:(id)arg1;	// IMP=0x00000000000239d3
- (void)etaUpdated:(id)arg1;	// IMP=0x0000000000023745
- (void)setState:(id)arg1;	// IMP=0x0000000000023645
- (void)addParticipants:(id)arg1;	// IMP=0x000000000002352f
- (_Bool)_needToSendEtaRefreshFor:(id)arg1;	// IMP=0x00000000000232b2

@end

