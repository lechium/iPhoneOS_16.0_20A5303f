//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class UIStatusBarStyleAnimationParameters, UIStatusBarStyleAttributes, UIStatusBar_Base;

@protocol UIStatusBarManager <NSObject>
- (_Bool)statusBar:(UIStatusBar_Base *)arg1 shouldRequestStyle:(long long)arg2 animationParameters:(UIStatusBarStyleAnimationParameters *)arg3 forced:(_Bool)arg4;
- (_Bool)statusBar:(UIStatusBar_Base *)arg1 shouldRequestStyleAttributes:(UIStatusBarStyleAttributes *)arg2 animationParameters:(UIStatusBarStyleAnimationParameters *)arg3 forced:(_Bool)arg4;
- (_Bool)statusBar:(UIStatusBar_Base *)arg1 shouldSetAlpha:(double)arg2;
@end
