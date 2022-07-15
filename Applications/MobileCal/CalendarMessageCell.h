//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class EKCalendarNotification, EKUIEventStatusButtonsView, MessageCellColorBarView, MessageCellWarningView, NSArray, NSDictionary, NSIndexSet, NSLayoutConstraint, NSMutableArray, NSString, UILabel, UITextField, UIView;
@protocol CalendarMessageCellDelegate;

@interface CalendarMessageCell : UITableViewCell
{
    NSArray *_titleLabels;	// 8 = 0x8
    UILabel *_senderLabel;	// 16 = 0x10
    NSArray *_actionLabels;	// 24 = 0x18
    NSArray *_bodyLabels;	// 32 = 0x20
    MessageCellColorBarView *_colorBar;	// 40 = 0x28
    UIView *_disclosureIndicatorView;	// 48 = 0x30
    EKUIEventStatusButtonsView *_responseButtons;	// 56 = 0x38
    MessageCellWarningView *_warningView;	// 64 = 0x40
    UITextField *_commentPrompt;	// 72 = 0x48
    _Bool _showsCommentPrompt;	// 80 = 0x50
    _Bool _didSetupColorBarConstraints;	// 81 = 0x51
    _Bool _didSetupLabelConstraints;	// 82 = 0x52
    _Bool _didSetupDisclosureConstraints;	// 83 = 0x53
    NSLayoutConstraint *_firstTitleLabelToContentViewTopConstraint;	// 88 = 0x58
    NSLayoutConstraint *_lastTitleLabelToFirstBodyLabelConstraint;	// 96 = 0x60
    NSLayoutConstraint *_lastBodyLabelToResponseButtonsConstraint;	// 104 = 0x68
    NSLayoutConstraint *_responseButtonsToCommentLabelConstraint;	// 112 = 0x70
    NSLayoutConstraint *_bottomMostViewToContentViewBottomConstraint;	// 120 = 0x78
    NSLayoutConstraint *_statusButtonLeadingConstraint;	// 128 = 0x80
    NSLayoutConstraint *_statusButtonTrailingConstraint;	// 136 = 0x88
    NSMutableArray *_titleLabelConstraints;	// 144 = 0x90
    NSMutableArray *_bodyLabelConstraints;	// 152 = 0x98
    _Bool _hasDisclosure;	// 160 = 0xa0
    EKCalendarNotification *_notification;	// 168 = 0xa8
    id <CalendarMessageCellDelegate> _delegate;	// 176 = 0xb0
    UIView *_authorView;	// 184 = 0xb8
    unsigned long long _destination;	// 192 = 0xc0
    NSDictionary *_conflictDict;	// 200 = 0xc8
    NSArray *_labelRelatedConstraints;	// 208 = 0xd0
    NSArray *_colorBarConstraints;	// 216 = 0xd8
    NSArray *_disclosureConstraints;	// 224 = 0xe0
    NSArray *_commentPromptRelatedConstraints;	// 232 = 0xe8
    NSIndexSet *_indexSetOfTruncatedTitleStrings;	// 240 = 0xf0
    NSIndexSet *_indexSetOfTruncatedBodyStrings;	// 248 = 0xf8
}

