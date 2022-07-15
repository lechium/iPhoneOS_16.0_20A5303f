//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, _UIRemoteViewController;

__attribute__((visibility("hidden")))
@interface _UISizeTrackingView : UIView
{
    _UIRemoteViewController *_remoteViewController;	// 184 = 0xb8
    id _viewControllerOperatorProxy;	// 192 = 0xc0
    id _textEffectsOperatorProxy;	// 200 = 0xc8
    struct CGSize _intrinsicContentSize;	// 208 = 0xd0
    struct CGRect _formerTextEffectsContentFrame;	// 224 = 0xe0
    _Bool _observingTextEffectsWindowRotation;	// 256 = 0x100
    long long _interfaceOrientation;	// 264 = 0x108
    struct {
        unsigned int hasIntrinsicContentSize:1;
        unsigned int observingBoundingPathChanges:1;
        unsigned int needsRemoteViewServiceBoundingPathUpdate:1;
        unsigned int remoteViewServiceBoundingPathUpdateScheduled:1;
    } _sizeTrackingViewFlags;	// 272 = 0x110
}

+ (id)viewWithRemoteViewController:(id)arg1 viewControllerOperatorProxy:(id)arg2 textEffectsOperatorProxy:(id)arg3;	// IMP=0x0010000001294c93
- (void).cxx_destruct;	// IMP=0x000000000129705e
- (id)focusItemsInRect:(struct CGRect)arg1;	// IMP=0x0000000001297051
- (id)_childFocusRegionsInRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x0000000001297049
- (_Bool)canBecomeFocused;	// IMP=0x0000000001297041
@property(readonly, nonatomic) _UIRemoteViewController *remoteViewController;
- (void)_prepareForWindowDealloc;	// IMP=0x0000000001296fc6
- (void)_prepareForWindowHostingSceneRemoval;	// IMP=0x0000000001296f64
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;	// IMP=0x0000000001296c5d
- (void)_updateSceneGeometries:(id)arg1;	// IMP=0x0000000001296b50
- (void)_willMoveToWindow:(id)arg1;	// IMP=0x0000000001296a12
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000129693f
- (_Bool)isScrollEnabled;	// IMP=0x0000000001296937
- (void)_clearNeedsRemoteViewServiceBoundingPathUpdate;	// IMP=0x0000000001296926
- (void)_setNeedsRemoteViewServiceBoundingPathUpdate;	// IMP=0x0000000001296828
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000001296773
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000012966be
- (void)_boundingPathMayHaveChangedForView:(id)arg1 relativeToBoundsOriginOnly:(_Bool)arg2;	// IMP=0x00000000012966ac
- (id)_boundingPathForRemoteViewService;	// IMP=0x00000000012965e5
- (_Bool)_canSendViewServiceActualBoundingPath;	// IMP=0x00000000012964c3
- (void)_geometryChanged:(const CDStruct_ac6e8047 *)arg1 forAncestor:(id)arg2;	// IMP=0x0000000001295fc4
- (_Bool)_fencingEffectsAreVisible;	// IMP=0x0000000001295f74
- (long long)_interfaceOrientationForScene:(id)arg1;	// IMP=0x0000000001295ebf
- (void)_updateSceneGeometries:(id)arg1 forOrientation:(long long)arg2;	// IMP=0x0000000001295c12
- (void)_updateTextEffectsGeometries:(struct CGRect)arg1 textEffectsWindow:(id)arg2;	// IMP=0x0000000001295606
- (void)_updateTextEffectsGeometries:(struct CGRect)arg1;	// IMP=0x00000000012955f2
- (void)_textEffectsWindowDidRotate:(id)arg1;	// IMP=0x00000000012954cf
- (void)_updateTextEffectsGeometriesImmediately;	// IMP=0x0000000001295480
- (void)_updateTextEffectsWindowSafeAreaInsets;	// IMP=0x000000000129529d
- (void)_updateTextEffectsWindowSceneSize;	// IMP=0x000000000129522e
- (_Bool)_needsTextEffectsUpdateToFrame:(struct CGRect)arg1;	// IMP=0x0000000001294fdb
- (void)updateIntrinsicContentSize:(struct CGSize)arg1;	// IMP=0x0000000001294f8e
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x0000000001294f5c
- (void)dealloc;	// IMP=0x0000000001294eda

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
