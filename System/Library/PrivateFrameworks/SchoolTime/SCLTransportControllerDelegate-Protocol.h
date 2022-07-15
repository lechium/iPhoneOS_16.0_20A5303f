//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SchoolTime/NSObject-Protocol.h>

@class SCLScheduleSettings, SCLTransportController, SCLUnlockHistoryItem;

@protocol SCLTransportControllerDelegate <NSObject>
- (SCLScheduleSettings *)currentScheduleSettingsForTransportController:(SCLTransportController *)arg1;
- (void)transportController:(SCLTransportController *)arg1 didReceiveSchedule:(SCLScheduleSettings *)arg2 forInitialSync:(_Bool)arg3;
- (void)transportController:(SCLTransportController *)arg1 didReceiveUnlockHistoryItem:(SCLUnlockHistoryItem *)arg2;
@end
