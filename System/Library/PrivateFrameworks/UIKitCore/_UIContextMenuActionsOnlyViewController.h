//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class UITargetedPreview;

__attribute__((visibility("hidden")))
@interface _UIContextMenuActionsOnlyViewController : UIViewController
{
    UITargetedPreview *_sourcePreview;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000011a6e87
@property(retain, nonatomic) UITargetedPreview *sourcePreview; // @synthesize sourcePreview=_sourcePreview;
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000011a6e5a
- (_Bool)_defersToPresentingViewControllerForSupportedInterfaceOrientations;	// IMP=0x00000000011a6e52
- (struct CGSize)preferredContentSize;	// IMP=0x00000000011a6bbb
- (void)viewDidLoad;	// IMP=0x00000000011a6b20
- (id)initWithTargetedPreview:(id)arg1;	// IMP=0x00000000011a6ab4

@end
