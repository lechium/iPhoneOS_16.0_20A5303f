//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class _UISearchBarScopeContainerLayout;

__attribute__((visibility("hidden")))
@interface _UISearchBarScopeContainerView : UIView
{
    _UISearchBarScopeContainerLayout *_layout;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001eda40
@property(retain, nonatomic) _UISearchBarScopeContainerLayout *layout; // @synthesize layout=_layout;
- (id)description;	// IMP=0x00000000001ed987
- (void)setNeedsLayout;	// IMP=0x00000000001ed93e
- (void)layoutSubviews;	// IMP=0x00000000001ed62b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001ed4d3
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001ed40f
- (_Bool)_isKnownUISearchBarComponentContainer;	// IMP=0x0000000000956079

@end

