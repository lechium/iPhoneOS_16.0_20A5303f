//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSArray, NSLayoutConstraint, NSString, UIImage, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface PUPhotoEditEffectCell : UICollectionViewCell
{
    NSLayoutConstraint *_bottomLabelConstraint;	// 8 = 0x8
    NSLayoutConstraint *_gapConstraint;	// 16 = 0x10
    NSArray *_constraints;	// 24 = 0x18
    UIImage *_image;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    UIImageView *_imageView;	// 48 = 0x30
    UILabel *_nameLabel;	// 56 = 0x38
    UIView *_highlightView;	// 64 = 0x40
    UIImageView *_selectionView;	// 72 = 0x48
}

+ (id)selectionOutlineImage;	// IMP=0x00600000002ffd2e
- (void).cxx_destruct;	// IMP=0x00000000002ffc68
@property(retain, nonatomic) UIImageView *selectionView; // @synthesize selectionView=_selectionView;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)_setSubview:(id)arg1 visible:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x00000000002ffabb
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000002ffa21
- (id)_colorForIsSelected:(_Bool)arg1;	// IMP=0x00000000002ff9ad
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002ff8af
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000002ff898
- (void)updateConstraints;	// IMP=0x00000000002ff235
- (void)prepareForReuse;	// IMP=0x00000000002ff1de
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002fedb8

@end
