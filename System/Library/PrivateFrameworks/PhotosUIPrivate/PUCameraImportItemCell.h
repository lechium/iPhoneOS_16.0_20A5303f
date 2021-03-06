//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, PUPhotoView, PXImportItemViewModel, UIActivityIndicatorView, UITextField, UIView;
@protocol PUCameraImportItemCellDelegate;

__attribute__((visibility("hidden")))
@interface PUCameraImportItemCell : UICollectionViewCell
{
    struct CGRect _badgeTapZone;	// 8 = 0x8
    _Bool _needsThumbnailRefresh;	// 40 = 0x28
    _Bool _selectable;	// 41 = 0x29
    _Bool _needsBadgeUpdate;	// 42 = 0x2a
    id <PUCameraImportItemCellDelegate> _delegate;	// 48 = 0x30
    PXImportItemViewModel *_representedImportItem;	// 56 = 0x38
    PUPhotoView *_photoView;	// 64 = 0x40
    long long _badgeType;	// 72 = 0x48
    UIView *_badgeContainerView;	// 80 = 0x50
    UIView *_badgeView;	// 88 = 0x58
    UIActivityIndicatorView *_spinner;	// 96 = 0x60
    UITextField *_debugTextField;	// 104 = 0x68
    long long _thumbnailRequestID;	// 112 = 0x70
    struct CGRect _scaledDisplayRect;	// 120 = 0x78
}

+ (double)alphaForSelectedCells;	// IMP=0x0010000000105ea1
- (void).cxx_destruct;	// IMP=0x0000000000105d08
@property(nonatomic) long long thumbnailRequestID; // @synthesize thumbnailRequestID=_thumbnailRequestID;
@property(nonatomic) struct CGRect scaledDisplayRect; // @synthesize scaledDisplayRect=_scaledDisplayRect;
@property(nonatomic) _Bool needsBadgeUpdate; // @synthesize needsBadgeUpdate=_needsBadgeUpdate;
@property(retain, nonatomic) UITextField *debugTextField; // @synthesize debugTextField=_debugTextField;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIView *badgeContainerView; // @synthesize badgeContainerView=_badgeContainerView;
@property(nonatomic) _Bool selectable; // @synthesize selectable=_selectable;
@property(nonatomic) long long badgeType; // @synthesize badgeType=_badgeType;
@property(retain, nonatomic) PUPhotoView *photoView; // @synthesize photoView=_photoView;
@property(readonly, nonatomic) _Bool needsThumbnailRefresh; // @synthesize needsThumbnailRefresh=_needsThumbnailRefresh;
@property(retain, nonatomic) PXImportItemViewModel *representedImportItem; // @synthesize representedImportItem=_representedImportItem;
@property(nonatomic) __weak id <PUCameraImportItemCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateDebugLabel:(id)arg1;	// IMP=0x00000000001059eb
- (id)accessibilityCustomActions;	// IMP=0x000000000010571b
- (void)accessibilityElementDidBecomeFocused;	// IMP=0x0000000000105690
- (unsigned long long)accessibilityTraits;	// IMP=0x0000000000105680
- (id)accessibilityLabel;	// IMP=0x0000000000105630
- (_Bool)isAccessibilityElement;	// IMP=0x0000000000105628
- (long long)dragState;	// IMP=0x0000000000105620
- (void)_selectAction;	// IMP=0x00000000001055d2
- (void)_enterOneUpAction;	// IMP=0x0000000000105581
- (void)handleTapGesture:(id)arg1;	// IMP=0x00000000001054b9
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000001051d9
- (struct CGRect)_filledPhotosRectForImage:(id)arg1;	// IMP=0x00000000001050ed
- (void)clearImage;	// IMP=0x0000000000105028
- (void)cancelThumbnailLoadIfActive;	// IMP=0x0000000000104fa7
- (void)setPhotoImage:(id)arg1 withSize:(struct CGSize)arg2 fillMode:(long long)arg3 videoDuration:(double)arg4 isPlaceholder:(_Bool)arg5;	// IMP=0x0000000000104dbd
- (void)setCachedImage:(id)arg1 isPlaceholder:(_Bool)arg2;	// IMP=0x0000000000104ce6
- (void)_fetchThumbnailReady;	// IMP=0x00000000001049c5
- (void)refreshThumbnail;	// IMP=0x00000000001048a5
- (void)updateBadgeUIIfNeeded;	// IMP=0x00000000001046cf
- (void)prepareForReuse;	// IMP=0x000000000010428a
- (void)showActivityBadge:(_Bool)arg1;	// IMP=0x0000000000104189
- (_Bool)shouldBeginGestureForPoint:(struct CGPoint)arg1;	// IMP=0x000000000010413a
- (void)layoutSubviews;	// IMP=0x0000000000103c1c
- (void)dealloc;	// IMP=0x0000000000103bde
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000103a9f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

