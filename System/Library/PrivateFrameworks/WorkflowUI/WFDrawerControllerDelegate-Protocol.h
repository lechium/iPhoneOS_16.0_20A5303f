//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class UIScrollView, WFDrawerController;

@protocol WFDrawerControllerDelegate <NSObject>

@optional
- (void)drawerController:(WFDrawerController *)arg1 didTransitionToVisibility:(unsigned long long)arg2;
- (void)drawerController:(WFDrawerController *)arg1 willTransitionToVisibility:(unsigned long long)arg2;
- (UIScrollView *)dismissingScrollViewForDrawerController:(WFDrawerController *)arg1;
@end
