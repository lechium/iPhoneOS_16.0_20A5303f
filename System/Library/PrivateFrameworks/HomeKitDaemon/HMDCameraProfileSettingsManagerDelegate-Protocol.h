//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraProfileSettingsManager;

@protocol HMDCameraProfileSettingsManagerDelegate <NSObject>
- (void)cameraProfileSettingsManager:(HMDCameraProfileSettingsManager *)arg1 canDisableRecordingWithCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)cameraProfileSettingsManager:(HMDCameraProfileSettingsManager *)arg1 canEnableRecordingWithCompletion:(void (^)(_Bool, NSError *))arg2;
@end

