//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIControl.h"

@class UIButton, UIColor, UIImageView, UITableViewCell;

__attribute__((visibility("hidden")))
@interface UITableViewCellDetailDisclosureView : UIControl
{
    UIButton *_accessoryButton;	// 184 = 0xb8
    UIImageView *_disclosureView;	// 192 = 0xc0
    UITableViewCell *_cell;	// 200 = 0xc8
    UIColor *_accessoryTintColor;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x0000000000fe91b5
@property(retain, nonatomic) UIColor *accessoryTintColor; // @synthesize accessoryTintColor=_accessoryTintColor;
@property(readonly, nonatomic) UIButton *accessoryButton; // @synthesize accessoryButton=_accessoryButton;
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x0000000000fe90e7
- (void)_updateDisclosureChevronImage;	// IMP=0x0000000000fe9069
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;	// IMP=0x0000000000fe904c
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;	// IMP=0x0000000000fe902f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000fe8fff
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x0000000000fe8fa9
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 cell:(id)arg3 buttonType:(long long)arg4 shouldReverseLayoutDirection:(_Bool)arg5;	// IMP=0x0000000000fe8b6e

@end

