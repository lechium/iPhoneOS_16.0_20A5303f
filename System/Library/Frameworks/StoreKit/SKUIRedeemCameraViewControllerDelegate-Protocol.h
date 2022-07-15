//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKit/NSObject-Protocol.h>

@class NSString, SKUIRedeem, SKUIRedeemCameraViewController;

@protocol SKUIRedeemCameraViewControllerDelegate <NSObject>

@optional
- (void)overrideRedeemOperationWithCode:(NSString *)arg1 cameraRecognized:(_Bool)arg2 completion:(void (^)(SKUIRedeem *, NSError *))arg3;
- (void)redeemCameraViewController:(SKUIRedeemCameraViewController *)arg1 didFinishWithRedeem:(SKUIRedeem *)arg2;
@end
