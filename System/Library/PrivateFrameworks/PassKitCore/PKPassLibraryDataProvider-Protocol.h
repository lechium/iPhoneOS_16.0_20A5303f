//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSArray, NSString, PKAddSecureElementPassConfiguration, PKPass;

@protocol PKPassLibraryDataProvider <NSObject>
@property(readonly, nonatomic) _Bool canAddPaymentPass;
- (_Bool)canAddSecureElementPassWithConfiguration:(PKAddSecureElementPassConfiguration *)arg1;
- (NSString *)peerPaymentPassUniqueID;
- (PKPass *)passWithPassTypeIdentifier:(NSString *)arg1 serialNumber:(NSString *)arg2;
- (PKPass *)passWithUniqueID:(NSString *)arg1;
- (NSArray *)paymentPasses;
- (void)removePass:(PKPass *)arg1;

@optional
- (PKPass *)passForProvisioningCredentialHash:(NSString *)arg1;
- (NSArray *)passes;
- (unsigned long long)countOfPasses;
@end
