//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, VOTElement;
@protocol VOTRotorDelegate;

@interface VOTRotor : NSObject
{
    NSString *_typeKey;	// 8 = 0x8
    struct __CFArray *_currentRotors;	// 16 = 0x10
    long long _currentRotorType;	// 24 = 0x18
    long long _currentSelectionRotorType;	// 32 = 0x20
    NSArray *_customRotorActionCategories;	// 40 = 0x28
    NSArray *_customContent;	// 48 = 0x30
    long long _customContentIndex;	// 56 = 0x38
    long long _publicCustomRotorIndex;	// 64 = 0x40
    NSMutableArray *_customPublicRotors;	// 72 = 0x48
    long long _customRotorIndex;	// 80 = 0x50
    VOTElement *_currentRotorElement;	// 88 = 0x58
    id <VOTRotorDelegate> _delegate;	// 96 = 0x60
    long long _customActionIndex;	// 104 = 0x68
}

+ (_Bool)rotorIsUsedForSettingAdjustment:(long long)arg1;	// IMP=0x004000000011ad23
+ (id)stringForRotorType:(long long)arg1;	// IMP=0x001000000011a6c2
+ (id)rotorTypeForPreferenceString:(id)arg1;	// IMP=0x0010000000119bcb
+ (long long)rotorTypeForSystemRotorType:(id)arg1;	// IMP=0x0010000000119812
+ (long long)rotorTypeForSearchType:(long long)arg1;	// IMP=0x00100000001197b8
+ (id)systemRotorTypeForRotorType:(long long)arg1;	// IMP=0x00100000001195f1
+ (id)systemRotorTypeForSearchType:(long long)arg1;	// IMP=0x00100000001195d2
- (void).cxx_destruct;	// IMP=0x002000000011af1a
@property(nonatomic) long long customActionIndex; // @synthesize customActionIndex=_customActionIndex;
@property(readonly, nonatomic) long long publicCustomRotorIndex; // @synthesize publicCustomRotorIndex=_publicCustomRotorIndex;
@property(nonatomic) __weak id <VOTRotorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak VOTElement *currentRotorElement; // @synthesize currentRotorElement=_currentRotorElement;
@property(readonly, nonatomic) long long customRotorIndex; // @synthesize customRotorIndex=_customRotorIndex;
- (void)setRotorItems:(id)arg1;	// IMP=0x001000000011ac9a
- (id)rotorItems;	// IMP=0x001000000011ac27
- (id)currentRotorString;	// IMP=0x001000000011abd6
- (id)currentRotorHint;	// IMP=0x001000000011ab84
- (_Bool)inMisspelledWordRotor;	// IMP=0x001000000011a922
- (id)_currentCustomRotorString;	// IMP=0x001000000011a6f2
- (long long)indexOfRotorItem:(long long)arg1;	// IMP=0x0010000000119b7b
- (void)clearRotorTypes;	// IMP=0x0010000000119b6e
- (_Bool)verifyNoDuplicatesInRotor;	// IMP=0x0010000000119ae7
- (id)currentVisualRotorString;	// IMP=0x0010000000119a96
- (void)decrement:(_Bool *)arg1 userInitiated:(_Bool)arg2 eventOrigin:(long long)arg3;	// IMP=0x00100000001195b5
- (void)increment:(_Bool *)arg1 userInitiated:(_Bool)arg2 eventOrigin:(long long)arg3;	// IMP=0x0010000000119595
- (void)_moveRotor:(_Bool)arg1 didWrap:(_Bool *)arg2 userInitiated:(_Bool)arg3 eventOrigin:(long long)arg4;	// IMP=0x001000000011923e
- (id)customPublicRotors;	// IMP=0x0010000000119230
- (_Bool)rotorTypeIsValid:(long long)arg1 eventOrigin:(long long)arg2;	// IMP=0x0010000000119224
@property(readonly, nonatomic) long long currentRotorType; // @synthesize currentRotorType=_currentRotorType;
@property(readonly, nonatomic) long long currentSelectionRotorType; // @dynamic currentSelectionRotorType;
- (void)setCurrentRotorType:(long long)arg1 saveToPreferences:(_Bool)arg2 userInitiated:(_Bool)arg3;	// IMP=0x0010000000118ea6
- (id)generateRotorTypeRequest;	// IMP=0x0010000000118d28
@property(readonly, nonatomic) long long rotorIndex; // @dynamic rotorIndex;
@property(readonly, nonatomic) long long rotorCount; // @dynamic rotorCount;
- (void)dealloc;	// IMP=0x0010000000118c82
- (id)init;	// IMP=0x0010000000118c08

@end
