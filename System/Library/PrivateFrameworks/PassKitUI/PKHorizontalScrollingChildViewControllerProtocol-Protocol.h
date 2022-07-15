//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class UICollectionView, UIGestureRecognizer, UIView;
@protocol PKHorizontalScrollingFooterViewComparator, PKHorizontalScrollingViewControllerDelegate;

@protocol PKHorizontalScrollingChildViewControllerProtocol <NSObject>
@property(nonatomic) double alphaTransition;
@property(nonatomic) _Bool visible;
@property(nonatomic) struct UIEdgeInsets contentInset;
@property(nonatomic) long long contentInsetAdjustmentBehavior;
@property(retain, nonatomic) UIGestureRecognizer *gestureRecognizerRequiredToFail;
@property(nonatomic) __weak id <PKHorizontalScrollingViewControllerDelegate> scrollingDelegate;
- (id)data;
- (void)setData:(id)arg1 swap:(_Bool)arg2;
- (UIView<PKHorizontalScrollingFooterViewComparator> *)footer;
- (UICollectionView *)collectionView;
@end
