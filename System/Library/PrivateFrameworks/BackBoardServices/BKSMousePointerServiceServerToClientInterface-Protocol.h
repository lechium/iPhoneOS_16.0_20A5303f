//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BackBoardServices/NSObject-Protocol.h>

@class BKSMousePointerDevicePreferences, NSSet;
@protocol __BKSMousePointerDevice__;

@protocol BKSMousePointerServiceServerToClientInterface <NSObject>
- (oneway void)pointerGlobalDevicePreferencesDidChange:(BKSMousePointerDevicePreferences *)arg1;
- (oneway void)pointingDevicesDidChange:(NSSet<__BKSMousePointerDevice__> *)arg1;
@end

