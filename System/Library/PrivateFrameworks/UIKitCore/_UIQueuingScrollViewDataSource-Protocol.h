//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIView, _UIQueuingScrollView;

@protocol _UIQueuingScrollViewDataSource <NSObject>
- (void)queuingScrollView:(_UIQueuingScrollView *)arg1 didFlushView:(UIView *)arg2 animated:(_Bool)arg3;
- (id)queuingScrollView:(_UIQueuingScrollView *)arg1 viewAfterView:(UIView *)arg2;
- (id)queuingScrollView:(_UIQueuingScrollView *)arg1 viewBeforeView:(UIView *)arg2;
@end
