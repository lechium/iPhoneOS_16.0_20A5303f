//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@class NSDate, NSDictionary, NSString;

@interface NSError (HDSQLiteDatabase)
+ (id)hk_errorWithCodableError:(id)arg1;	// IMP=0x0020000000063aab
- (id)hd_failingSQLStatement;	// IMP=0x0010000000092f9c
- (_Bool)hd_isConstraintViolation;	// IMP=0x001000000003edbe
- (_Bool)hd_isNotADatabaseError;	// IMP=0x0010000000092f76
- (_Bool)hd_isDatabaseCorruptionError;	// IMP=0x0010000000092f5e
- (int)hd_sqliteExtendedErrorCode;	// IMP=0x0010000000092dd0
- (id)hk_codableError;	// IMP=0x0010000000065721
- (id)hd_persistentMessage;	// IMP=0x00100000003cc5ce
- (double)hd_cloudKitRetryDelay;	// IMP=0x00100000004f849f
- (void)hd_enumerateCloudKitPartialErrorsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000004f8289
- (id)hd_errorForAnalytics;	// IMP=0x00100000004f7f47
- (id)hd_errorSurfacingFatalCloudKitPartialFailureForAnalytics;	// IMP=0x00100000004f7cf2
- (id)hd_errorSurfacingFatalCloudKitPartialFailure;	// IMP=0x00100000004f7a73
- (_Bool)hd_isCorruptionError;	// IMP=0x00100000004f7968
- (id)hd_errorStrippingCloudKitPartialFailuresWithShouldIgnoreBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000004f7497
- (id)hd_errorStrippingExpectedCloudKitPartialFailures;	// IMP=0x00100000004f73e2
- (_Bool)hd_shouldPreventCloudKitCacheUpdate;	// IMP=0x00100000004f7186
- (_Bool)hd_isManateeIdentityLossError;	// IMP=0x00100000004f6f2a
- (id)hd_cloudKitErrorRequiringUserAction;	// IMP=0x00100000004f676a
- (_Bool)hd_isResponseTimeout;	// IMP=0x001000000077313d
@property(readonly, nonatomic, getter=hd_isFromRequest) _Bool hd_fromRequest;
@property(readonly, nonatomic) NSDictionary *hd_persistentUserInfo;
@property(readonly, nonatomic) NSString *hd_messageIDSDeviceIdentifier;
@property(readonly, nonatomic) NSString *hd_messageIDSIdentifier;
@property(readonly, nonatomic) NSDate *hd_messageSent;
@property(readonly, nonatomic) unsigned short hd_messageID;
@end

