//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/BSUIScrollViewDelegate-Protocol.h>

@class SBIconScrollView;

@protocol SBIconScrollViewDelegate <BSUIScrollViewDelegate>
- (_Bool)iconScrollView:(SBIconScrollView *)arg1 shouldSetAutoscrollContentOffset:(struct CGPoint)arg2;
- (_Bool)iconScrollView:(SBIconScrollView *)arg1 shouldSetContentOffset:(struct CGPoint *)arg2 animated:(_Bool)arg3;
- (void)iconScrollViewDidCancelTouchTracking:(SBIconScrollView *)arg1;
- (void)iconScrollViewWillCancelTouchTracking:(SBIconScrollView *)arg1;
@end

