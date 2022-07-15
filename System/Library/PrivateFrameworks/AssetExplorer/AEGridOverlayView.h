//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AEGridOverlayConfiguration, NSString;

__attribute__((visibility("hidden")))
@interface AEGridOverlayView : UIView
{
    AEGridOverlayConfiguration *_overlayConfiguration;	// 8 = 0x8
}

+ (id)loopBadge;	// IMP=0x001000000000fc2a
+ (id)videoBadge;	// IMP=0x001000000000fbfa
+ (id)cloudBadge;	// IMP=0x001000000000fbca
+ (id)gradientShadow;	// IMP=0x001000000000fb9a
+ (id)gridOverlayLayoutInfo;	// IMP=0x001000000000fb37
- (void).cxx_destruct;	// IMP=0x000000000000fb24
@property(retain, nonatomic, setter=_setOverlayConfiguration:) AEGridOverlayConfiguration *overlayConfiguration; // @synthesize overlayConfiguration=_overlayConfiguration;
- (void)prepareForReuse;	// IMP=0x000000000000faeb
- (void)becomeReusable;	// IMP=0x000000000000fab6
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;	// IMP=0x000000000000fa88
@property(readonly, nonatomic) UIView *view;
- (struct CGRect)_loopRect;	// IMP=0x000000000000fa15
- (struct CGRect)_videoRect;	// IMP=0x000000000000f9ab
- (struct CGRect)_cloudRect;	// IMP=0x000000000000f948
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000000000f777
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000000f76f
- (id)init;	// IMP=0x000000000000f6be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
