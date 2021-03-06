//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSUICommonButton.h"

@class AMSDialogAction, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface AMSUIMessageButton : AMSUICommonButton
{
    _Bool _isFooterButton;	// 8 = 0x8
    AMSDialogAction *_dialogAction;	// 16 = 0x10
    UIFont *_preferredFont;	// 24 = 0x18
    UIColor *_preferredColor;	// 32 = 0x20
    unsigned long long _messageStyle;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000003713e
@property(nonatomic) _Bool isFooterButton; // @synthesize isFooterButton=_isFooterButton;
@property(nonatomic) unsigned long long messageStyle; // @synthesize messageStyle=_messageStyle;
@property(retain, nonatomic) UIColor *preferredColor; // @synthesize preferredColor=_preferredColor;
@property(retain, nonatomic) UIFont *preferredFont; // @synthesize preferredFont=_preferredFont;
@property(readonly, nonatomic) AMSDialogAction *dialogAction; // @synthesize dialogAction=_dialogAction;
- (id)_defaultTextFont;	// IMP=0x0000000000036fe3
- (id)_defaultIconColor;	// IMP=0x0000000000036f71
- (id)_defaultContentColor;	// IMP=0x0000000000036e12
- (id)_closeImage;	// IMP=0x0000000000036d84
- (id)_chevronImage;	// IMP=0x0000000000036cb7
- (id)_symbolConfiguration;	// IMP=0x0000000000036a77
- (_Bool)isDefaultCloseButton;	// IMP=0x000000000003698a
- (void)setFooterStyle;	// IMP=0x0000000000036857
- (void)_setImagePadding;	// IMP=0x000000000003663a
- (void)_setupWithDialogAction:(id)arg1;	// IMP=0x0000000000036086
- (void)layoutSubviews;	// IMP=0x0000000000036045
- (id)initWithDialogAction:(id)arg1 messageStyle:(unsigned long long)arg2;	// IMP=0x0000000000035fb2

@end

