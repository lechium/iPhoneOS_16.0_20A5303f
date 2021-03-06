//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class MUPhotoOptionsMenuButton, NSString, UIImageView, UILabel, UIView;
@protocol MUPhotoOptionsMenuButtonDelegate;

@interface UGCAddPhotoCollectionViewCell : UICollectionViewCell
{
    UIImageView *_cameraGlyphView;	// 8 = 0x8
    UILabel *_cameraLabel;	// 16 = 0x10
    UIView *_containerView;	// 24 = 0x18
    UIView *_maskView;	// 32 = 0x20
    MUPhotoOptionsMenuButton *_menuButton;	// 40 = 0x28
    _Bool _dimmed;	// 48 = 0x30
    _Bool _prefersMenu;	// 49 = 0x31
    id <MUPhotoOptionsMenuButtonDelegate> _delegate;	// 56 = 0x38
}

+ (id)reuseIdentifier;	// IMP=0x002000000097947a
- (void).cxx_destruct;	// IMP=0x002000000097953c
@property(nonatomic) __weak id <MUPhotoOptionsMenuButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool prefersMenu; // @synthesize prefersMenu=_prefersMenu;
@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
- (void)photoOptionsMenuButtonDidSelectAddFromLibrary;	// IMP=0x00100000009794bb
- (void)photoOptionsMenuButtonDidSelectTakePhoto;	// IMP=0x0010000000979487
- (void)_contentSizeDidChange;	// IMP=0x0010000000979377
- (void)_setupConstraints;	// IMP=0x0010000000978678
- (void)_setupSubviews;	// IMP=0x0010000000978151
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000978092

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

