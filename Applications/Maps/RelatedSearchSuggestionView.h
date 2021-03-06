//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MapsThemeButton, UIScrollView, UIVisualEffectView;

@interface RelatedSearchSuggestionView
{
    _Bool _showCloseButton;	// 8 = 0x8
    UIVisualEffectView *_blurView;	// 16 = 0x10
    UIScrollView *_scrollView;	// 24 = 0x18
    MapsThemeButton *_closeButton;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000921a15
@property(nonatomic) __weak MapsThemeButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) _Bool showCloseButton; // @synthesize showCloseButton=_showCloseButton;
- (void)layoutSubviews;	// IMP=0x0010000000921728
- (void)safeAreaInsetsDidChange;	// IMP=0x00100000009216d2
- (struct CGSize)intrinsicContentSize;	// IMP=0x001000000092168a
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;	// IMP=0x0010000000921665
- (void)setAlpha:(double)arg1 animated:(_Bool)arg2;	// IMP=0x001000000092139e
- (void)setAlpha:(double)arg1;	// IMP=0x001000000092138a

@end

