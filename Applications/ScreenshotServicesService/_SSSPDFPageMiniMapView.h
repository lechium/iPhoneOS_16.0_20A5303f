//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PDFView, UIImage, UIImageView, UIPanGestureRecognizer, _SSSPDFPageMiniMapVisibleRegionView, _SSSScrollViewLayoutRects;

@interface _SSSPDFPageMiniMapView : UIView
{
    CDUnknownBlockType _updatePageImageBlock;	// 8 = 0x8
    _Bool _shouldUpdate;	// 16 = 0x10
    PDFView *_pdfView;	// 24 = 0x18
    long long _pageIndex;	// 32 = 0x20
    _SSSPDFPageMiniMapVisibleRegionView *_visibleRegionView;	// 40 = 0x28
    UIImageView *_pageImageView;	// 48 = 0x30
    UIImage *_lastPageImage;	// 56 = 0x38
    UIPanGestureRecognizer *_panGestureRecognizer;	// 64 = 0x40
    _SSSScrollViewLayoutRects *_scaledScrollViewLayoutRectsInSelf;	// 72 = 0x48
    _SSSScrollViewLayoutRects *_inFlightScaledScrollViewLayoutRectsInSelf;	// 80 = 0x50
    UIView *_scaledScrollViewVisibleRectView;	// 88 = 0x58
    struct CGSize _lastRequestedImageSize;	// 96 = 0x60
    struct CGRect _scrollViewVisibleRectInPDFView;	// 112 = 0x70
    struct CGRect __lastSetScrollViewRectInContentViewSpace;	// 144 = 0x90
}

+ (struct CGAffineTransform)_transformToConvertToRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2;	// IMP=0x0040000000030542
+ (struct CGPoint)adjustedTranslationForProposedRect:(struct CGRect)arg1 originalRect:(struct CGRect)arg2 scaledContentViewBounds:(struct CGRect)arg3;	// IMP=0x001000000002faa9
- (void).cxx_destruct;	// IMP=0x002000000003092b
@property(nonatomic) struct CGRect _lastSetScrollViewRectInContentViewSpace; // @synthesize _lastSetScrollViewRectInContentViewSpace=__lastSetScrollViewRectInContentViewSpace;
@property(retain, nonatomic) UIView *scaledScrollViewVisibleRectView; // @synthesize scaledScrollViewVisibleRectView=_scaledScrollViewVisibleRectView;
@property(retain, nonatomic) _SSSScrollViewLayoutRects *inFlightScaledScrollViewLayoutRectsInSelf; // @synthesize inFlightScaledScrollViewLayoutRectsInSelf=_inFlightScaledScrollViewLayoutRectsInSelf;
@property(retain, nonatomic) _SSSScrollViewLayoutRects *scaledScrollViewLayoutRectsInSelf; // @synthesize scaledScrollViewLayoutRectsInSelf=_scaledScrollViewLayoutRectsInSelf;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UIImage *lastPageImage; // @synthesize lastPageImage=_lastPageImage;
@property(nonatomic) struct CGSize lastRequestedImageSize; // @synthesize lastRequestedImageSize=_lastRequestedImageSize;
@property(retain, nonatomic) UIImageView *pageImageView; // @synthesize pageImageView=_pageImageView;
@property(retain, nonatomic) _SSSPDFPageMiniMapVisibleRegionView *visibleRegionView; // @synthesize visibleRegionView=_visibleRegionView;
@property(nonatomic) _Bool shouldUpdate; // @synthesize shouldUpdate=_shouldUpdate;
@property(nonatomic) struct CGRect scrollViewVisibleRectInPDFView; // @synthesize scrollViewVisibleRectInPDFView=_scrollViewVisibleRectInPDFView;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain, nonatomic) PDFView *pdfView; // @synthesize pdfView=_pdfView;
- (struct CGRect)convertRectToPageViewSpace:(struct CGRect)arg1 fromView:(id)arg2;	// IMP=0x001000000003038d
- (struct CGRect)convertRectFromPageViewSpace:(struct CGRect)arg1 toView:(id)arg2;	// IMP=0x00100000000301e3
- (struct CGRect)visibleRectInPageViewSpace;	// IMP=0x001000000003003e
- (void)userDidPanSelectionRect:(id)arg1;	// IMP=0x001000000002fc7e
- (_Bool)isDraggingVisibleRect;	// IMP=0x001000000002fa59
- (void)updatePDFViewFromVisibleRegionView;	// IMP=0x001000000002f83d
- (void)updateVisibleRegionViewFromPDFView;	// IMP=0x001000000002f364
- (void)annotationsDidChange;	// IMP=0x001000000002f0a7
- (void)visibleRegionRectDidChange;	// IMP=0x001000000002f070
- (id)pageImageForSize:(struct CGSize)arg1;	// IMP=0x001000000002ee33
- (id)pageView;	// IMP=0x001000000002edcc
- (id)pdfPage;	// IMP=0x001000000002ed5a
- (void)setNeedsPageImageUpdate;	// IMP=0x001000000002ed22
- (void)_removePDFNotifications;	// IMP=0x001000000002eb84
- (void)_setupPDFNotificationsIfPossible;	// IMP=0x001000000002ea0c
- (void)layoutSubviews;	// IMP=0x001000000002e75c
- (void)dealloc;	// IMP=0x001000000002e6f0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000002e592

@end
