//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UILabel;

@interface RAPSingleLineTableViewCell : UITableViewCell
{
    NSLayoutConstraint *_topToFirstBaselineConstraint;	// 8 = 0x8
    NSLayoutConstraint *_lastBaselineToBottomConstraint;	// 16 = 0x10
    UILabel *_textLabel;	// 24 = 0x18
}

+ (id)reuseIdentifier;	// IMP=0x00200000004a5f99
- (void).cxx_destruct;	// IMP=0x00200000004a5fb7
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void)_updateConstraints;	// IMP=0x00100000004a5ed1
- (void)_updateFonts;	// IMP=0x00100000004a5e76
- (void)_contentSizeChanged;	// IMP=0x00100000004a5e48
- (void)_setupConstraints;	// IMP=0x00100000004a5b18
- (void)_setupSubviews;	// IMP=0x00100000004a5a7e
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000004a5951

@end

