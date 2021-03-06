//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSDictionary, NSLayoutConstraint, NSString, UILabel;

@interface RAPHeaderFooterView : UITableViewHeaderFooterView
{
    NSDictionary *_attributes;	// 8 = 0x8
    NSLayoutConstraint *_topToFirstBaselineConstraint;	// 16 = 0x10
    NSLayoutConstraint *_lastBaselineToBottomConstraint;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    NSString *_titleLabelText;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000005db893
@property(copy, nonatomic) NSString *titleLabelText; // @synthesize titleLabelText=_titleLabelText;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;	// IMP=0x00100000005db7b5
- (id)_initialConstraints;	// IMP=0x00100000005db323
- (double)bottomPadding;	// IMP=0x00100000005db2b8
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;	// IMP=0x00100000005db25e
- (void)_createSubviews;	// IMP=0x00100000005db111
- (void)contentSizeDidChange;	// IMP=0x00100000005db03c
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x00100000005daec0

@end

