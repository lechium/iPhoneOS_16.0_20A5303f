//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class NSArray, WFAlarmChooserViewController;

@protocol WFAlarmChooserViewControllerDelegate <NSObject>
- (void)alarmChooserViewControllerDidCancel:(WFAlarmChooserViewController *)arg1;
- (void)alarmChooserViewController:(WFAlarmChooserViewController *)arg1 didFinishWithChosenAlarms:(NSArray *)arg2;
@end

