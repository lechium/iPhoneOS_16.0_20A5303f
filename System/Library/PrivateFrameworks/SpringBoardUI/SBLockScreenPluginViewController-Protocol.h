//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUI/NSObject-Protocol.h>

@class BSAnimationSettings;

@protocol SBLockScreenPluginViewController <NSObject>
- (_Bool)pluginAnimatesAppearanceTransition:(_Bool)arg1;

@optional
- (BSAnimationSettings *)pluginAnimateAppearanceTransition:(_Bool)arg1 withCompletion:(void (^)(void))arg2;
@end

