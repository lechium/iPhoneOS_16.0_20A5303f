//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/NSObject-Protocol.h>

@class GKPlayer, GKSavedGame, NSArray;

@protocol GKSavedGameListener <NSObject>

@optional
- (void)player:(GKPlayer *)arg1 hasConflictingSavedGames:(NSArray *)arg2;
- (void)player:(GKPlayer *)arg1 didModifySavedGame:(GKSavedGame *)arg2;
@end
