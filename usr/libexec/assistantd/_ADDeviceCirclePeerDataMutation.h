//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceCirclePeerData, AFHomeAccessoryInfo, NSString;

@interface _ADDeviceCirclePeerDataMutation : NSObject
{
    ADDeviceCirclePeerData *_base;	// 8 = 0x8
    NSString *_aceVersion;	// 16 = 0x10
    NSString *_assistantIdentifier;	// 24 = 0x18
    NSString *_buildVersion;	// 32 = 0x20
    NSString *_productType;	// 40 = 0x28
    NSString *_sharedUserIdentifier;	// 48 = 0x30
    NSString *_userAssignedDeviceName;	// 56 = 0x38
    NSString *_userInterfaceIdiom;	// 64 = 0x40
    AFHomeAccessoryInfo *_homeAccessoryInfo;	// 72 = 0x48
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasAceVersion:1;
        unsigned int hasAssistantIdentifier:1;
        unsigned int hasBuildVersion:1;
        unsigned int hasProductType:1;
        unsigned int hasSharedUserIdentifier:1;
        unsigned int hasUserAssignedDeviceName:1;
        unsigned int hasUserInterfaceIdiom:1;
        unsigned int hasHomeAccessoryInfo:1;
    } _mutationFlags;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000120f96
- (void)setHomeAccessoryInfo:(id)arg1;	// IMP=0x0010000000120f74
- (id)getHomeAccessoryInfo;	// IMP=0x0010000000120f3c
- (void)setUserInterfaceIdiom:(id)arg1;	// IMP=0x0010000000120f1c
- (id)getUserInterfaceIdiom;	// IMP=0x0010000000120ee4
- (void)setUserAssignedDeviceName:(id)arg1;	// IMP=0x0010000000120ec4
- (id)getUserAssignedDeviceName;	// IMP=0x0010000000120e8c
- (void)setSharedUserIdentifier:(id)arg1;	// IMP=0x0010000000120e6c
- (id)getSharedUserIdentifier;	// IMP=0x0010000000120e34
- (void)setProductType:(id)arg1;	// IMP=0x0010000000120e14
- (id)getProductType;	// IMP=0x0010000000120ddc
- (void)setBuildVersion:(id)arg1;	// IMP=0x0010000000120dbc
- (id)getBuildVersion;	// IMP=0x0010000000120d84
- (void)setAssistantIdentifier:(id)arg1;	// IMP=0x0010000000120d64
- (id)getAssistantIdentifier;	// IMP=0x0010000000120d2c
- (void)setAceVersion:(id)arg1;	// IMP=0x0010000000120d0c
- (id)getAceVersion;	// IMP=0x0010000000120cd4
- (_Bool)isDirty;	// IMP=0x0010000000120cc9
- (id)initWithBase:(id)arg1;	// IMP=0x0010000000120c5e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

