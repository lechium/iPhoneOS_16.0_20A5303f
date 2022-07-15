//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Email/NSObject-Protocol.h>

@class NSArray, NSProgress;

@protocol EMClientStateInterface <NSObject>
@property(copy) NSArray *visibleMailboxObjectIDs;
@property _Bool isRunningTests;
@property _Bool isForeground;
- (void)setStateForDemoMode:(void (^)(_Bool, NSError *))arg1;
- (NSProgress *)giveBoostWithCompletionBlock:(void (^)(void))arg1;
@end
