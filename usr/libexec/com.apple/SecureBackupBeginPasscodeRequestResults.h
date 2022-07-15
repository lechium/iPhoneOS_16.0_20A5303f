//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface SecureBackupBeginPasscodeRequestResults : NSObject
{
    NSString *_iCloudEnvironment;	// 8 = 0x8
    NSString *_escrowFederation;	// 16 = 0x10
    NSData *_cert;	// 24 = 0x18
    NSString *_dsid;	// 32 = 0x20
    NSString *_uuid;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000fda8
- (void).cxx_destruct;	// IMP=0x002000000001006e
@property(readonly) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly) NSString *dsid; // @synthesize dsid=_dsid;
@property(readonly) NSData *cert; // @synthesize cert=_cert;
@property(readonly) NSString *escrowFederation; // @synthesize escrowFederation=_escrowFederation;
@property(readonly) NSString *iCloudEnvironment; // @synthesize iCloudEnvironment=_iCloudEnvironment;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000fec8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000fdb0
- (id)description;	// IMP=0x001000000000fc7e
- (id)initWithStoredCertificate:(id)arg1 uuid:(id)arg2;	// IMP=0x001000000000fb5a

@end
