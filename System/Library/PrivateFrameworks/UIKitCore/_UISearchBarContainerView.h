//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

__attribute__((visibility("hidden")))
@interface _UISearchBarContainerView : UIView
{
    UIView *_subview;	// 184 = 0xb8
    int _resizingMask;	// 192 = 0xc0
    _Bool _shouldSendContainerSafeAreaInsetsDidChange;	// 196 = 0xc4
}

- (void).cxx_destruct;	// IMP=0x00000000001eceee
- (void)layoutSubviews;	// IMP=0x00000000001ecedc
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000001ece8a
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000001ece38
- (void)enforceSubviewAtBottomIfNecessary;	// IMP=0x00000000001ecd5d
- (void)willRemoveSubview:(id)arg1;	// IMP=0x00000000001ecd4b
- (void)_didRemoveSubview:(id)arg1;	// IMP=0x00000000001ecd39
- (void)_uncontainerSubview:(id)arg1;	// IMP=0x00000000001eccea
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;	// IMP=0x00000000001ecc1c
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000001ecbb6
- (void)safeAreaInsetsDidChange;	// IMP=0x00000000001ecb87

@end
