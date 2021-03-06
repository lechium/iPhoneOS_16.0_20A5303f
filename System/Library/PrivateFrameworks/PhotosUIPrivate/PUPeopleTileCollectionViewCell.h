//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class PHAsset, PHPerson, PXSuggestLessPeopleHelper, UIButton, UIGraphicsImageRenderer, UIImageView, UIView;
@protocol PUPeopleTileDelegate;

__attribute__((visibility("hidden")))
@interface PUPeopleTileCollectionViewCell : UICollectionViewCell
{
    id <PUPeopleTileDelegate> _peopleDelegate;	// 8 = 0x8
    UIView *_questionView;	// 16 = 0x10
    UIButton *_menuButton;	// 24 = 0x18
    UIImageView *_avatarImageView;	// 32 = 0x20
    UIView *_shadowView;	// 40 = 0x28
    UIGraphicsImageRenderer *_renderer;	// 48 = 0x30
    PHPerson *_person;	// 56 = 0x38
    PHAsset *_asset;	// 64 = 0x40
    PXSuggestLessPeopleHelper *_suggestLessPeopleHelper;	// 72 = 0x48
    struct CGSize _previousContentViewSize;	// 80 = 0x50
}

+ (struct CGSize)itemSizeForTraitCollection:(id)arg1;	// IMP=0x00100000004b6fb5
- (void).cxx_destruct;	// IMP=0x00000000004b6662
@property(retain, nonatomic) PXSuggestLessPeopleHelper *suggestLessPeopleHelper; // @synthesize suggestLessPeopleHelper=_suggestLessPeopleHelper;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) PHPerson *person; // @synthesize person=_person;
@property struct CGSize previousContentViewSize; // @synthesize previousContentViewSize=_previousContentViewSize;
@property(retain, nonatomic) UIGraphicsImageRenderer *renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(readonly, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(readonly, nonatomic) UIButton *menuButton; // @synthesize menuButton=_menuButton;
@property(retain, nonatomic) UIView *questionView; // @synthesize questionView=_questionView;
@property(nonatomic) __weak id <PUPeopleTileDelegate> peopleDelegate; // @synthesize peopleDelegate=_peopleDelegate;
- (_Bool)suggestLessPeopleHelper:(id)arg1 presentViewController:(id)arg2;	// IMP=0x00000000004b6488
- (_Bool)suggestLessPeopleHelper:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000004b6468
- (void)_nameActionTapped:(id)arg1;	// IMP=0x00000000004b6236
- (void)_untagActionTapped:(id)arg1 asset:(id)arg2;	// IMP=0x00000000004b6052
- (void)_manageTagsActionTapped:(id)arg1;	// IMP=0x00000000004b5fbd
- (void)_showAlbumActionTapped:(id)arg1;	// IMP=0x00000000004b5ead
- (void)_featureLessActionTapped:(id)arg1;	// IMP=0x00000000004b5d56
- (void)_setupActionsForPerson:(id)arg1 asset:(id)arg2;	// IMP=0x00000000004b53b0
- (void)_displayAvatarImageRequestResult:(id)arg1 faceRect:(struct CGRect)arg2 error:(id)arg3;	// IMP=0x00000000004b507f
- (void)_reloadAvatarImageViewForPerson:(id)arg1;	// IMP=0x00000000004b4e20
- (void)setPerson:(id)arg1 asset:(id)arg2;	// IMP=0x00000000004b4bc0
- (void)accessibilityInvertColorsStatusDidChange:(id)arg1;	// IMP=0x00000000004b4af6
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000004b4a17
- (void)layoutSubviews;	// IMP=0x00000000004b464c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000004b428c

@end

