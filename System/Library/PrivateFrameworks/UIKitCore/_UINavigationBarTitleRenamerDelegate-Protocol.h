//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class _UINavigationBarTitleRenamer, _UINavigationBarTitleRenamerSession;

@protocol _UINavigationBarTitleRenamerDelegate <NSObject>
- (void)titleRenamer:(_UINavigationBarTitleRenamer *)arg1 didEndSession:(_UINavigationBarTitleRenamerSession *)arg2;
- (void)titleRenamer:(_UINavigationBarTitleRenamer *)arg1 willEndSession:(_UINavigationBarTitleRenamerSession *)arg2;
- (void)titleRenamer:(_UINavigationBarTitleRenamer *)arg1 willStartSession:(_UINavigationBarTitleRenamerSession *)arg2;
@end

