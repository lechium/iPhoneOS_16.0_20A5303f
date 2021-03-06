//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, STPresetsClient;

@interface FAPresetsProvider : NSObject
{
    STPresetsClient *_stPresetsClient;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000b58c
@property(retain, nonatomic) STPresetsClient *stPresetsClient; // @synthesize stPresetsClient=_stPresetsClient;
- (void)currentConfigurationForDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b2d9
- (id)init;	// IMP=0x001000000000b1e3
- (id)availablePresets;	// IMP=0x001000000000affa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

