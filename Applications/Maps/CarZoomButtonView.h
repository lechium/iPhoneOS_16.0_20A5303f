//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CarFocusableImageButton, NSArray, NSString;
@protocol CarZoomButtonViewDelegate;

@interface CarZoomButtonView
{
    CarFocusableImageButton *_panButton;	// 8 = 0x8
    CarFocusableImageButton *_zoomInButton;	// 16 = 0x10
    CarFocusableImageButton *_zoomOutButton;	// 24 = 0x18
    _Bool _panButtonVisible;	// 32 = 0x20
    id <CarZoomButtonViewDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000087ce84
@property(nonatomic) __weak id <CarZoomButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool panButtonVisible; // @synthesize panButtonVisible=_panButtonVisible;
@property(readonly, nonatomic) NSArray *focusOrderSubItems;
- (void)setZoomOutEnabled:(_Bool)arg1;	// IMP=0x001000000087cb93
- (void)setZoomInEnabled:(_Bool)arg1;	// IMP=0x001000000087ca67
- (void)_zoomOutPressed:(id)arg1;	// IMP=0x001000000087c9cd
- (void)_zoomInPressed:(id)arg1;	// IMP=0x001000000087c933
- (void)_panPressed:(id)arg1;	// IMP=0x001000000087c899
- (id)_availableButtons;	// IMP=0x001000000087c7cd
- (id)initWithVisiblePanButton:(_Bool)arg1;	// IMP=0x001000000087c436

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly) Class superclass;

@end
