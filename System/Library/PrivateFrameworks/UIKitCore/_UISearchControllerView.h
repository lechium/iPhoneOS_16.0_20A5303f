//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

__attribute__((visibility("hidden")))
@interface _UISearchControllerView : UIView
{
    _Bool __ensureSystemInputViewAboveSearchBarContainerView;	// 184 = 0xb8
}

@property(nonatomic) _Bool _ensureSystemInputViewAboveSearchBarContainerView; // @synthesize _ensureSystemInputViewAboveSearchBarContainerView=__ensureSystemInputViewAboveSearchBarContainerView;
- (void)sendSubviewToBack:(id)arg1;	// IMP=0x0000000000e9089d
- (void)bringSubviewToFront:(id)arg1;	// IMP=0x0000000000e90847
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;	// IMP=0x0000000000e907f1
- (void)_ensureCarPlayLimitedUIIsOnTop;	// IMP=0x0000000000e90775
- (void)_ensureContainerIsOnTop;	// IMP=0x0000000000e9072f
- (void)_ensureViewOfClassIsOnTop:(Class)arg1;	// IMP=0x0000000000e905e7
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e90534

@end

