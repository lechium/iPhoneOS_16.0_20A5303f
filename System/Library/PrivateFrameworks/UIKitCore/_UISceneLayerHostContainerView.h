//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class CAContext, FBSSceneSettings, FBScene, NSMutableOrderedSet, NSMutableSet, NSSet, NSString, UIScenePresentationContext, _UIContextLayerHostView;
@protocol _UISceneLayerHostContainerViewDataSource;

__attribute__((visibility("hidden")))
@interface _UISceneLayerHostContainerView : UIView
{
    FBScene *_scene;	// 8 = 0x8
    id <_UISceneLayerHostContainerViewDataSource> _dataSource;	// 16 = 0x10
    NSMutableOrderedSet *_hostViews;	// 24 = 0x18
    NSMutableOrderedSet *_hostedLayers;	// 32 = 0x20
    NSMutableSet *_hiddenLayers;	// 40 = 0x28
    FBSSceneSettings *_effectiveSceneSettings;	// 48 = 0x30
    UIScenePresentationContext *_presentationContext;	// 56 = 0x38
    UIView *_innerLayerContainer;	// 64 = 0x40
    UIView *_backgroundView;	// 72 = 0x48
    CAContext *_asyncRenderGroupingContext;	// 80 = 0x50
    _UISceneLayerHostContainerView *_asyncRenderGroupingContainerView;	// 88 = 0x58
    _UIContextLayerHostView *_asyncRenderGroupingHostView;	// 96 = 0x60
    NSString *_debugDescription;	// 104 = 0x68
    _Bool _invalidated;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000007a4c7a
@property(readonly, nonatomic) __weak FBScene *scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) __weak id <_UISceneLayerHostContainerViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)_presentationContextForLayer:(id)arg1;	// IMP=0x00000000007a4a85
- (void)_updateRenderingModeForLayersInNormalPresentation;	// IMP=0x00000000007a45f7
- (void)_updateAsyncDrawingOptionsInAsyncPresentation;	// IMP=0x00000000007a442e
- (void)_invalidateAndRemoveAsyncViewsFromHierarchy;	// IMP=0x00000000007a4179
- (void)_rebuildLayersForNormalPresentationWithReason:(id)arg1 withFence:(id)arg2;	// IMP=0x00000000007a39a9
- (void)_rebuildLayersForAsyncPresentationWithReason:(id)arg1 withFence:(id)arg2;	// IMP=0x00000000007a32da
- (void)_rebuildLayersForReason:(id)arg1 withFence:(id)arg2;	// IMP=0x00000000007a30d4
- (id)_filteredLayersToPresent;	// IMP=0x00000000007a2354
- (void)_adjustHostViewFrameAlignment:(id)arg1;	// IMP=0x00000000007a1e1f
- (id)_createHostViewForLayer:(id)arg1;	// IMP=0x00000000007a1c4b
- (_Bool)_canShowKeyboardLayer;	// IMP=0x00000000007a1c2f
- (void)_toggleResizesHostedContextWithNewContext:(id)arg1;	// IMP=0x00000000007a1aa6
- (void)_toggleInheritsSecurityWithNewContext:(id)arg1;	// IMP=0x00000000007a191d
- (void)_toggleClippingDisabledWithNewContext:(id)arg1;	// IMP=0x00000000007a16ed
- (void)_presentationContextChangedFrom:(id)arg1 toContext:(id)arg2 force:(_Bool)arg3;	// IMP=0x00000000007a12c1
- (void)_setPresentationContext:(id)arg1;	// IMP=0x00000000007a109e
- (void)_applyBackgroundViewToHierarchy;	// IMP=0x00000000007a0fea
- (void)_setBackgroundView:(id)arg1;	// IMP=0x00000000007a0f58
- (void)_refreshDataSource;	// IMP=0x00000000007a0eb5
- (void)_setDataSource:(id)arg1;	// IMP=0x00000000007a0e4c
- (id)_asyncRenderingHostView;	// IMP=0x00000000007a0e37
- (id)_asyncRenderingContainerView;	// IMP=0x00000000007a0e22
- (id)_asyncContext;	// IMP=0x00000000007a0e0d
- (id)_presentationContext;	// IMP=0x00000000007a0df8
- (id)_backgroundView;	// IMP=0x00000000007a0de3
- (id)_hostViews;	// IMP=0x00000000007a0dc6
- (id)_realHostedLayers;	// IMP=0x00000000007a0da9
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000007a0c6a
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000007a0c1a
- (id)succinctDescriptionBuilder;	// IMP=0x00000000007a0aec
- (id)succinctDescription;	// IMP=0x00000000007a0a9c
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)sceneLayerManagerDidUpdateLayers:(id)arg1;	// IMP=0x00000000007a0a5b
- (void)invalidate;	// IMP=0x00000000007a0846
- (id)window;	// IMP=0x00000000007a0733
- (id)_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;	// IMP=0x00000000007a062f
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x00000000007a0627
- (void)updateForGeometrySettingsChanges:(id)arg1;	// IMP=0x00000000007a0340
- (void)refreshDataSource:(id)arg1;	// IMP=0x00000000007a026e
- (void)popDataSource:(id)arg1;	// IMP=0x00000000007a019a
- (void)pushDataSource:(id)arg1;	// IMP=0x00000000007a00e5
@property(readonly, nonatomic) NSSet *nonHostedLayers;
@property(readonly, nonatomic) NSSet *hostedLayers;
- (void)dealloc;	// IMP=0x000000000079fc41
- (id)initWithScene:(id)arg1 debugDescription:(id)arg2;	// IMP=0x000000000079f959
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000079f8c2
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000079f82b
- (id)init;	// IMP=0x000000000079f7a4

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
