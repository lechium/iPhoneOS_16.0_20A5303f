//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMSettings.h>

@class NATreeNode, NSString;

@interface HMSettings (HFDebugging)
+ (id)hf_LoadSettingsAllowlist:(unsigned long long)arg1;	// IMP=0x00100000002a57ea
+ (void)hf_resetAllowlists;	// IMP=0x00100000002a57a9
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x00100000000a75e7
- (id)hf_accessorySettingItemAtKeyPath:(id)arg1;	// IMP=0x00100000002a5c51
- (id)hf_accessorySettingAtKeyPath:(id)arg1;	// IMP=0x00100000002a5bbf
- (id)hf_accessorySettingGroupAtKeyPath:(id)arg1;	// IMP=0x00100000002a5b2d
@property(readonly, nonatomic) NATreeNode *hf_codex;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
