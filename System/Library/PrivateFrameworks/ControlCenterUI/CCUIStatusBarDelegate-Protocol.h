//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ControlCenterUI/NSObject-Protocol.h>

@class CCUIStatusBar, UIStatusBarStyleRequest;

@protocol CCUIStatusBarDelegate <NSObject>
- (struct CGRect)compactAvoidanceFrameForStatusBar:(CCUIStatusBar *)arg1;
- (UIStatusBarStyleRequest *)compactTrailingStyleRequestForStatusBar:(CCUIStatusBar *)arg1;
@end

