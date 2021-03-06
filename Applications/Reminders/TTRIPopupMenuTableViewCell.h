//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppSupportUI/NUITableViewContainerCell.h>

@class UIButton, UILabel, UIStackView;

@interface TTRIPopupMenuTableViewCell : NUITableViewContainerCell
{
    UIStackView *_accessoriesStackView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UIButton *_menuButton;	// 24 = 0x18
}

+ (Class)containerViewClass;	// IMP=0x004000000001be78
- (void).cxx_destruct;	// IMP=0x002000000001c772
@property(retain, nonatomic) UIButton *menuButton; // @synthesize menuButton=_menuButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIStackView *accessoriesStackView; // @synthesize accessoriesStackView=_accessoriesStackView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x001000000001c2e2
- (void)setPopupMenu:(id)arg1;	// IMP=0x001000000001c213
- (void)setAccessoryTitle:(id)arg1;	// IMP=0x001000000001c122
- (void)setTitle:(id)arg1;	// IMP=0x001000000001c05a
- (id)buttonTitleAttributes;	// IMP=0x001000000001bf73
- (id)titleFont;	// IMP=0x001000000001be89

@end

