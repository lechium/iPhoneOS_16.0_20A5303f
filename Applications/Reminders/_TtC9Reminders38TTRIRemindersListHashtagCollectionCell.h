//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppSupportUI/NUITableViewContainerCell.h>

@class MISSING_TYPE, NSArray;

@interface _TtC9Reminders38TTRIRemindersListHashtagCollectionCell : NUITableViewContainerCell
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *viewModel;	// 24 = 0x18
    MISSING_TYPE *allowsExcludedSelection;	// 80 = 0x50
    MISSING_TYPE *labelBoxView;	// 88 = 0x58
    MISSING_TYPE *selectionDescriptionLabel;	// 96 = 0x60
    MISSING_TYPE *hashtagSelector;	// 104 = 0x68
    MISSING_TYPE *internalSelection;	// 128 = 0x80
    MISSING_TYPE *updateFlags;	// 152 = 0x98
}

+ (Class)containerViewClass;	// IMP=0x00400000004f8850
- (void).cxx_destruct;	// IMP=0x00200000004fab50
- (void)ttrAccessibilityServicesDidChange;	// IMP=0x00100000004fab20
@property(nonatomic, copy) NSArray *accessibilityElements;
- (void)hashtagButtonAction:(id)arg1;	// IMP=0x00100000004fa7c0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00100000004f92f0
- (void)layoutSubviews;	// IMP=0x00100000004f9220
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000004f9130
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000004f8f40
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000004f8f10
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;	// IMP=0x00100000004fac20

@end
