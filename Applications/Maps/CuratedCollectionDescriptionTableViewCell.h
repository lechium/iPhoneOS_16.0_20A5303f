//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CuratedCollectionDescriptionCellModel, MUExpandingLabel, UIImageView, UILabel, UILayoutGuide, UIStackView, UITapGestureRecognizer;
@protocol CuratedCollectionDescriptionTableViewCellDelegate;

@interface CuratedCollectionDescriptionTableViewCell
{
    _Bool _alwaysUseLightForegroundColors;	// 8 = 0x8
    id <CuratedCollectionDescriptionTableViewCellDelegate> _delegate;	// 16 = 0x10
    CuratedCollectionDescriptionCellModel *_model;	// 24 = 0x18
    UILayoutGuide *_contentLayoutGuide;	// 32 = 0x20
    UIStackView *_stackView;	// 40 = 0x28
    MUExpandingLabel *_descriptionLabel;	// 48 = 0x30
    UIImageView *_authorImageView;	// 56 = 0x38
    UITapGestureRecognizer *_publisherTapGestureRecognizer;	// 64 = 0x40
    UILabel *_authorLabel;	// 72 = 0x48
    UILabel *_metadataLabel;	// 80 = 0x50
}

+ (double)estimatedCellHeight;	// IMP=0x0040000000453004
+ (id)reuseIdentifier;	// IMP=0x0010000000452ffa
- (void).cxx_destruct;	// IMP=0x00200000004554be
@property(retain, nonatomic) UILabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) UITapGestureRecognizer *publisherTapGestureRecognizer; // @synthesize publisherTapGestureRecognizer=_publisherTapGestureRecognizer;
@property(retain, nonatomic) UIImageView *authorImageView; // @synthesize authorImageView=_authorImageView;
@property(retain, nonatomic) MUExpandingLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UILayoutGuide *contentLayoutGuide; // @synthesize contentLayoutGuide=_contentLayoutGuide;
@property(retain, nonatomic) CuratedCollectionDescriptionCellModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool alwaysUseLightForegroundColors; // @synthesize alwaysUseLightForegroundColors=_alwaysUseLightForegroundColors;
@property(nonatomic) __weak id <CuratedCollectionDescriptionTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_publisherLogoTapped;	// IMP=0x001000000045531d
- (void)_descriptionLabelDidExpand;	// IMP=0x001000000045524a
@property(readonly, nonatomic) _Bool expanded;
- (void)setAlwaysUseLightForegroundColors:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000004551e0
- (void)_updateColorsAnimated:(_Bool)arg1;	// IMP=0x0010000000454ced
- (void)_updateFonts;	// IMP=0x0010000000454a95
- (void)configureWithModel:(id)arg1;	// IMP=0x001000000045469f
- (void)_setupConstraints;	// IMP=0x0010000000453e7c
- (void)_createSubviews;	// IMP=0x001000000045331f
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000453234
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000453082
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000453012

@end

