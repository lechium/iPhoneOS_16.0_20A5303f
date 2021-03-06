//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUI/NSObject-Protocol.h>

@class SACardSnippet, SAUIVisualResponseSnippet, SRUIFCardLoadingMonitor;

@protocol SRUIFCardLoadingObserver <NSObject>

@optional
- (void)cardLoadingMonitor:(SRUIFCardLoadingMonitor *)arg1 didReceiveVisualResponseSnippet:(SAUIVisualResponseSnippet *)arg2;
- (void)cardLoadingMonitor:(SRUIFCardLoadingMonitor *)arg1 didReceiveCardSnippet:(SACardSnippet *)arg2;
@end

