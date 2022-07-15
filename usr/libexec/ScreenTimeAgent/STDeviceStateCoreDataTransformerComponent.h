//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface STDeviceStateCoreDataTransformerComponent : NSObject
{
}

+ (id)observationFiltersByTriggerPredicate;	// IMP=0x002000000003150b
+ (id)_validatedDeviceStateChangeTypeFromSecondaryType:(long long)arg1;	// IMP=0x00100000000314d5
+ (short)_osPlatformFromDevicePlatform:(long long)arg1;	// IMP=0x00100000000314bd
+ (long long)_devicePlatformFromOSPlatform:(short)arg1;	// IMP=0x00100000000314a8
+ (id)_writeDevice:(id)arg1 associatedUser:(id)arg2 inContext:(id)arg3;	// IMP=0x001000000003096a
+ (id)_appTombstoneFromCoreDataChange:(id)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000306e7
+ (id)_appFromCoreDataChange:(id)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000302be
+ (id)_allInstalledAppsForUserDeviceState:(id)arg1 inContext:(id)arg2;	// IMP=0x001000000002ffea
+ (id)_localDeviceFromPrimitives:(id)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002fe2b
+ (id)_deviceWithID:(id)arg1 associatedUser:(id)arg2 inContext:(id)arg3;	// IMP=0x001000000002f8dc
+ (id)handleDeviceStateChange:(id)arg1 deviceInformationPrimitives:(id)arg2 container:(id)arg3;	// IMP=0x001000000002f133
+ (id)deviceStateChangeForLocalDeviceUsingDeviceInformationPrimitives:(id)arg1 persistentContainer:(id)arg2;	// IMP=0x001000000002ec14
+ (id)deviceStateChangeForCoreDataChanges:(id)arg1 deviceInformationPrimitives:(id)arg2 container:(id)arg3 error:(id *)arg4;	// IMP=0x001000000002e0e5

@end
