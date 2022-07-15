//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsUI/NSObject-Protocol.h>

@class NSString, NSURL;

@protocol FCAppActivityReceiver <NSObject>
- (void)sceneWillResignActiveWithSceneID:(NSString *)arg1;
- (void)sceneWillConnect;
- (void)sceneWillEnterForeground;
- (void)sceneDidBecomeActiveWithURL:(NSURL *)arg1 sourceApplication:(NSString *)arg2 sceneID:(NSString *)arg3;
- (void)sceneDidBecomeActive;
- (void)sceneDidEnterBackgroundWithSceneID:(NSString *)arg1;
- (void)sceneDidEnterBackground;
@end
