//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSData, NSNumber, NSString;

@interface IDSHomeKitCloudRelayAdminAccessTokenMessage : FTIDSMessage
{
    NSString *_serviceUserID;	// 232 = 0xe8
    NSString *;	// 240 = 0xf0
    NSData *_pairingToken;	// 248 = 0xf8
    NSString *_responseAccessoryID;	// 256 = 0x100
    NSData *_responseAdminAcccessToken;	// 264 = 0x108
    NSNumber *_responseExpiry;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x00200000004b89b0
@property(copy) NSNumber *responseExpiry; // @synthesize responseExpiry=_responseExpiry;
@property(copy) NSData *responseAdminAcccessToken; // @synthesize responseAdminAcccessToken=_responseAdminAcccessToken;
@property(copy) NSString *responseAccessoryID; // @synthesize responseAccessoryID=_responseAccessoryID;
@property(copy) NSData *pairingToken; // @synthesize pairingToken=_pairingToken;
@property(copy) NSString *accessoryID; // @synthesize accessoryID=_accessoryID;
@property(copy) NSString *serviceUserID; // @synthesize serviceUserID=_serviceUserID;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x00100000004b85b0
- (id)bagKey;	// IMP=0x00100000004b8590
- (id)messageBody;	// IMP=0x00100000004b8440
- (id)additionalMessageHeaders;	// IMP=0x00100000004b8260
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000004b7ff0

@end

