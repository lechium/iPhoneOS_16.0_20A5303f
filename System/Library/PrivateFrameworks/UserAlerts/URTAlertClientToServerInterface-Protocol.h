//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserAlerts/NSObject-Protocol.h>

@class URTAlert;

@protocol URTAlertClientToServerInterface <NSObject>
- (oneway void)dismissAlert:(URTAlert *)arg1;
- (oneway void)presentAlert:(URTAlert *)arg1;
@end

