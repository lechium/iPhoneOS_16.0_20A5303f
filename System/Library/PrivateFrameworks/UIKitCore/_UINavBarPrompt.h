//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UILabel, UINavigationBar;

__attribute__((visibility("hidden")))
@interface _UINavBarPrompt : UIView
{
    UILabel *_label;	// 8 = 0x8
    UINavigationBar *_navBar;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001764e7
- (void)layoutSubviews;	// IMP=0x000000000017637b
- (struct CGSize)_updateLabelTextColorAndFontReturningShadowOffset;	// IMP=0x0000000000176079
- (struct CGRect)promptBounds;	// IMP=0x000000000017603b
- (struct CGRect)_labelFrame;	// IMP=0x0000000000175f18
@property(copy, nonatomic) NSString *prompt;
- (id)initWithNavBar:(id)arg1;	// IMP=0x0000000000175cfa

@end

