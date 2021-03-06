//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUUID.h>

@class NSString;

@interface NSUUID (HomeKitClient)
+ (_Bool)hm_setAssistantIdentifierSalt:(id)arg1;	// IMP=0x0010000000688421
+ (id)hm_deriveUUIDForAssistantFromBaseUUID:(id)arg1;	// IMP=0x0010000000688406
+ (id)hm_deriveUUIDForAssistantFromBaseUUID:(id)arg1 withSalts:(id)arg2;	// IMP=0x001000000068834a
+ (void)hm_setIdentifierSalt:(id)arg1;	// IMP=0x00100000006882f2
+ (id)hm_deriveUUIDFromBaseUUID:(id)arg1;	// IMP=0x00100000006882d7
+ (id)hm_deriveUUIDFromBaseUUID:(id)arg1 withSalts:(id)arg2;	// IMP=0x001000000068821d
+ (id)hm_deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2;	// IMP=0x0010000000688201
+ (id)hm_deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;	// IMP=0x00100000006881e8
+ (id)hm_uuid:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;	// IMP=0x0010000000687ef4
- (id)hm_convertToData;	// IMP=0x00100000006869d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

