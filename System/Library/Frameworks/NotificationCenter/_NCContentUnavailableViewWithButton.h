//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface _NCContentUnavailableViewWithButton : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UIView *_backgroundView;	// 16 = 0x10
    CDUnknownBlockType _buttonHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000972e
@property(copy, nonatomic) CDUnknownBlockType buttonHandler; // @synthesize buttonHandler=_buttonHandler;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)_buttonPressed:(id)arg1;	// IMP=0x0000000000009651
- (void)_updateVisualStyling;	// IMP=0x0000000000009566
- (id)_visualStylingProviderForCategory:(long long)arg1;	// IMP=0x00000000000094ec
- (void)_configureBackgroundView;	// IMP=0x0000000000009275
- (void)_configureTitleLabelWithTitle:(id)arg1;	// IMP=0x0000000000008faf
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x0000000000008f6e
- (void)didMoveToWindow;	// IMP=0x0000000000008f00
- (id)initWithTitle:(id)arg1 buttonAction:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008dae

@end

