//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/NSObject-Protocol.h>

@class CUTWiFiManager, NSDictionary;

@protocol CUTWiFiManagerDelegate <NSObject>

@optional
- (void)cutWiFiManager:(CUTWiFiManager *)arg1 generatedPowerReading:(NSDictionary *)arg2;
- (void)cutWiFiManagerLinkDidChange:(CUTWiFiManager *)arg1 context:(NSDictionary *)arg2;
- (void)cutWiFiManagerDeviceAttached:(CUTWiFiManager *)arg1;
@end

