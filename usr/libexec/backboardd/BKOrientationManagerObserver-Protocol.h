//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class BKOrientationManager;

@protocol BKOrientationManagerObserver <NSObject>

@optional
- (void)orientationManager:(BKOrientationManager *)arg1 userInterfaceOrientationMayHaveChanged:(long long)arg2 isDeviceOrientationLocked:(_Bool)arg3;
- (void)orientationManager:(BKOrientationManager *)arg1 deviceOrientationMayHaveChanged:(long long)arg2 changeSource:(long long)arg3 isDeviceOrientationLocked:(_Bool)arg4;
@end
