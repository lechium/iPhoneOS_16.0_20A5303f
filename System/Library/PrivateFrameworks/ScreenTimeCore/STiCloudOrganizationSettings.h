//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "STCoreOrganizationSettings.h"

@class NSString, STiCloudOrganization;

__attribute__((visibility("hidden")))
@interface STiCloudOrganizationSettings : STCoreOrganizationSettings
{
}

+ (id)serializableClassName;	// IMP=0x0010000000035458
- (void)setPasscode:(id)arg1;	// IMP=0x00000000000351bc
- (id)dictionaryRepresentation;	// IMP=0x0000000000035048
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;	// IMP=0x0000000000034c00
- (id)computeUniqueIdentifier;	// IMP=0x0000000000034be6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) STiCloudOrganization *organization; // @dynamic organization;
@property(copy, nonatomic) NSString *recoveryAltDSID; // @dynamic recoveryAltDSID;
@property(readonly) Class superclass;

@end

