//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AppletSubcredentialRangingSuspensionReasons
{
}

+ (id)databaseTable;	// IMP=0x004000000008c9b5
+ (id)_predicateForPaymentApplicationPID:(long long)arg1;	// IMP=0x001000000008c942
+ (id)_predicateForAppletSubcredentialPID:(long long)arg1;	// IMP=0x001000000008c8cf
+ (_Bool);	// IMP=0x001000000008c743
+ (unsigned long long)suspensionReasonsForCredential:(id)arg1 forPaymentApplication:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000008c468
+ (id)insertOrUpdateSubcredentialRangingSuspensionReasonForCredential:(id)arg1 forPaymentApplication:(id)arg2 withReasons:(unsigned long long)arg3 inDatabase:(id)arg4;	// IMP=0x001000000008bffc
- (id)initWithSubcredential:(id)arg1 forPaymentApplication:(id)arg2 withRangingSuspensionReasons:(unsigned long long)arg3 inDatabase:(id)arg4;	// IMP=0x004000000008c145

@end
