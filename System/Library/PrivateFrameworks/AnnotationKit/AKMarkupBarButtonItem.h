//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIBarButtonItem.h>

@class AKMarkupButtonContainerView, UIButton;

@interface AKMarkupBarButtonItem : UIBarButtonItem
{
    UIButton *_toggleButton;	// 8 = 0x8
    AKMarkupButtonContainerView *_toggleView;	// 16 = 0x10
}

+ (id)markupBarButtonWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x006000000004c7f8
- (void).cxx_destruct;	// IMP=0x000000000004ccb9
@property(retain, nonatomic) AKMarkupButtonContainerView *toggleView; // @synthesize toggleView=_toggleView;
@property(retain, nonatomic) UIButton *toggleButton; // @synthesize toggleButton=_toggleButton;
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000004cbd2
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000004cb51
- (void)setAction:(SEL)arg1;	// IMP=0x000000000004ca2b
- (void)setTarget:(id)arg1;	// IMP=0x000000000004c905
- (id)init;	// IMP=0x000000000004c864

@end

