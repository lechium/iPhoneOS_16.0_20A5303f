//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/NSObject-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue;

@protocol MKMapServiceWalletMerchantTicket <NSObject>
- (void)cancel;
- (void)submitWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 handler:(void (^)(MKWalletMerchantResponse *, NSError *))arg2;
@end
