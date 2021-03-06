//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CollectionEditSession, CollectionImageView, MapsThemeLabel, NSArray, NSLayoutConstraint, NSString, UIImageView, UILabel, UILayoutGuide, UITextField;
@protocol CollectionHandlerInfo, CollectionViewDelegate, NSObject;

@interface CollectionView
{
    UITextField *_titleTextField;	// 8 = 0x8
    UILabel *;	// 16 = 0x10
    UILabel *_subtitleLabel;	// 24 = 0x18
    MapsThemeLabel *_newCollectionLabel;	// 32 = 0x20
    CollectionImageView *_imageView;	// 40 = 0x28
    UIImageView *_badgeImageView;	// 48 = 0x30
    UIImageView *_imageCheckmarkView;	// 56 = 0x38
    UILayoutGuide *_textContainerLayoutGuide;	// 64 = 0x40
    NSLayoutConstraint *_imageHeight;	// 72 = 0x48
    NSLayoutConstraint *_badgeHeightConstraint;	// 80 = 0x50
    NSLayoutConstraint *_topConstraint;	// 88 = 0x58
    NSLayoutConstraint *_bottomConstraint;	// 96 = 0x60
    NSLayoutConstraint *_textContainerTrailingConstraint;	// 104 = 0x68
    NSArray *_constraints;	// 112 = 0x70
    _Bool _textContainerHeightMatchesNewCollectionLabel;	// 120 = 0x78
    NSString *_originalTitle;	// 128 = 0x80
    id <NSObject> _titleObserver;	// 136 = 0x88
    _Bool _editing;	// 144 = 0x90
    _Bool _disabled;	// 145 = 0x91
    _Bool _showCheckmark;	// 146 = 0x92
    _Bool _allowAccessibilityTextWrapping;	// 147 = 0x93
    id <CollectionViewDelegate> _delegate;	// 152 = 0x98
    id <CollectionHandlerInfo> _collectionInfo;	// 160 = 0xa0
    unsigned long long _collectionViewSize;	// 168 = 0xa8
    CollectionEditSession *_editSession;	// 176 = 0xb0
    double _shrinkFactor;	// 184 = 0xb8
    NSString *_maxContentSizeCategory;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x0020000000a274db
@property(nonatomic) _Bool allowAccessibilityTextWrapping; // @synthesize allowAccessibilityTextWrapping=_allowAccessibilityTextWrapping;
@property(retain, nonatomic) NSString *maxContentSizeCategory; // @synthesize maxContentSizeCategory=_maxContentSizeCategory;
@property(nonatomic) double shrinkFactor; // @synthesize shrinkFactor=_shrinkFactor;
@property(retain, nonatomic) CollectionEditSession *editSession; // @synthesize editSession=_editSession;
@property(nonatomic, getter=showsCheckmark) _Bool showCheckmark; // @synthesize showCheckmark=_showCheckmark;
@property(nonatomic) unsigned long long collectionViewSize; // @synthesize collectionViewSize=_collectionViewSize;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) id <CollectionHandlerInfo> collectionInfo; // @synthesize collectionInfo=_collectionInfo;
@property(nonatomic) __weak id <CollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0010000000a27301
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x0010000000a272c5
- (id)_effectiveTraitCollection;	// IMP=0x0010000000a271af
- (void)_effectiveContentSizeCategoryDidChange:(id)arg1;	// IMP=0x0010000000a270a7
- (id)_effectiveContentSizeCategory;	// IMP=0x0010000000a27003
- (_Bool)_shouldTextContainerHeightMatchNewCollectionLabel;	// IMP=0x0010000000a26fbf
- (_Bool)_shouldWrapText;	// IMP=0x0010000000a26f73
- (void)_updateNumberOfLines;	// IMP=0x0010000000a26eee
- (void)_updateFonts;	// IMP=0x0010000000a26e2b
- (id)_subtitleFont;	// IMP=0x0010000000a26dc8
- (id)_titleFont;	// IMP=0x0010000000a26d1f
- (long long)_subtitleNumberOfLines;	// IMP=0x0010000000a26d07
- (long long)_titleNumberOfLines;	// IMP=0x0010000000a26cbe
- (void)_updateContent;	// IMP=0x0010000000a263b2
- (id)_textAttachmentSpacer;	// IMP=0x0010000000a2633b
- (void)collectionHandlerContentUpdated:(id)arg1;	// IMP=0x0010000000a26335
- (void)collectionHandlerInfoUpdated:(id)arg1;	// IMP=0x0010000000a26323
- (void)imagePickerControllerDidCancel:(id)arg1;	// IMP=0x0010000000a26307
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;	// IMP=0x0010000000a26224
- (void)collectionImageViewButtonSelected:(id)arg1;	// IMP=0x0010000000a2611d
- (void)_updateConstraintConstants;	// IMP=0x0010000000a25fdc
- (void)_updateConstraints;	// IMP=0x0010000000a24a12
- (double)_verticalMargin;	// IMP=0x0010000000a24299
- (double)_imageWidth;	// IMP=0x0010000000a24243
- (void)dealloc;	// IMP=0x0010000000a241bb
- (_Bool)becomeFirstResponder;	// IMP=0x0010000000a2419e
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000a24088
- (void)commonInit;	// IMP=0x0010000000a23816
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000a237aa
- (id)initWithCollectionViewSize:(unsigned long long)arg1;	// IMP=0x0010000000a2370f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

