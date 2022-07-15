//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCEmulatedNetworkDoubleQueueReorder
{
    double _probability;	// 64 = 0x40
    double _correlation;	// 72 = 0x48
    _Bool _useMarkovModel;	// 80 = 0x50
    int _reorderGap;	// 84 = 0x54
    int _gap;	// 88 = 0x58
    int _state;	// 92 = 0x5c
}

- (void)push:(id)arg1;	// IMP=0x0000000000226d58
- (_Bool)shouldSendPacketImmediatelyMM;	// IMP=0x0000000000226c25
- (void)dealloc;	// IMP=0x0000000000226bd3
- (id)initWithPolicies:(id)arg1;	// IMP=0x0000000000226998

@end
