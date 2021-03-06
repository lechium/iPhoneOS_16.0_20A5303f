//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol VCHardwareSettingsMacProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsScreenAirplayMac
{
    id <VCHardwareSettingsMacProtocol> _hardwareSettings;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0060000000151f40
- (unsigned int)tilesPerFrame:(int)arg1 hdrMode:(unsigned long long)arg2;	// IMP=0x0000000000152278
- (_Bool)setupH264Rules;	// IMP=0x0000000000152075
- (_Bool)setupRules;	// IMP=0x0000000000152063
- (void)initSupportedPayloads;	// IMP=0x000000000015204c
- (id)initWithHardwareSettings:(id)arg1;	// IMP=0x0000000000151f48

@end

