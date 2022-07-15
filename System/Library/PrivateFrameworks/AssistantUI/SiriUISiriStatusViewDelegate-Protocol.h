//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantUI/NSObject-Protocol.h>

@class SiriUISiriStatusView;

@protocol SiriUISiriStatusViewDelegate <NSObject>
- (struct UIEdgeInsets)safeAreaInsetsForSiriStatusView:(SiriUISiriStatusView *)arg1;
- (void)siriStatusViewHoldDidEnd:(SiriUISiriStatusView *)arg1;
- (void)siriStatusViewHoldDidBegin:(SiriUISiriStatusView *)arg1;
- (void)siriStatusViewWasTapped:(SiriUISiriStatusView *)arg1;
- (float)audioLevelForSiriStatusView:(SiriUISiriStatusView *)arg1;
@end
