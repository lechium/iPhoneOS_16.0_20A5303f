//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView, UILabel;

@interface CarplayTableViewHeaderContentView : UIView
{
    UIImageView *_focusImageView;	// 8 = 0x8
    NSMutableArray *_focusImageViewConstraints;	// 16 = 0x10
    _Bool _anyCalendarsHiddenByFocus;	// 24 = 0x18
    UILabel *_label;	// 32 = 0x20
    UIView *_separator;	// 40 = 0x28
}

+ (double)height;	// IMP=0x0040000000031447
- (void).cxx_destruct;	// IMP=0x0020000000031fdf
@property(nonatomic) _Bool anyCalendarsHiddenByFocus; // @synthesize anyCalendarsHiddenByFocus=_anyCalendarsHiddenByFocus;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000031f44
- (void)_setTraitCollectionSpecificProperties;	// IMP=0x0010000000031ef0
- (id)labelFont;	// IMP=0x0010000000031e32
- (id)init;	// IMP=0x00100000000319b7
- (void)_setAnyCalendarsHiddenByFocus:(_Bool)arg1 forceUpdate:(_Bool)arg2;	// IMP=0x00100000000316ce
- (void)_createFocusImageView;	// IMP=0x00100000000315af
- (void)_createAndAddTitleView;	// IMP=0x00100000000314f6
- (void)_createAndAddSeparatorView;	// IMP=0x0010000000031455

@end