+ (long long)numberOfLinesForBodyLabels;	// IMP=0x002000000006e4b2
+ (long long)numberOfLinesForTitleLabels;	// IMP=0x001000000006e49d
+ (double)defaultRowHeight;	// IMP=0x001000000006dd71
+ (void)clearMetrics;	// IMP=0x00100000000698b7
+ (id)layoutMetrics;	// IMP=0x0010000000069561
+ (id)strikethroughTitleColor:(unsigned long long)arg1;	// IMP=0x00100000000693cc
+ (Class)cellClassForNotification:(id)arg1;	// IMP=0x0010000000069299
+ (void)authorCacheSetObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000068dd1
+ (id)authorCacheObjectForKey:(id)arg1;	// IMP=0x0010000000068d4e
+ (void)emptyAuthorCache;	// IMP=0x0010000000068d11
+ (id)_authorCache;	// IMP=0x0010000000068cbc
- (void).cxx_destruct;	// IMP=0x002000000006ea01
@property(readonly, nonatomic) NSIndexSet *indexSetOfTruncatedBodyStrings; // @synthesize indexSetOfTruncatedBodyStrings=_indexSetOfTruncatedBodyStrings;
@property(readonly, nonatomic) NSIndexSet *indexSetOfTruncatedTitleStrings; // @synthesize indexSetOfTruncatedTitleStrings=_indexSetOfTruncatedTitleStrings;
@property(retain, nonatomic) NSArray *commentPromptRelatedConstraints; // @synthesize commentPromptRelatedConstraints=_commentPromptRelatedConstraints;
@property(retain, nonatomic) NSArray *disclosureConstraints; // @synthesize disclosureConstraints=_disclosureConstraints;
@property(retain, nonatomic) NSArray *colorBarConstraints; // @synthesize colorBarConstraints=_colorBarConstraints;
@property(retain, nonatomic) NSArray *labelRelatedConstraints; // @synthesize labelRelatedConstraints=_labelRelatedConstraints;
@property(retain, nonatomic) NSDictionary *conflictDict; // @synthesize conflictDict=_conflictDict;
@property(nonatomic) unsigned long long destination; // @synthesize destination=_destination;
@property(retain, nonatomic) UIView *authorView; // @synthesize authorView=_authorView;
@property(nonatomic) _Bool hasDisclosure; // @synthesize hasDisclosure=_hasDisclosure;
@property(nonatomic) __weak id <CalendarMessageCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) EKCalendarNotification *notification; // @synthesize notification=_notification;
- (void)_contentSizeCategoryChanged:(id)arg1;	// IMP=0x001000000006e7f6
- (long long)selectedResponseButton;	// IMP=0x001000000006e5c2
- (id)color;	// IMP=0x001000000006e4f4
- (_Bool)showAsCancelledOrDeclined;	// IMP=0x001000000006e4e4
- (id)actions;	// IMP=0x001000000016411d
- (long long)actionBodyStringAction;	// IMP=0x001000000006e4d9
- (id)actionBodyString;	// IMP=0x001000000006e4d1
- (id)preActionBodyStrings;	// IMP=0x001000000006e4c9
- (id)bodyStringDict;	// IMP=0x00100000001640f6
- (id)titleStrings;	// IMP=0x00100000001640cf
- (id)eventStatusButtonsViewButtonFont:(id)arg1;	// IMP=0x001000000006e384
- (void)eventStatusButtonsView:(id)arg1 calculatedFontSizeToFit:(double)arg2;	// IMP=0x001000000006e37e
- (void)eventStatusButtonsView:(id)arg1 didSelectAction:(long long)arg2 ifCancelled:(CDUnknownBlockType)arg3;	// IMP=0x001000000006e1f2
- (void)updateSelectedResponseButton;	// IMP=0x001000000006df85
- (id)_responseButtons;	// IMP=0x001000000006de1b
- (void)actionLabelTap;	// IMP=0x001000000006dd7f
- (void)_updateColorBar;	// IMP=0x001000000006dc84
- (void)_updateResponseButtons;	// IMP=0x001000000006dc06
- (void)_updateLabels;	// IMP=0x001000000006c892
- (id)authorCacheKeyForIdentity:(id)arg1;	// IMP=0x001000000006c784
- (id)authorAddressForIdentity:(id)arg1;	// IMP=0x001000000006c6f5
- (void)updateAuthor;	// IMP=0x001000000006c484
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x001000000006c3fc
- (void)_commentPromptDone:(id)arg1;	// IMP=0x001000000006c3e7
- (id)comment;	// IMP=0x001000000006c3ca
- (void)setShowsCommentPrompt:(_Bool)arg1 animated:(_Bool)arg2 initialValue:(id)arg3;	// IMP=0x001000000006bf77
- (void)_removeCommentPromptRelatedConstraintsIfNeeded;	// IMP=0x001000000006bed4
- (void)setupCommentPromptConstraintsIfNeeded;	// IMP=0x001000000006ba4d
- (void)_removeDisclosureConstraintsIfNeeded;	// IMP=0x001000000006b8a5
- (void)setupDisclosureConstraintsIfNeeded;	// IMP=0x001000000006b6e2
- (void)_removeLabelRelatedConstraintsIfNeeded;	// IMP=0x001000000006b643
- (void)setupLabelConstraintsIfNeeded;	// IMP=0x0010000000069c3a
- (void)_removeColorBarConstraintsIfNeeded;	// IMP=0x0010000000069b97
- (_Bool)_shouldWrapTextUnderAuthor;	// IMP=0x0010000000069b21
- (void)setupColorBarConstraintsIfNeeded;	// IMP=0x00100000000698d4
- (void)prepareForReuse;	// IMP=0x0010000000069236
- (id)provideAuthorView;	// IMP=0x001000000006921d
- (void)layoutSubviews;	// IMP=0x0010000000068f81
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000068e57

// Remaining properties
@property(nonatomic) long long accessoryType; // @dynamic accessoryType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
