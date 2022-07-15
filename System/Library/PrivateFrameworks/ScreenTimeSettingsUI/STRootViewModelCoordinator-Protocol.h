//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenTimeSettingsUI/NSObject-Protocol.h>

@class NSNumber, NSObject, NSString, STRootViewModel, STUIUser;
@protocol STCommunicationSafetyViewModelCoordinator, STContentPrivacyViewModelCoordinator, STTimeAllowancesViewModelCoordinator, STUsageDetailsViewModelCoordinator;

@protocol STRootViewModelCoordinator <NSObject>
@property(readonly, nonatomic, getter=isPasscodeEnabled) _Bool passcodeEnabled;
@property(nonatomic) _Bool hasAlreadyEnteredPINForSession;
@property(nonatomic) _Bool hasShownMiniBuddy;
@property(readonly) NSObject<STCommunicationSafetyViewModelCoordinator> *communicationSafetyCoordinator;
@property(readonly) NSObject<STTimeAllowancesViewModelCoordinator> *timeAllowancesCoordinator;
@property(readonly) NSObject<STUsageDetailsViewModelCoordinator> *usageDetailsCoordinator;
@property(readonly) NSObject<STContentPrivacyViewModelCoordinator> *contentPrivacyCoordinator;
@property(readonly, nonatomic) STRootViewModel *viewModel;
- (void)setShareWebUsageEnabled:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setScreenTimeSyncingEnabled:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setScreenTimeEnabled:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)enableScreenTimeWithPIN:(NSString *)arg1 recoveryAltDSID:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)setPIN:(NSString *)arg1 recoveryAltDSID:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)setPIN:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (_Bool)validatePIN:(NSString *)arg1;
- (id)coordinatorForChild:(STUIUser *)arg1 deviceIdentifier:(NSString *)arg2 usageReportType:(NSNumber *)arg3;
@end
