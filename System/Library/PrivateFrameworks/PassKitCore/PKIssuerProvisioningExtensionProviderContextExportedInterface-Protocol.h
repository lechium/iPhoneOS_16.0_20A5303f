//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSArray, NSData, NSString, PKAddPaymentPassRequestConfiguration;

@protocol PKIssuerProvisioningExtensionProviderContextExportedInterface <NSObject>
- (void)generateRequestWithEntryIdentifier:(NSString *)arg1 configuration:(PKAddPaymentPassRequestConfiguration *)arg2 certificateChain:(NSArray *)arg3 nonce:(NSData *)arg4 nonceSignature:(NSData *)arg5 completionHandler:(void (^)(PKAddPaymentPassRequest *))arg6;
- (void)remotePassEntriesWithCompletion:(void (^)(NSArray *))arg1;
- (void)passEntriesWithCompletion:(void (^)(NSArray *))arg1;
- (void)statusWithCompletion:(void (^)(PKIssuerProvisioningExtensionStatus *))arg1;
@end

