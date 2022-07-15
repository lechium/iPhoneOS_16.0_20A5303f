//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIImageView.h"

@class NSArray, NSString, UIView, _UIVisualEffectViewBackdropCaptureGroup;
@protocol _UIVisualEffectViewParticipating, _UIVisualEffectViewSubviewMonitoring;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectImageView : UIImageView
{
    _UIVisualEffectViewBackdropCaptureGroup *_primaryCaptureGroup;	// 184 = 0xb8
    NSArray *_viewEffects;	// 192 = 0xc0
    NSArray *_filters;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x000000000128d414
@property(copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(copy, nonatomic) NSArray *viewEffects; // @synthesize viewEffects=_viewEffects;
@property(retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup; // @synthesize primaryCaptureGroup=_primaryCaptureGroup;
- (id)_initialValueForLayer:(id)arg1 keyPath:(id)arg2 usePresentationValue:(_Bool)arg3;	// IMP=0x000000000128d318
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x000000000128d2aa
- (void)applyIdentityFilterEffects;	// IMP=0x000000000128d293
- (void)applyRequestedFilterEffects;	// IMP=0x000000000128d279
- (void)applyIdentityViewEffects;	// IMP=0x000000000128d22e
- (void)applyRequestedViewEffects;	// IMP=0x000000000128d214
@property(retain, nonatomic) UIView<_UIVisualEffectViewParticipating> *containedView;
@property(nonatomic) _Bool disableGroupFiltering;
@property(nonatomic) __weak id <_UIVisualEffectViewSubviewMonitoring> subviewMonitor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
