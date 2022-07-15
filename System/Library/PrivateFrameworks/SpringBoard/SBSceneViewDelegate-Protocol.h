//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class BSUIAnimationFactory, SBSceneView;

@protocol SBSceneViewDelegate <NSObject>

@optional
- (void)sceneView:(SBSceneView *)arg1 changedPreferredStatusBarStyleTo:(long long)arg2;
- (BSUIAnimationFactory *)animationFactoryForImplicitTransitionFromMode:(long long)arg1 toMode:(long long)arg2 defaultFactory:(BSUIAnimationFactory *)arg3;
@end
