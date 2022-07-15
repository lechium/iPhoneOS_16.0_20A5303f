//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKBCacheToken.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKBCacheToken_Keyplane : UIKBCacheToken
{
    struct CGSize _size;	// 56 = 0x38
    CDUnion_bf7716c0 _style;	// 72 = 0x48
    NSString *_geometrySetName;	// 80 = 0x50
    NSString *_keySetName;	// 88 = 0x58
    NSString *_cachedGestureKeySetName;	// 96 = 0x60
    NSString *_annotations;	// 104 = 0x68
    NSString *_locale;	// 112 = 0x70
}

+ (id)tokenForKeyplane:(id)arg1;	// IMP=0x00600000009bdc19
- (void).cxx_destruct;	// IMP=0x00000000009be37e
- (_Bool)isUsableForCacheToken:(id)arg1 withRenderFlags:(long long)arg2;	// IMP=0x00000000009be1f0
- (id)stringForSplitState:(_Bool)arg1 handBias:(long long)arg2;	// IMP=0x00000000009bdd1b
- (void)annotateWithInt:(int)arg1;	// IMP=0x00000000009bdb92
- (void)annotateWithBool:(_Bool)arg1;	// IMP=0x00000000009bdb02
- (void)setStyling:(CDStruct_227bb23d)arg1;	// IMP=0x00000000009bdaf1
- (CDStruct_227bb23d)styling;	// IMP=0x00000000009bdae0
- (void)setSize:(struct CGSize)arg1;	// IMP=0x00000000009bdac8
- (struct CGSize)size;	// IMP=0x00000000009bdab0
- (id)_initWithKeyplane:(id)arg1 keylayout:(id)arg2;	// IMP=0x00000000009bd683

@end
