//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

__attribute__((visibility("hidden")))
@interface _UIBackdropContentView : UIView
{
    _Bool _isForcingLayout;	// 184 = 0xb8
}

- (void)didMoveToWindow;	// IMP=0x00000000000ce854
- (void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;	// IMP=0x00000000000ce7a6
- (void)_monitoredView:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;	// IMP=0x00000000000ce6d2
- (void)recursivelyRemoveBackdropMaskViewsForView:(id)arg1;	// IMP=0x00000000000ce565
- (void)backdropView:(id)arg1 recursivelyUpdateMaskViewsForView:(id)arg2;	// IMP=0x00000000000ce391
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000ce324

@end

