//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SessionUIServices/BSInvalidatable-Protocol.h>

@class FBScene, FBSceneSnapshot, FBSceneSnapshotContext, NSString, UIScenePresentationContext, UIView;
@protocol UIScenePresentation, UISceneSnapshotPresentation;

@protocol UIScenePresenter <BSInvalidatable>
- (UIView<UISceneSnapshotPresentation> *)newSnapshotPresentationView;
- (FBSceneSnapshotContext *)newSnapshotContext;
- (FBSceneSnapshot *)newSnapshot;
- (_Bool)isInvalidated;
- (_Bool)isActive;
- (void)invalidate;
- (void)deactivate;
- (void)activate;
@property(nonatomic, readonly) UIView<UIScenePresentation> *presentationView;
- (void)modifyPresentationContext:(void (^)(UIMutableScenePresentationContext *))arg1;
@property(nonatomic, readonly) UIScenePresentationContext *presentationContext;
@property(nonatomic, readonly) FBScene *scene;
@property(nonatomic, readonly) NSString *identifier;

// Remaining properties
@property(nonatomic, readonly) _Bool active;
@property(nonatomic, readonly) _Bool invalidated;
@end

