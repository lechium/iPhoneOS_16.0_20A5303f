//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class TKKeyPathObserver, UINavigationItem;

__attribute__((visibility("hidden")))
@interface TKContainerViewController : UIViewController
{
    TKKeyPathObserver *_observer;	// 8 = 0x8
    UINavigationItem *_childNavigationItem;	// 16 = 0x10
    _Bool _appearing;	// 24 = 0x18
    UIViewController *_childViewController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000027f80
@property(retain, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
- (void)updateInternals:(id)arg1;	// IMP=0x0000000000027c70
- (void)observeChild;	// IMP=0x0000000000027b10
- (unsigned long long)edgesForExtendedLayout;	// IMP=0x0000000000026d20
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000026cb0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000026c50
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000026be0
- (void)dealloc;	// IMP=0x0000000000026b80
- (void)viewDidLoad;	// IMP=0x0000000000026ae0

@end
