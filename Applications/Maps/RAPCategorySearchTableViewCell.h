//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, NSString, UIImageView, UILabel;

@interface RAPCategorySearchTableViewCell : UITableViewCell
{
    UIImageView *_checkmarkImageView;	// 8 = 0x8
    UILabel *_categoryLabel;	// 16 = 0x10
    NSLayoutConstraint *_topLayoutConstraint;	// 24 = 0x18
    NSLayoutConstraint *_bottomLayoutConstraint;	// 32 = 0x20
    _Bool _checked;	// 40 = 0x28
    NSString *_displayText;	// 48 = 0x30
}

+ (id)identifier;	// IMP=0x00200000004a58bf
- (void).cxx_destruct;	// IMP=0x00200000004a58ed
@property(nonatomic, getter=isChecked) _Bool checked; // @synthesize checked=_checked;
@property(copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
- (void)_contentSizeDidChange;	// IMP=0x00100000004a57bd
- (void)_updateCheckmarkImageView;	// IMP=0x00100000004a5628
- (void)_setupConstraints;	// IMP=0x00100000004a4fee
- (void)_setupSubviews;	// IMP=0x00100000004a4dd9
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000004a4c81

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

