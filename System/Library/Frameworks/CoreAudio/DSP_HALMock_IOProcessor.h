//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol HAL_DSP_HostCallbacks;

__attribute__((visibility("hidden")))
@interface DSP_HALMock_IOProcessor : NSObject
{
    int _featureFlag;	// 8 = 0x8
    void *_dspCallbacks;	// 16 = 0x10
    id <HAL_DSP_HostCallbacks> _hostCallbacks;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000049b87
@property(nonatomic) int featureFlag; // @synthesize featureFlag=_featureFlag;
@property(retain, nonatomic) id <HAL_DSP_HostCallbacks> hostCallbacks; // @synthesize hostCallbacks=_hostCallbacks;
@property(nonatomic) void *dspCallbacks; // @synthesize dspCallbacks=_dspCallbacks;
- (id)getCustomProperty:(struct AudioObjectPropertyAddress)arg1;	// IMP=0x0000000000049b3e
- (_Bool)setCustomProperty:(struct AudioObjectPropertyAddress)arg1 withData:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000049b36
- (_Bool)hasCustomProperty:(struct AudioObjectPropertyAddress)arg1;	// IMP=0x0000000000049b2e
- (id)getCustomPropertyList;	// IMP=0x0000000000049b26
- (id)adaptToConfigurationChange:(id)arg1 withCallbacks:(void *)arg2 error:(id *)arg3;	// IMP=0x0000000000049400
- (id)negotiateConfigurationChange:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000049360
- (id)basic_negotiateConfigurationChange:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000048a66
- (id)conference_negotiateConfigurationChange:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000047458
- (id)retrieveFormats:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004743f
- (void)dealloc;	// IMP=0x00000000000473e5
- (id)init;	// IMP=0x000000000004738e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

