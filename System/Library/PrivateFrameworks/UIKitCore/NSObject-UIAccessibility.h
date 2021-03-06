//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSString, UIBezierPath, UIDescriptionBuilder, _UITraitStorageList;

@interface NSObject (UIAccessibility)
+ (void)__accessibilityRequestGuidedAccessSession:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0020000000012395
+ (long long)__accessibilityGuidedAccessRestrictionStateForIdentifier:(id)arg1;	// IMP=0x002000000001238d
+ (_Bool)__accessibilityGuidedAccessStateEnabled;	// IMP=0x0020000000012385
+ (void)_installAppearanceSwizzlesForSetter:(id)arg1;	// IMP=0x0020000000863c76
@property(copy, nonatomic) NSArray *accessibilityHeaderElements;
@property(retain, nonatomic) NSString *accessibilityTextualContext;
@property(copy, nonatomic) NSArray *accessibilityAttributedUserInputLabels;
@property(retain, nonatomic) NSArray *accessibilityUserInputLabels;
- (void)_internalSetAccessibilityAttributedUserInputLabels:(id)arg1;	// IMP=0x0010000000011eb9
@property(nonatomic) _Bool accessibilityRespondsToUserInteraction;
@property(nonatomic) long long accessibilityNavigationStyle;
@property(nonatomic) _Bool shouldGroupAccessibilityChildren; // @dynamic shouldGroupAccessibilityChildren;
@property(retain, nonatomic) NSString *accessibilityLanguage; // @dynamic accessibilityLanguage;
- (void)setAccessibilityContainer:(id)arg1;	// IMP=0x0010000000011d5d
@property(nonatomic) _Bool isAccessibilityElement; // @dynamic isAccessibilityElement;
@property(nonatomic) unsigned long long accessibilityTraits; // @dynamic accessibilityTraits;
@property(nonatomic) struct CGPoint accessibilityActivationPoint; // @dynamic accessibilityActivationPoint;
@property(copy, nonatomic) UIBezierPath *accessibilityPath;
@property(nonatomic) struct CGRect accessibilityFrame; // @dynamic accessibilityFrame;
@property(copy, nonatomic) NSAttributedString *accessibilityAttributedHint;
@property(copy, nonatomic) NSString *accessibilityHint; // @dynamic accessibilityHint;
- (void)_internalSetAccessibilityAttributedHint:(id)arg1;	// IMP=0x0010000000011bb1
@property(copy, nonatomic) NSAttributedString *accessibilityAttributedValue;
@property(copy, nonatomic) NSString *accessibilityValue; // @dynamic accessibilityValue;
- (void)_internalSetAccessibilityAttributedValue:(id)arg1;	// IMP=0x0010000000011b17
@property(copy, nonatomic) NSAttributedString *accessibilityAttributedLabel;
@property(copy, nonatomic) NSString *accessibilityLabel; // @dynamic accessibilityLabel;
- (void)_internalSetAccessibilityAttributedLabel:(id)arg1;	// IMP=0x0010000000011a7d
@property(nonatomic) _Bool accessibilityViewIsModal; // @dynamic accessibilityViewIsModal;
@property(nonatomic) _Bool accessibilityElementsHidden; // @dynamic accessibilityElementsHidden;
- (id)storedAccessibilityRespondsToUserInteraction;	// IMP=0x00100000000119a8
- (id)storedAccessibilityActivationPoint;	// IMP=0x0010000000011997
- (id)storedAccessibilityFrame;	// IMP=0x0010000000011986
- (id)storedIsAccessibilityElement;	// IMP=0x0010000000011975
- (id)storedAccessibilityTraits;	// IMP=0x0010000000011964
- (id)storedAccessibilityViewIsModal;	// IMP=0x0010000000011953
- (id)storedAccessibilityElementsHidden;	// IMP=0x0010000000011942
- (id)storedAccessibilityNavigationStyle;	// IMP=0x0010000000011931
- (id)storedShouldGroupAccessibilityChildren;	// IMP=0x0010000000011920
- (id)storedAccessibilityIdentifier;	// IMP=0x001000000001190f
- (id)_internalAccessibilityAttributedUserInputLabels;	// IMP=0x001000000001177b
- (id)accessibilityContainer;	// IMP=0x0010000000011661
- (id)_internalAccessibilityAttributedHint;	// IMP=0x00100000000114e8
- (id)_internalAccessibilityAttributedValue;	// IMP=0x001000000001149a
- (id)_internalAccessibilityAttributedLabel;	// IMP=0x001000000001144c
- (id)accessibilityAssistiveTechnologyFocusedIdentifiers;	// IMP=0x0010000000012294
- (_Bool)accessibilityElementIsFocused;	// IMP=0x001000000001228c
- (void)accessibilityElementDidLoseFocus;	// IMP=0x0010000000012286
- (void)accessibilityElementDidBecomeFocused;	// IMP=0x0010000000012280
@property(retain, nonatomic) NSArray *accessibilityCustomActions;
- (_Bool)accessibilityActivate;	// IMP=0x00100000000122e4
- (_Bool)accessibilityPerformMagicTap;	// IMP=0x00100000000122dc
- (_Bool)accessibilityPerformEscape;	// IMP=0x00100000000122d4
- (_Bool)accessibilityScroll:(long long)arg1;	// IMP=0x00100000000122cc
- (void)accessibilityDecrement;	// IMP=0x00100000000122c6
- (void)accessibilityIncrement;	// IMP=0x00100000000122c0
- (void)_accessibilityFinalize;	// IMP=0x001000000001237f
- (void)accessibilitySetIdentification:(id)arg1;	// IMP=0x0010000000012369
- (id)accessibilityIdentification;	// IMP=0x0010000000012358
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;	// IMP=0x0010000000012460
- (_Bool)isAccessibilityElementByDefault;	// IMP=0x0010000000012458
- (unsigned long long)defaultAccessibilityTraits;	// IMP=0x0010000000012448
@property(copy, nonatomic) NSString *accessibilityIdentifier;
@property(readonly, nonatomic) NSString *accessibilityLocalizedStringKey;
- (unsigned int)_accessibilityGetContextID;	// IMP=0x001000000001332b
- (struct __IOHIDEvent *)_keyboardActivateEventDown:(_Bool)arg1;	// IMP=0x00100000000131e5
- (void)_keyboardActivate;	// IMP=0x00100000000130fe
- (id)accessibilityDropPointDescriptors;	// IMP=0x00100000000137e8
- (void)setAccessibilityDropPointDescriptors:(id)arg1;	// IMP=0x00100000000137d2
- (id)accessibilityDragSourceDescriptors;	// IMP=0x00100000000137c1
- (void)setAccessibilityDragSourceDescriptors:(id)arg1;	// IMP=0x00100000000137ab
@property(nonatomic) long long accessibilityContainerType;
- (id)storedAccessibilityContainerType;	// IMP=0x001000000001473f
@property(retain, nonatomic) NSArray *accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;	// IMP=0x0010000000014708
- (id)accessibilityElementAtIndex:(long long)arg1;	// IMP=0x0010000000014700
- (long long)accessibilityElementCount;	// IMP=0x00100000000146f8
@property(retain, nonatomic) NSArray *accessibilityCustomRotors;
- (_Bool)__isKindOfUIViewController;	// IMP=0x001000000052ac47
- (id)_NSItemProviderTypeCoercion_coercedUIImageValueFromNSDataValue:(id)arg1 error:(id *)arg2;	// IMP=0x001000000067887d
- (id)_NSItemProviderTypeCoercion_coercedUIImageValueFromNSURLValue:(id)arg1 error:(id *)arg2;	// IMP=0x001000000067871b
- (id)uiPresentationManager;	// IMP=0x00100000007c15a2
- (id)__autorotationSanityCheckObjectFromSource:(id)arg1 selector:(SEL)arg2;	// IMP=0x00100000007f1e7c
- (_Bool)_isGestureType:(long long)arg1;	// IMP=0x001000000082e11c
- (_Bool)conformsToProtocolCached:(id)arg1;	// IMP=0x00100000009066ea
- (void)prepareForInterfaceBuilder;	// IMP=0x0010000000918a76
- (void)awakeFromNib;	// IMP=0x0010000000918a70
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;	// IMP=0x001000000091a7fb
- (void)_uikit_applyValueFromTraitStorage:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x0010000000923aa3
- (id)_uikit_valueForTraitCollection:(id)arg1;	// IMP=0x0010000000923abd
- (_Bool)_uikit_variesByTraitCollections;	// IMP=0x0010000000923ab5
- (void)_applyTraitStorageRecordsForTraitCollection:(id)arg1;	// IMP=0x0010000000924192
@property(retain, getter=_traitStorageList, setter=_setTraitStorageList:) _UITraitStorageList *traitStorageList;
- (_Bool)__isKindOfUIResponder;	// IMP=0x0010000000e37d75
- (id)_shortMethodDescription;	// IMP=0x0010000001269f1b
- (id)_methodDescription;	// IMP=0x0010000001269e3e
- (id)__methodDescriptionForClass:(Class)arg1;	// IMP=0x0010000001269933
- (id)_propertyDescription;	// IMP=0x0010000001269856
- (id)__propertyDescriptionForClass:(Class)arg1;	// IMP=0x00100000012693b2
- (id)_ivarDescription;	// IMP=0x00100000012692c3
- (id)__ivarDescriptionForClass:(Class)arg1;	// IMP=0x0010000001269114
@property(readonly, nonatomic) UIDescriptionBuilder *_ui_descriptionBuilder;
- (id)className;	// IMP=0x00100000012f9ccd
- (_Bool)__isKindOfUIScrollView;	// IMP=0x001000000136e500
- (_Bool)__isKindOfUIView;	// IMP=0x00100000014241cf
@end

