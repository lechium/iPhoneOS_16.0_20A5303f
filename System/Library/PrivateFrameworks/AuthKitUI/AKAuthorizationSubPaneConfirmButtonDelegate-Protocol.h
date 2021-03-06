//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthKitUI/NSObject-Protocol.h>

@class AKAuthorizationSubPaneConfirmButton;

@protocol AKAuthorizationSubPaneConfirmButtonDelegate <NSObject>
- (void)subPaneConfirmButtonPerformExternalAuthentication:(AKAuthorizationSubPaneConfirmButton *)arg1;
- (void)performAuthorization;
- (void)performPasswordAuthentication;
- (void)subpaneConfirmButtonDidFailBiometry:(AKAuthorizationSubPaneConfirmButton *)arg1;
- (void)subPaneConfirmButtonDidEnterProcessingState:(AKAuthorizationSubPaneConfirmButton *)arg1;

@optional
- (_Bool)validateReadyForAuthorization;
@end

