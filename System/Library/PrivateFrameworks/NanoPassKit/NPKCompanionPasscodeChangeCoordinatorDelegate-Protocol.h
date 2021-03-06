//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoPassKit/NSObject-Protocol.h>

@protocol NPKCompanionPasscodeChangeCoordinatorProtocol;

@protocol NPKCompanionPasscodeChangeCoordinatorDelegate <NSObject>
- (void)passcodeChangeCoordinator:(id <NPKCompanionPasscodeChangeCoordinatorProtocol>)arg1 checkRemoteDeviceLockStateWithCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)passcodeChangeCoordinator:(id <NPKCompanionPasscodeChangeCoordinatorProtocol>)arg1 remoteDeviceShouldCancelPasscodeChangeWithCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)passcodeChangeCoordinator:(id <NPKCompanionPasscodeChangeCoordinatorProtocol>)arg1 remoteDeviceShouldInitiatePasscodeChangeForType:(unsigned long long)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

