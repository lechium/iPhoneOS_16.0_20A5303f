//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AFInstanceContext;
@protocol CSSiriRecordingInfoProviding;

@interface ADSettingsService
{
    AFInstanceContext *_instanceContext;	// 8 = 0x8
    id <CSSiriRecordingInfoProviding> _recordingInfoProvider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000010733d
// Error: Property attributes should begin with the type ('T') attribute, property name: recordingInfoProvider
// Property attributes: (null)

- (void)_setBoolSetting:(id)arg1 currentValueBlock:(CDUnknownBlockType)arg2 setValueBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000107007
- (id)_wrapBoolSettingValue:(_Bool)arg1;	// IMP=0x0010000000106f9b
- (void)_setNoiseManagement:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001060b8
- (void)_getNoiseManagement:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001052de
- (void)_getPlaybackAudioRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001051cd
- (void)_setVoiceOver:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001050cc
- (void)_getVoiceOver:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000104fc9
- (void)_registerCommandHandlersWithRegistry:(id)arg1;	// IMP=0x0010000000104eba
- (id)initWithRecordingInfoProvider:(id)arg1 instanceContext:(id)arg2;	// IMP=0x0010000000104de3

@end

