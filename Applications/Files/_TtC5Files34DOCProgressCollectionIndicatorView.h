//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC5Files34DOCProgressCollectionIndicatorView
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *enabled;	// 24 = 0x18
    MISSING_TYPE *combinedProgress;	// 32 = 0x20
    MISSING_TYPE *autohideContentOnCompletion;	// 41 = 0x29
    MISSING_TYPE *preferredIconColorVariant;	// 48 = 0x30
    MISSING_TYPE *source;	// 56 = 0x38
    MISSING_TYPE *progressGroup;	// 72 = 0x48
    MISSING_TYPE *$__lazy_storage_$_didTapGestureRecognizer;	// 80 = 0x50
    MISSING_TYPE *debugID;	// 88 = 0x58
    MISSING_TYPE *isShowingContent;	// 120 = 0x78
    MISSING_TYPE *pointerInteraction;	// 128 = 0x80
    MISSING_TYPE *aggregateIndicatorView;	// 136 = 0x88
    MISSING_TYPE *sourceUpdateHandlerIsInstalled;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00400000001982d0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000001981e0
@property(nonatomic) _Bool hidden;
- (_Bool)isHidden;	// IMP=0x00100000001971b0
- (void)didMoveToWindow;	// IMP=0x0010000000197130
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x00100000001970c0
- (void)didTap;	// IMP=0x0010000000196f20
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00100000001967e0

@end

