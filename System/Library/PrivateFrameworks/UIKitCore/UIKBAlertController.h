//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIAlertController.h"

@protocol UIKBAlertControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIKBAlertController : UIAlertController
{
    id <UIKBAlertControllerDelegate> _kbDelegate;	// 424 = 0x1a8
}

@property(nonatomic) id <UIKBAlertControllerDelegate> kbDelegate; // @synthesize kbDelegate=_kbDelegate;
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000a657ac

@end
