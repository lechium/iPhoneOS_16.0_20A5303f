//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class FKAActionManager;

@interface FKAControlsViewController : UIViewController
{
    FKAActionManager *_actionManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000007fcd
@property(retain, nonatomic) FKAActionManager *actionManager; // @synthesize actionManager=_actionManager;
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000007fa0
- (id)_addButtonWithTitle:(id)arg1 action:(SEL)arg2 toView:(id)arg3;	// IMP=0x0010000000007e73
- (void)loadView;	// IMP=0x00100000000073c6
- (id)init;	// IMP=0x001000000000735b

@end
