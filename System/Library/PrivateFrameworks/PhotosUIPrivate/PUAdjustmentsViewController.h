//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CEKSlider, NSIndexPath, NSString, PUAdjustmentInfo, PUAdjustmentsViewFlowLayout, PUPhotoEditAutoAdjustmentCell, PUSelectionFeedbackGenerator, PXUISnappingController, UICollectionView, UIImage;
@protocol PUAdjustmentViewControllerDelegate, PUAdjustmentsViewDataSource;

__attribute__((visibility("hidden")))
@interface PUAdjustmentsViewController : UIViewController
{
    struct CGPoint _lastOffset;	// 8 = 0x8
    double _previousTimeStamp;	// 24 = 0x18
    UIImage *_selectedItemBackgroundImage;	// 32 = 0x20
    UIImage *_itemBackgroundImage;	// 40 = 0x28
    long long _sliderScrubbingLevel;	// 48 = 0x30
    PUPhotoEditAutoAdjustmentCell *_autoEnhanceCell;	// 56 = 0x38
    PXUISnappingController *_snappingController;	// 64 = 0x40
    _Bool _isUserModified;	// 72 = 0x48
    _Bool _shouldDisplayControlValues;	// 73 = 0x49
    _Bool _shouldDisplayMappedValues;	// 74 = 0x4a
    _Bool _updatingControls;	// 75 = 0x4b
    _Bool _isAnimatingScroll;	// 76 = 0x4c
    _Bool _didPerformHapticFeedback;	// 77 = 0x4d
    id <PUAdjustmentsViewDataSource> _dataSource;	// 80 = 0x50
    id <PUAdjustmentViewControllerDelegate> _delegate;	// 88 = 0x58
    long long _layoutDirection;	// 96 = 0x60
    PUAdjustmentInfo *_selectedAdjustmentInfo;	// 104 = 0x68
    UICollectionView *_collectionView;	// 112 = 0x70
    PUAdjustmentsViewFlowLayout *_collectionViewLayout;	// 120 = 0x78
    CEKSlider *_slider;	// 128 = 0x80
    NSIndexPath *_selectedIndexPath;	// 136 = 0x88
    PUSelectionFeedbackGenerator *_selectionFeedbackGenerator;	// 144 = 0x90
    struct CGSize _controlSize;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x000000000008148d
@property(nonatomic) _Bool didPerformHapticFeedback; // @synthesize didPerformHapticFeedback=_didPerformHapticFeedback;
@property(retain, nonatomic) PUSelectionFeedbackGenerator *selectionFeedbackGenerator; // @synthesize selectionFeedbackGenerator=_selectionFeedbackGenerator;
@property(nonatomic) _Bool isAnimatingScroll; // @synthesize isAnimatingScroll=_isAnimatingScroll;
@property(nonatomic) _Bool updatingControls; // @synthesize updatingControls=_updatingControls;
@property(nonatomic) struct CGSize controlSize; // @synthesize controlSize=_controlSize;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) CEKSlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) PUAdjustmentsViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) PUAdjustmentInfo *selectedAdjustmentInfo; // @synthesize selectedAdjustmentInfo=_selectedAdjustmentInfo;
@property(nonatomic) _Bool shouldDisplayMappedValues; // @synthesize shouldDisplayMappedValues=_shouldDisplayMappedValues;
@property(nonatomic) _Bool shouldDisplayControlValues; // @synthesize shouldDisplayControlValues=_shouldDisplayControlValues;
@property(nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(nonatomic) __weak id <PUAdjustmentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <PUAdjustmentsViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (double)ppt_sliderValueIncrement;	// IMP=0x000000000008116f
- (double)ppt_sliderVisibleScaleValue;	// IMP=0x00000000000810d0
- (void)ppt_selectNextAdjustment;	// IMP=0x0000000000080ef5
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x0000000000080ea9
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000000080dd8
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0000000000080cf2
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0000000000080bef
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000008089b
- (void)_performFeedbackIfNeeded;	// IMP=0x000000000008081f
- (void)sliderDidEndScrolling:(id)arg1;	// IMP=0x00000000000807af
- (void)sliderWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x000000000008078f
- (void)_sliderDidEndScrolling;	// IMP=0x00000000000806e9
- (void)slider:(id)arg1 willUpdateValue:(double *)arg2 withVelocity:(double)arg3;	// IMP=0x00000000000806bd
- (void)sliderWillBeginScrolling:(id)arg1;	// IMP=0x00000000000805b3
- (void)sliderValueChanged:(id)arg1;	// IMP=0x00000000000803f7
- (void)toggleAutoEnhance;	// IMP=0x00000000000803da
- (void)decreaseAdjustmentValue:(_Bool)arg1;	// IMP=0x0000000000080370
- (void)increaseAdjustmentValue:(_Bool)arg1;	// IMP=0x0000000000080309
- (void)resetControls;	// IMP=0x0000000000080050
- (void)updateControls;	// IMP=0x000000000007fd70
- (void)_updateCell:(id)arg1 withInfo:(id)arg2;	// IMP=0x000000000007fc2f
- (id)_backgroundImageForItemAtIndexPath:(id)arg1;	// IMP=0x000000000007fbac
- (void)_setupCellBackgroundImagesIfNeeded;	// IMP=0x000000000007fa48
- (id)_circularImageWithSize:(struct CGSize)arg1 color:(id)arg2;	// IMP=0x000000000007f958
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x000000000007f950
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000007f89b
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000007f6b5
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000000007f63a
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000007f5b0
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000007f407
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x000000000007f321
- (void)didToggleCell:(id)arg1;	// IMP=0x000000000007f1d5
- (_Bool)canToggleCell:(id)arg1;	// IMP=0x000000000007f11c
- (void)_resetControlsAtIndexPath:(id)arg1;	// IMP=0x000000000007f05c
- (void)_updateSelectedInfo;	// IMP=0x000000000007ee8c
- (void)_updateCollectionViewLayoutDirection:(long long)arg1;	// IMP=0x000000000007edda
- (void)_updateSliderForControlAtIndexPath:(id)arg1;	// IMP=0x000000000007e9fa
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000007e8f0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000007e64e
- (void)viewDidLayoutSubviews;	// IMP=0x000000000007e60d
- (void)_updateViewLayout;	// IMP=0x000000000007e065
- (long long)preferredUserInterfaceStyle;	// IMP=0x000000000007e05a
- (void)viewDidLoad;	// IMP=0x000000000007da03
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000007d9b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

