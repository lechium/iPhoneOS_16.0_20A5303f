//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSDescriptionBuilder.h>

@interface BSDescriptionBuilder (UIKitAdditions)
- (void)ui_appendInterfaceOrientationMask:(unsigned long long)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3;	// IMP=0x007000000071baa5
- (void)ui_appendInterfaceOrientationMask:(unsigned long long)arg1 withName:(id)arg2;	// IMP=0x007000000071ba90
- (void)ui_appendInterfaceOrientation:(long long)arg1 withName:(id)arg2 skipIfUnknown:(_Bool)arg3;	// IMP=0x007000000071b9d4
- (void)ui_appendInterfaceOrientation:(long long)arg1 withName:(id)arg2;	// IMP=0x007000000071b9bf
- (id)ui_appendRect:(struct CGRect)arg1 withName:(id)arg2 ifNotEqualTo:(struct CGRect)arg3;	// IMP=0x007000000126d09b
- (id)ui_appendFloat:(double)arg1 withName:(id)arg2 ifNotEqualTo:(double)arg3;	// IMP=0x007000000126d068
- (id)ui_appendInteger:(long long)arg1 withName:(id)arg2 ifNotEqualTo:(long long)arg3;	// IMP=0x007000000126d038
- (id)ui_appendCornerRadii:(struct UIRectCornerRadii)arg1 withName:(id)arg2;	// IMP=0x007000000126cfc0
- (id)ui_appendEdgeInsets:(struct UIEdgeInsets)arg1 withName:(id)arg2;	// IMP=0x007000000126cf48
- (id)ui_appendTransform:(struct CGAffineTransform)arg1 withName:(id)arg2;	// IMP=0x007000000126cec7
- (id)ui_appendFloat:(double)arg1 withName:(id)arg2;	// IMP=0x007000000126ce4c
- (id)ui_appendSet:(id)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3;	// IMP=0x007000000126cdc1
- (id)ui_appendArray:(id)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3;	// IMP=0x007000000126cd36
- (id)ui_appendObject:(id)arg1 withName:(id)arg2 usingLightweightDescription:(_Bool)arg3;	// IMP=0x007000000126cc17
@end

