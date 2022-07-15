//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PDXPCServiceExportedInterface-Protocol.h"

@class NSString, PKPayment, PKPaymentAuthorizationResult, PKPaymentClientUpdate, PKPaymentHostUpdate, PKRemoteDevice, PKRemotePaymentInstrument, PKRemotePaymentRequest, PKVirtualCard;

@protocol PDContinuityPaymentServiceExportedInterface <PDXPCServiceExportedInterface>
- (void)sendPaymentSetupRequest:(PKRemoteDevice *)arg1 appDisplayName:(NSString *)arg2 handler:(void (^)(NSError *))arg3;
- (void)fetchRemoteDevicesWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)canMakePaymentsWithRemoteDevicesWithHandler:(void (^)(_Bool, NSError *))arg1;
- (void)hasRemoteDevicesWithHandler:(void (^)(_Bool, NSError *))arg1;
- (void)cancelRemotePaymentRequest:(PKRemotePaymentRequest *)arg1 handler:(void (^)(NSError *))arg2;
- (void)presentContinuityPaymentInterfaceWithRequestIdentifier:(NSString *)arg1 handler:(void (^)(NSError *))arg2;
- (void)requestInstrumentThumbnail:(PKRemotePaymentInstrument *)arg1 forRemoteDevice:(PKRemoteDevice *)arg2 size:(struct CGSize)arg3 handler:(void (^)(NSData *, NSError *))arg4;
- (void)sendPaymentResult:(PKPaymentAuthorizationResult *)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2 handler:(void (^)(NSError *))arg3;
- (void)sendPayment:(PKPayment *)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2 handler:(void (^)(NSError *))arg3;
- (void)sendPaymentClientUpdate:(PKPaymentClientUpdate *)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2 handler:(void (^)(NSError *))arg3;
- (void)sendPaymentHostUpdate:(PKPaymentHostUpdate *)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2 handler:(void (^)(NSError *))arg3;
- (void)sendRemotePaymentRequest:(PKRemotePaymentRequest *)arg1 handler:(void (^)(NSError *))arg2;
- (void)updatePaymentDevicesWithHandler:(void (^)(NSError *))arg1;

@optional
- (void)promptDetailsForVirtualCard:(PKVirtualCard *)arg1 showNotification:(_Bool)arg2 handler:(void (^)(NSError *))arg3;
- (void)sendPaymentStatus:(long long)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2 handler:(void (^)(NSError *))arg3;
@end
