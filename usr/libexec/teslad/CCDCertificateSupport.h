//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CCDCertificateSupport : NSObject
{
}

+ (id)decodeCertificateFromBase64String:(id)arg1;	// IMP=0x0040000000001856
+ (id)base64Encodedx509CertificateStringFromCertificate:(id)arg1;	// IMP=0x00100000000017d1
+ (_Bool)verifySignature:(id)arg1 payload:(id)arg2 clientCertificate:(id)arg3;	// IMP=0x0010000000001555

@end
