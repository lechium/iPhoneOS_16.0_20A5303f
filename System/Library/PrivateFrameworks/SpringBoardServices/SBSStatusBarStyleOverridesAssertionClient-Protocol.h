//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardServices/NSObject-Protocol.h>

@class NSSet, SBSStatusBarTapContextImpl;

@protocol SBSStatusBarStyleOverridesAssertionClient <NSObject>
- (void)statusBarTappedWithContext:(SBSStatusBarTapContextImpl *)arg1 reply:(void (^)(void))arg2;
- (void)invalidateStatusBarStyleOverridesAssertionsWithIdentifiers:(NSSet *)arg1;
@end

