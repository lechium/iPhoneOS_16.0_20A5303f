//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@protocol UILayoutContainerViewDelegate;

__attribute__((visibility("hidden")))
@interface UILayoutContainerView : UIView
{
    UIView *_shadowView;	// 184 = 0xb8
    struct {
        unsigned int delegateRespondsToSemanticContentAttributeChanged:1;
        unsigned int delegateRespondsToViewWillLayoutSubviews:1;
        unsigned int delegateRespondsToWillMoveToWindow:1;
        unsigned int delegateRespondsToDidMoveToWindow:1;
    } _layoutContainerViewFlags;	// 192 = 0xc0
    _Bool _usesInnerShadow;	// 196 = 0xc4
    _Bool _usesRoundedCorners;	// 197 = 0xc5
    id <UILayoutContainerViewDelegate> _delegate;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00000000004468bd
@property(nonatomic) _Bool usesRoundedCorners; // @synthesize usesRoundedCorners=_usesRoundedCorners;
@property(nonatomic) _Bool usesInnerShadow; // @synthesize usesInnerShadow=_usesInnerShadow;
@property(nonatomic) __weak id <UILayoutContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_systemDefaultFocusGroupIdentifier;	// IMP=0x00000000004467ef
- (void)dealloc;	// IMP=0x00000000004467b1
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x0000000000446741
- (void)addSubview:(id)arg1;	// IMP=0x00000000004466eb
- (void)_tearDownShadowViews;	// IMP=0x00000000004466b3
- (void)_installShadowViews;	// IMP=0x0000000000446118
- (void)_updateShadowViews;	// IMP=0x00000000004460e0
- (void)didMoveToWindow;	// IMP=0x0000000000445f21
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000445eac
- (void)layoutSubviews;	// IMP=0x0000000000445da7
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000445cd5
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000445bf8
- (void)_setFlagsFromDelegate:(id)arg1;	// IMP=0x0000000000445b40
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000445a3f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000044598e

@end

