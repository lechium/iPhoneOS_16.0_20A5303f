//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (CKSQLiteCompiledStatement)
- (id)cksqlcs_appendSQLConstantValueToString:(id)arg1;	// IMP=0x002000000005c88e
- (void *)cksqlcs_textBindingValue:(int *)arg1 destructor:(CDUnknownFunctionPointerType *)arg2 error:(id *)arg3;	// IMP=0x002000000009c14c
- (id)CKStringByReplacingUUIDsWithString:(id)arg1;	// IMP=0x00200000000a57cb
- (id)CKBase64DecodedString;	// IMP=0x00200000000a5765
- (id)CKBase64EncodedURLSafeString;	// IMP=0x00200000000a5710
- (id)CKNilIfLengthZero;	// IMP=0x00200000000a56e5
- (id)CKSanitizedPath;	// IMP=0x00200000000a567a
- (id)CKSHA256;	// IMP=0x00200000000a5586
- (id)CKUnmangledDocumentNameFromURLFragment;	// IMP=0x00200000000a54f7
- (id)CKMangledDocumentNameForURLFragment;	// IMP=0x00200000000a51ea
- (id)CKSafeStringForURLWithCharsToBeEscaped:(id)arg1;	// IMP=0x00200000000a5163
- (id)CKSafeStringForURLPathComponent;	// IMP=0x00200000000a514a
- (id)CKSafeHashStringForPathComponent;	// IMP=0x00200000000a5054
- (id)CKSafeStringForPathComponent;	// IMP=0x00200000000a4fbd
- (id)CKDPIdentifier_MergeableValue;	// IMP=0x00200000000a9c2c
- (id)CKDPIdentifier_Zone;	// IMP=0x00200000000a9c15
- (id)CKDPIdentifier_ShareId;	// IMP=0x00200000000a9bfe
- (id)CKDPIdentifier_Subscription;	// IMP=0x00200000000a9be7
- (id)CKDPIdentifier_Device;	// IMP=0x00200000000a9bd0
- (id)CKDPIdentifier_User;	// IMP=0x00200000000a9bb9
- (id)CKDPIdentifier_Record;	// IMP=0x00200000000a9ba2
- (id)CKDPIdentifier_Raw;	// IMP=0x00200000000a9b8e
- (id)_CKDPIdentifierWithType:(int)arg1;	// IMP=0x00200000000a9a67
- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00200000001af437
- (id)ckShortDescription;	// IMP=0x00200000001fb3bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

