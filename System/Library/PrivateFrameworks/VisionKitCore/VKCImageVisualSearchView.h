//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableSet, NSString, VKCVisualSearchResult;
@protocol VKCImageVisualSearchViewDelegate;

__attribute__((visibility("hidden")))
@interface VKCImageVisualSearchView
{
    _Bool _didAddVisualSearchCornerView;	// 8 = 0x8
    _Bool _shouldAutomaticallyShowVisualSearchResult;	// 9 = 0x9
    VKCVisualSearchResult *_visualSearchResult;	// 16 = 0x10
    id <VKCImageVisualSearchViewDelegate> _delegate;	// 24 = 0x18
    NSMutableArray *_resultViews;	// 32 = 0x20
    NSMutableSet *_cachedResultItemsWithFocalDot;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000061dc2
@property(retain, nonatomic) NSMutableSet *cachedResultItemsWithFocalDot; // @synthesize cachedResultItemsWithFocalDot=_cachedResultItemsWithFocalDot;
@property(nonatomic) _Bool shouldAutomaticallyShowVisualSearchResult; // @synthesize shouldAutomaticallyShowVisualSearchResult=_shouldAutomaticallyShowVisualSearchResult;
@property(retain, nonatomic) NSMutableArray *resultViews; // @synthesize resultViews=_resultViews;
@property(nonatomic) _Bool didAddVisualSearchCornerView; // @synthesize didAddVisualSearchCornerView=_didAddVisualSearchCornerView;
@property(nonatomic) __weak id <VKCImageVisualSearchViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) VKCVisualSearchResult *visualSearchResult; // @synthesize visualSearchResult=_visualSearchResult;
- (void)sendDismissedAnalyticsEventEventWithItem:(id)arg1;	// IMP=0x0000000000061bd9
- (void)sendProcessingAnalyticsEventEventWithItem:(id)arg1 duration:(double)arg2;	// IMP=0x0000000000061aa7
- (void)visualSearchItemView:(id)arg1 didProcessResultsWithDuration:(double)arg2;	// IMP=0x0000000000061a4e
- (void)submitVisualSearchUserFeedbackForReportIdentifier:(id)arg1 payload:(id)arg2;	// IMP=0x00000000000619c8
- (void)generateVisualSearchResultForItems:(id)arg1 queryID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006193a
- (void)visualSearchItemViewDidDismissController:(id)arg1;	// IMP=0x0000000000061780
- (void)visualSearchItemView:(id)arg1 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect)arg2;	// IMP=0x00000000000615e9
- (_Bool)visualSearchItemView:(id)arg1 shouldBeginAtPoint:(struct CGPoint)arg2;	// IMP=0x0000000000061534
- (_Bool)containsVisualSearchItemAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000061390
- (_Bool)_shouldShowPulsingDot:(id)arg1;	// IMP=0x0000000000061309
- (void)showTopVisualSearchResult;	// IMP=0x00000000000612cc
- (void)automaticallyShowVisualSearchResults;	// IMP=0x000000000006123d
- (id)topResultView;	// IMP=0x0000000000061101
- (void)updateUIForVisualSearchResultsClearExistingResults:(_Bool)arg1;	// IMP=0x0000000000060aca
- (void)setNormalizedVisibleRect:(struct CGRect)arg1;	// IMP=0x0000000000060a01
- (void)hideDots;	// IMP=0x00000000000608d4
- (void)animateDotsIn;	// IMP=0x0000000000060557
- (void)setHidden:(_Bool)arg1;	// IMP=0x00000000000604eb
- (void)triggerTapToRadar;	// IMP=0x000000000006040b
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000603a9
- (void)_layoutResultViews;	// IMP=0x000000000006027c
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000000601d9
- (void)layoutSubviews;	// IMP=0x0000000000060198
- (id)init;	// IMP=0x0000000000060135

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

