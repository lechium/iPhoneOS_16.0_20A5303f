//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class UIGestureRecognizer;
@protocol PBUIIrisWallpaperPlaying;

@protocol PBUIIrisWallpaperPlayerDelegate <NSObject>

@optional
- (void)irisWallpaperPlayer:(id <PBUIIrisWallpaperPlaying>)arg1 didReplaceGestureRecognizer:(UIGestureRecognizer *)arg2 withGestureRecognizer:(UIGestureRecognizer *)arg3;
- (void)irisWallpaperPlayerIsInteractingDidChange:(id <PBUIIrisWallpaperPlaying>)arg1;
- (void)irisWallpaperPlayerPlaybackStateDidChange:(id <PBUIIrisWallpaperPlaying>)arg1;
@end
