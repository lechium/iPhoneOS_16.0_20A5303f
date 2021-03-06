//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLayoutAnchor, NSSet, NSString, _NSConstraintDescriptionLayoutRuleNode;

@interface NSLayoutConstraint : NSObject
{
    id _container;	// 8 = 0x8
    id _firstAnchor;	// 16 = 0x10
    id _secondAnchor;	// 24 = 0x18
    double _constant;	// 32 = 0x20
    double _loweredConstant;	// 40 = 0x28
    id _markerAndPositiveExtraVar;	// 48 = 0x30
    id _negativeExtraVar;	// 56 = 0x38
    unsigned long long _layoutConstraintFlags;	// 64 = 0x40
    float _coefficient;	// 72 = 0x48
    float _priority;	// 76 = 0x4c
}

+ (id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 constant:(double)arg3;	// IMP=0x0010000000029908
+ (id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 toAnchor:(id)arg3 multiplier:(double)arg4 constant:(double)arg5;	// IMP=0x00100000000296e8
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 constant:(double)arg4;	// IMP=0x00100000000296bc
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5;	// IMP=0x001000000002969c
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 constant:(double)arg6;	// IMP=0x001000000002967c
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6;	// IMP=0x0010000000029664
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7;	// IMP=0x0010000000029560
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7 symbolicConstantMultiplier:(double)arg8;	// IMP=0x00100000000290e9
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7;	// IMP=0x00100000000290cc
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7 theme:(id)arg8;	// IMP=0x00100000000290b7
+ (id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;	// IMP=0x001000000002909e
+ (id)_findCommonAncestorOfItem:(id)arg1 andItem:(id)arg2;	// IMP=0x0010000000028ff2
+ (void)deactivateConstraints:(id)arg1;	// IMP=0x0010000000028e4b
+ (void)activateConstraints:(id)arg1;	// IMP=0x0010000000028bf2
+ (void)_setLegacyDecodingOnly:(_Bool)arg1;	// IMP=0x0010000000025eeb
+ (double)_constraintConstantLimit;	// IMP=0x0010000000024708
@property(copy, setter=_setSecondAnchor:) NSLayoutAnchor *secondAnchor; // @synthesize secondAnchor=_secondAnchor;
@property(copy, setter=_setFirstAnchor:) NSLayoutAnchor *firstAnchor; // @synthesize firstAnchor=_firstAnchor;
@property(getter=isActive) _Bool active;
- (void)_setActive:(_Bool)arg1 mutuallyExclusiveConstraints:(id *)arg2;	// IMP=0x0000000000028a98
- (_Bool)_nsib_isRedundant;	// IMP=0x0000000000028a4c
- (_Bool)_nsib_isRedundantInEngine:(id)arg1;	// IMP=0x000000000002852c
- (int)nsis_orientationHintForVariable:(id)arg1;	// IMP=0x00000000000284cb
- (id)nsis_descriptionOfVariable:(id)arg1;	// IMP=0x000000000002837e
- (id)_explainUnsatisfaction;	// IMP=0x0000000000028309
- (void)_forceSatisfactionMeasuringUnsatisfactionChanges:(id *)arg1 andMutuallyExclusiveConstraints:(id *)arg2;	// IMP=0x0000000000028219
- (void)_tryToActivateMeasuringUnsatisfactionChanges:(id *)arg1 andMutuallyExclusiveConstraints:(id *)arg2;	// IMP=0x0000000000027cef
- (id)_loweredExpression;	// IMP=0x0000000000027c5d
- (_Bool)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(_Bool *)arg2;	// IMP=0x0000000000027b59
- (struct CGSize)_engineToContainerScalingCoefficients;	// IMP=0x0000000000027b25
- (void)_removeFromEngine:(id)arg1;	// IMP=0x00000000000279eb
- (void)_addToEngine:(id)arg1;	// IMP=0x00000000000279d7
- (_Bool)_addToEngine:(id)arg1 mutuallyExclusiveConstraints:(id *)arg2;	// IMP=0x00000000000278ad
- (_Bool)_addToEngine:(id)arg1 integralizationAdjustment:(double)arg2 mutuallyExclusiveConstraints:(id *)arg3;	// IMP=0x000000000002789b
- (double)priorityForVariable:(id)arg1;	// IMP=0x0000000000027890
- (id)_constraintValueCopy;	// IMP=0x0000000000027758
- (void)_setMutablePropertiesFromConstraint:(id)arg1;	// IMP=0x0000000000027488
- (_Bool)_isEqualToConstraintValue:(id)arg1 includingConstant:(_Bool)arg2 includeOtherMutableProperties:(_Bool)arg3;	// IMP=0x0000000000026dbe
- (unsigned long long)_constraintValueHashIncludingConstant:(_Bool)arg1 includeOtherMutableProperties:(_Bool)arg2;	// IMP=0x0000000000026c62
- (_Bool)_describesSameRestrictionAsConstraint:(id)arg1;	// IMP=0x0000000000026c45
@property(readonly, copy) NSSet *_referencedLayoutItems;
- (_Bool)_referencesLayoutItem:(id)arg1;	// IMP=0x0000000000026ae0
- (id)_constraintByReplacingView:(id)arg1 withView:(id)arg2;	// IMP=0x0000000000026ace
- (id)_constraintByReplacingItem:(id)arg1 withItem:(id)arg2;	// IMP=0x00000000000268c5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000026379
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000025ef7
@property(readonly, copy) NSString *description;
- (id)descriptionAccessory;	// IMP=0x000000000002587c
- (id)_priorityDescription;	// IMP=0x0000000000025808
- (int)_constraintType;	// IMP=0x00000000000250f6
- (void)dealloc;	// IMP=0x0000000000025057
- (id)init;	// IMP=0x000000000002500f
@property double symbolicConstantMultiplier;
@property(copy) NSString *symbolicConstant;
- (void)_setSymbolicConstant:(id)arg1;	// IMP=0x0000000000024dac
- (id)_symbolicConstant;	// IMP=0x0000000000024d04
@property double constant;
- (id)_constantDescriptionForDTrace;	// IMP=0x0000000000024b8b
- (id)_descriptionforSymbolicConstant;	// IMP=0x0000000000024b01
- (_Bool)_effectiveConstant:(double *)arg1 error:(id *)arg2;	// IMP=0x00000000000245ec
- (void)_containerGeometryDidChange;	// IMP=0x00000000000244a3
@property(setter=_setContainerDeclaredConstraint:) _Bool _containerDeclaredConstraint;
- (void)_clearWeakContainerReference;	// IMP=0x0000000000023f8f
@property id container;
- (_Bool)_loweredConstantIsRounded;	// IMP=0x0000000000023f60
- (id)_markerAndPositiveExtraVar;	// IMP=0x0000000000023f4b
- (_Bool)nsis_valueOfVariableIsUserObservable:(id)arg1;	// IMP=0x0000000000023f43
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;	// IMP=0x0000000000023f3d
- (double)_allowedMagnitudeForIntegralizationAdjustment;	// IMP=0x0000000000023f34
- (double)_fudgeIncrement;	// IMP=0x0000000000023f2b
- (_Bool)_isFudgeable;	// IMP=0x0000000000023f23
- (void)setAnimations:(id)arg1;	// IMP=0x0000000000023f0d
- (id)animations;	// IMP=0x0000000000023efc
@property(copy) NSString *identifier;
- (id)_identifier;	// IMP=0x0000000000023d33
@property(readonly) _Bool hasBeenLowered;
- (_Bool)_existsInEngine:(id)arg1;	// IMP=0x0000000000023cfd
@property float priority;
- (_Bool)_isIBPrototypingLayoutConstraint;	// IMP=0x00000000000236db
@property _Bool shouldBeArchived;
- (void)_setSecondItem:(id)arg1 attribute:(long long)arg2;	// IMP=0x0000000000023668
@property(readonly) long long secondAttribute;
@property(readonly) id secondItem;
@property(setter=_setMultiplier:) double multiplier;
@property(setter=_setRelation:) long long relation;
- (void)_setFirstItem:(id)arg1 attribute:(long long)arg2;	// IMP=0x00000000000233da
@property(readonly) long long firstAttribute;
@property(readonly) id firstItem;
@property(nonatomic, getter=_loweredConstantNeedsUpdate, setter=_setLoweredConstantNeedsUpdate:) _Bool loweredConstantNeedsUpdate;
@property(readonly) double unsatisfaction;
@property(setter=_setAssociatedRuleNode:) _NSConstraintDescriptionLayoutRuleNode *_associatedRuleNode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

