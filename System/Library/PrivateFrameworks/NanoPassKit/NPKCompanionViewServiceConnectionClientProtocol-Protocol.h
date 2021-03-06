//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoPassKit/PDXPCServiceExportedInterface-Protocol.h>

@class NSDictionary, NSString, PKCurrencyAmount;

@protocol NPKCompanionViewServiceConnectionClientProtocol <PDXPCServiceExportedInterface>
- (void)handleCompanionItemSelectionRequestCancelledForRequestIdentifier:(NSString *)arg1;
- (void)handleCompanionItemSelectionRequestFinishedWithRenewalAmount:(PKCurrencyAmount *)arg1 serviceProviderData:(NSDictionary *)arg2 forRequestIdentifier:(NSString *)arg3;
- (void)handleCompanionValueEntryCancelledForRequestIdentifier:(NSString *)arg1;
- (void)handleCompanionValueEntryFinishedWithCurrencyAmount:(PKCurrencyAmount *)arg1 forRequestIdentifier:(NSString *)arg2;
@end

