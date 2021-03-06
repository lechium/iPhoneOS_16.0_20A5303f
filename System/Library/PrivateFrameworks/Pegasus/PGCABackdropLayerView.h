//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSHashTable, PGCABackdropLayer, UIColor;

__attribute__((visibility("hidden")))
@interface PGCABackdropLayerView : UIView
{
    UIColor *_customBackgroundColor;	// 8 = 0x8
    PGCABackdropLayerView *_groupLeader;	// 16 = 0x10
    NSHashTable *_dependents;	// 24 = 0x18
}

+ (id)reducedTransparencyColor;	// IMP=0x00600000000128e5
+ (id)materialFilters;	// IMP=0x0060000000012530
+ (Class)layerClass;	// IMP=0x006000000001251f
- (void).cxx_destruct;	// IMP=0x000000000001382e
@property(readonly, nonatomic) NSHashTable *dependents; // @synthesize dependents=_dependents;
@property(nonatomic) __weak PGCABackdropLayerView *groupLeader; // @synthesize groupLeader=_groupLeader;
@property(copy, nonatomic) UIColor *customBackgroundColor; // @synthesize customBackgroundColor=_customBackgroundColor;
- (_Bool)_isTransparentOrHasTransparentAncestor;	// IMP=0x0000000000013713
- (void)_enumerateDependents:(CDUnknownBlockType)arg1;	// IMP=0x00000000000135cd
- (void)_ensureDependents;	// IMP=0x0000000000013582
- (void)_removeDependent:(id)arg1;	// IMP=0x0000000000013549
- (void)_addDependent:(id)arg1;	// IMP=0x00000000000134ef
- (_Bool)_hasAnyDependentsThatWantsCapturedBlur;	// IMP=0x0000000000013403
- (_Bool)_isCaptureOnly;	// IMP=0x0000000000013216
- (_Bool)_wantsCapturedBlur;	// IMP=0x00000000000131d8
- (id)_preferredBackgroundColor;	// IMP=0x0000000000013162
- (long long)_preferredEffect;	// IMP=0x00000000000130f4
- (void)updateEffects;	// IMP=0x0000000000012c75
- (void)didMoveToWindow;	// IMP=0x0000000000012bb5
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000012bad
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000012ba5
- (void)dealloc;	// IMP=0x0000000000012b23
- (id)initWithFrame:(struct CGRect)arg1 captureOnly:(_Bool)arg2;	// IMP=0x00000000000129b2
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001299e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001296a

// Remaining properties
@property(readonly, nonatomic) PGCABackdropLayer *layer; // @dynamic layer;

@end

