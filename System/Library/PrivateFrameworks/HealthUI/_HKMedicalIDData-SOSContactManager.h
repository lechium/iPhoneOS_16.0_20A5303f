//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/_HKMedicalIDData.h>

@interface _HKMedicalIDData (SOSContactManager)
+ (id)contactKeysToLoadForMedicalID;	// IMP=0x006000000011ea35
- (_Bool)consolidateSOSAndEmergencyContacts;	// IMP=0x00100000000700a8
- (id)_contactKeysToFetch;	// IMP=0x001000000012014f
- (_Bool)_updateIdentifierByPhoneNumberForEmergencyContact:(id)arg1 contactStore:(id)arg2;	// IMP=0x001000000011f882
- (_Bool)_autopopulateEmergencyContactsForSecondaryProfile;	// IMP=0x001000000011f585
- (_Bool)_updateExistingEmergencyContacts;	// IMP=0x001000000011ee5c
- (_Bool)updateEmergencyContactsAutopopulateForSecondaryProfileIfEmpty:(_Bool)arg1;	// IMP=0x001000000011ed34
- (_Bool)updateEmergencyContacts;	// IMP=0x001000000011ecc6
- (void)loadDataFromCNContact:(id)arg1;	// IMP=0x001000000011eb79
@end
