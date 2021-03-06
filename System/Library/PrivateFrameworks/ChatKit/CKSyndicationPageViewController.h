//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSMutableArray, NSString, UIPageControl, UIPageViewController;
@protocol CKSyndicationOnboardingPageViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CKSyndicationPageViewController : UIViewController
{
    UIPageViewController *_pageViewController;	// 8 = 0x8
    UIPageControl *_pageControl;	// 16 = 0x10
    id <CKSyndicationOnboardingPageViewControllerDelegate> _delegate;	// 24 = 0x18
    NSMutableArray *_pageContent;	// 32 = 0x20
    double _buttonTrayHeight;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000465cc8
@property(nonatomic) double buttonTrayHeight; // @synthesize buttonTrayHeight=_buttonTrayHeight;
@property(retain, nonatomic) NSMutableArray *pageContent; // @synthesize pageContent=_pageContent;
@property(nonatomic) __weak id <CKSyndicationOnboardingPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;	// IMP=0x0000000000465b7f
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;	// IMP=0x0000000000465af3
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;	// IMP=0x0000000000465a9b
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;	// IMP=0x0000000000465a43
- (unsigned long long)indexOfViewController:(id)arg1;	// IMP=0x00000000004659cc
- (id)viewControllerAtIndex:(unsigned long long)arg1;	// IMP=0x000000000046594a
- (void)pageControlChanged:(id)arg1;	// IMP=0x00000000004657b2
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000465200
- (void)viewDidLoad;	// IMP=0x0000000000464dbc
- (void)createContentPages;	// IMP=0x0000000000464d0b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

