//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIImageView.h"

@class UISelectionGrabber;

__attribute__((visibility("hidden")))
@interface UISelectionGrabberDot : UIImageView
{
    UISelectionGrabber *m_grabber;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x000000000115ec55
@property(nonatomic) __weak UISelectionGrabber *grabber; // @synthesize grabber=m_grabber;
- (void)redrawRasterizedImageForScale:(double)arg1;	// IMP=0x000000000115ebae
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000115e964
- (int)textEffectsVisibilityLevel;	// IMP=0x000000000115e959
- (int)textEffectsVisibilityLevelInKeyboardWindow;	// IMP=0x000000000115e94e
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000115e870
- (struct CGRect)_extendedHitTestingRectWithEvent:(id)arg1 includingCalloutBarAdjustments:(_Bool)arg2;	// IMP=0x000000000115e63a
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000115e5db
- (id)_rasterizedDotImageForScale:(double)arg1;	// IMP=0x000000000115e111
- (id)initWithFrame:(struct CGRect)arg1 container:(id)arg2;	// IMP=0x000000000115e0a0

@end

