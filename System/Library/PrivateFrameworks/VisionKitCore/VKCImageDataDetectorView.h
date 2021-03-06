//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableSet, NSString;
@protocol VKCImageDataDetectorViewDelegate;

__attribute__((visibility("hidden")))
@interface VKCImageDataDetectorView
{
    _Bool _highlightSelectableItems;	// 8 = 0x8
    _Bool _allowLongPressDDActivationOnly;	// 9 = 0x9
    id <VKCImageDataDetectorViewDelegate> _delegate;	// 16 = 0x10
    unsigned long long _dataDetectorTypes;	// 24 = 0x18
    NSArray *_displayedElements;	// 32 = 0x20
    NSArray *_unfilteredElements;	// 40 = 0x28
    NSArray *_allElements;	// 48 = 0x30
    NSMutableSet *__displayedElementViews;	// 56 = 0x38
    NSMutableSet *_displayedMRCPills;	// 64 = 0x40
    struct CGRect _boundsUsedToCalculateElementFrames;	// 72 = 0x48
    struct CGRect _contentsRectUsedToCalculateElementFrames;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000008d8f4
@property(nonatomic) struct CGRect contentsRectUsedToCalculateElementFrames; // @synthesize contentsRectUsedToCalculateElementFrames=_contentsRectUsedToCalculateElementFrames;
@property(nonatomic) struct CGRect boundsUsedToCalculateElementFrames; // @synthesize boundsUsedToCalculateElementFrames=_boundsUsedToCalculateElementFrames;
@property(retain, nonatomic) NSMutableSet *displayedMRCPills; // @synthesize displayedMRCPills=_displayedMRCPills;
@property(retain, nonatomic) NSMutableSet *_displayedElementViews; // @synthesize _displayedElementViews=__displayedElementViews;
@property(retain, nonatomic) NSArray *allElements; // @synthesize allElements=_allElements;
@property(nonatomic) _Bool allowLongPressDDActivationOnly; // @synthesize allowLongPressDDActivationOnly=_allowLongPressDDActivationOnly;
@property(nonatomic) _Bool highlightSelectableItems; // @synthesize highlightSelectableItems=_highlightSelectableItems;
@property(retain, nonatomic) NSArray *unfilteredElements; // @synthesize unfilteredElements=_unfilteredElements;
@property(retain, nonatomic) NSArray *displayedElements; // @synthesize displayedElements=_displayedElements;
@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;
@property(nonatomic) __weak id <VKCImageDataDetectorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dataDetectorElementView:(id)arg1 analyticsEventOccured:(id)arg2;	// IMP=0x000000000008d6ec
- (struct CGRect)previewImageBoundsForDataDetectorElementView:(id)arg1;	// IMP=0x000000000008d669
- (id)previewImageForDataDetectorElementView:(id)arg1;	// IMP=0x000000000008d5e6
- (id)previewForDataDetectorElementView:(id)arg1;	// IMP=0x000000000008d563
- (id)presentingViewControllerForInteractionWithDataDetectorElementView:(id)arg1;	// IMP=0x000000000008d4ee
- (void)willDismissMenuForDataDetectorElementView:(id)arg1;	// IMP=0x000000000008d4a2
- (void)willDisplayMenuForDataDetectorElementView:(id)arg1;	// IMP=0x000000000008d456
- (_Bool)dataDetectorElementView:(id)arg1 shouldBeginAtPoint:(struct CGPoint)arg2;	// IMP=0x000000000008d3db
- (_Bool)highlightView:(id)arg1 needsToAdjustQuad:(id)arg2;	// IMP=0x000000000008d21c
- (id)currentViewSpaceQaudForHighlightView:(id)arg1;	// IMP=0x000000000008d0fe
- (void)showMRCPills:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000008ce43
- (void)setHighlightSelectableItems:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000008ce2e
- (id)closestElementToPoint:(struct CGPoint)arg1 maxDistance:(double)arg2;	// IMP=0x000000000008c8fa
- (id)viewSpaceQuadsForDataDetectorElement:(id)arg1;	// IMP=0x000000000008c7a7
- (struct CGRect)frameForDataDetectorElement:(id)arg1;	// IMP=0x000000000008c68e
@property(readonly, nonatomic) _Bool needsElementFrameUpdate;
- (void)updateAllElementViewFrames;	// IMP=0x000000000008c3d2
- (void)updateAllElementViewFramesIfNecessary;	// IMP=0x000000000008c39b
- (void)loadDataDetectorViewsFromDisplayedElements;	// IMP=0x000000000008c12c
- (_Bool)shouldFilterElementForSpecialCase:(id)arg1;	// IMP=0x000000000008beeb
- (void)updateDisplayedElements;	// IMP=0x000000000008bda4
- (void)activateLongPressDataDetectorAtPoint:(struct CGPoint)arg1 maxDistance:(double)arg2;	// IMP=0x000000000008bb5c
- (void)setCustomAnalyticsIdentifier:(id)arg1;	// IMP=0x000000000008ba67
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000008ba15
- (void)didMoveToSuperview;	// IMP=0x000000000008b914
- (void)layoutSubviews;	// IMP=0x000000000008b8d3
- (void)setContentsRect:(struct CGRect)arg1;	// IMP=0x000000000008b881
@property(readonly, nonatomic) NSArray *displayedElementViews;
- (void)setRecognitionResult:(id)arg1;	// IMP=0x000000000008b741
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000008b67f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

