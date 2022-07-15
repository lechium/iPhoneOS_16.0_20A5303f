//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, NSValue, PSMatchMoveSource, PSPointerPortalSourceCollection, PSPointerShape;

@interface PUIDMutablePointerState
{
}

@property(retain, nonatomic) NSArray *accessories; // @dynamic accessories;
@property(nonatomic) _Bool suppressPointerMirroring; // @dynamic suppressPointerMirroring;
@property(nonatomic, getter=isPressed) _Bool pressed; // @dynamic pressed;
@property(nonatomic) double pointerVisualIntensity; // @dynamic pointerVisualIntensity;
@property(nonatomic, getter=isPointerUnderlayingContent) _Bool pointerUnderlayingContent; // @dynamic pointerUnderlayingContent;
@property(copy, nonatomic) NSString *debugRequestingClientString; // @dynamic debugRequestingClientString;
@property(copy, nonatomic) NSValue *pointerSlipValue; // @dynamic pointerSlipValue;
@property(copy, nonatomic) PSPointerShape *pointerShape; // @dynamic pointerShape;
@property(copy, nonatomic) PSPointerPortalSourceCollection *pointerPortalSourceCollection; // @dynamic pointerPortalSourceCollection;
@property(nonatomic) unsigned long long pointerMaterialLuminance; // @dynamic pointerMaterialLuminance;
@property(nonatomic, getter=isPointerAutoHidden) _Bool pointerAutoHidden; // @dynamic pointerAutoHidden;
@property(nonatomic) long long overlayEffectStyle; // @dynamic overlayEffectStyle;
@property(nonatomic) struct CGPoint modelPointerReferencePosition; // @dynamic modelPointerReferencePosition;
@property(copy, nonatomic) NSValue *contentSlipValue; // @dynamic contentSlipValue;
@property(copy, nonatomic) PSMatchMoveSource *contentMatchMoveSource; // @dynamic contentMatchMoveSource;
@property(nonatomic) double contentHoverInverseScale; // @dynamic contentHoverInverseScale;
@property(nonatomic) struct CATransform3D clientCoordinateSpaceTransformToDisplay; // @dynamic clientCoordinateSpaceTransformToDisplay;
@property(nonatomic) struct CGRect contentBounds; // @dynamic contentBounds;
- (id)description;	// IMP=0x001000000002cd00
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002ccd0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002cc99

@end
