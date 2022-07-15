//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEORelatedSearchSuggestion, MISSING_TYPE, MapsThemeButton, NSDate, NSMutableArray, NSString, NSTimer, RelatedSearchSuggestion, UIScrollView, UIVisualEffectView;
@protocol RelatedSearchSuggestionViewControllerDelegate;

@interface RelatedSearchSuggestionViewController
{
    _Bool _accessibilityEnabled;	// 8 = 0x8
    UIVisualEffectView *_blurView;	// 16 = 0x10
    UIScrollView *_scrollView;	// 24 = 0x18
    MapsThemeButton *_closeButton;	// 32 = 0x20
    NSMutableArray *_componentViews;	// 40 = 0x28
    _Bool _forceDismiss;	// 48 = 0x30
    NSDate *_suggestionShownDate;	// 56 = 0x38
    NSTimer *_hideSuggestionViewTimer;	// 64 = 0x40
    double _hideSuggestionViewTimeoutInSeconds;	// 72 = 0x48
    double _lastSuggestionScrollOffset;	// 80 = 0x50
    _Bool _suggestionScrollViewScrollingLeft;	// 88 = 0x58
    _Bool _suggestionScrollViewScrollingRight;	// 89 = 0x59
    id <RelatedSearchSuggestionViewControllerDelegate> _delegate;	// 96 = 0x60
    MISSING_TYPE *_suggestion;	// 104 = 0x68
    GEORelatedSearchSuggestion *_pdSuggestion;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x002000000023dc06
@property(readonly, nonatomic) GEORelatedSearchSuggestion *pdSuggestion; // @synthesize pdSuggestion=_pdSuggestion;
@property(retain, nonatomic) RelatedSearchSuggestion *suggestion; // @synthesize suggestion=_suggestion;
@property(nonatomic) __weak id <RelatedSearchSuggestionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resetData;	// IMP=0x001000000023dba3
- (void)dismissWithReason:(unsigned long long)arg1;	// IMP=0x001000000023da90
- (void)dismiss;	// IMP=0x001000000023da79
- (void)updateSuggestionPositionWithOffset:(double)arg1;	// IMP=0x001000000023d9ae
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x001000000023d8e8
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x001000000023d8b5
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x001000000023d8a3
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x001000000023d63f
@property(nonatomic, getter=isHidden) _Bool hidden;
- (id)suggestionView;	// IMP=0x001000000023d5ca
- (void)_resetTimer;	// IMP=0x001000000023d550
- (void)_hideSuggestionViewTimerFired:(id)arg1;	// IMP=0x001000000023d51d
- (void)_clearTimer;	// IMP=0x001000000023d4e5
- (id)_createMapsThemeLabelWithTitle:(id)arg1;	// IMP=0x001000000023d3ce
- (id)_createMapsThemeButtonWithTitle:(id)arg1;	// IMP=0x001000000023d254
- (void)_componentButtonTapped:(id)arg1;	// IMP=0x001000000023d093
- (void)_loadSuggestions;	// IMP=0x001000000023ca83
- (void)preferredContentSizeChanged:(id)arg1;	// IMP=0x001000000023c9f0
- (void)viewDidLoad;	// IMP=0x001000000023c6de
- (void)loadView;	// IMP=0x001000000023c635
- (void)dealloc;	// IMP=0x001000000023c5f7
- (id)init;	// IMP=0x001000000023c548
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000023c540

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
