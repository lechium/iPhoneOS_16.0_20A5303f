//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSpecifier.h>

@class CTDisplayPlan, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface PSUICellularPlanAddOnPlanSpecifier : PSSpecifier
{
    id _target;	// 184 = 0xb8
    CTDisplayPlan *_displayPlan;	// 192 = 0xc0
    UILabel *_nameLabel;	// 200 = 0xc8
    UILabel *_numberLabel;	// 208 = 0xd0
    UIButton *_addButton;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x0000000000069b78
@property(readonly, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
- (void)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000690b0
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 displayPlan:(id)arg3;	// IMP=0x0000000000068ef6

@end

