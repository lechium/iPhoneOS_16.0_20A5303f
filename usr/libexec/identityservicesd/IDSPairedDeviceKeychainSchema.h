//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSPairedDeviceKeychainSchema : NSObject
{
}

- (id)_migrateFromSinglePairedDeviceToMultipleWithKeychainDictionary:(id)arg1;	// IMP=0x00400000001b5cb0
- (id)migrateKeychainDictionary:(id)arg1;	// IMP=0x00100000001b5af0
- (unsigned long long)_migrationTypeForKeychainDictionary:(id)arg1;	// IMP=0x00100000001b5900
- (_Bool)isMigrationRequiredForKeychainDictionary:(id)arg1;	// IMP=0x00100000001b5880
- (id)_propertyDictionariesFromPairedDevices:(id)arg1;	// IMP=0x00100000001b5580
- (id)keychainDictionaryWithPairedDevices:(id)arg1;	// IMP=0x00100000001b5470

@end

