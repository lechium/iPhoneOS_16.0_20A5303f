//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmojiKit/EMKLayoutManager.h>

@class NSMutableAttributedString, NSMutableDictionary, NSTimer, UIColor;
@protocol CKTextEntryLayoutManagerMentionsDelegate;

__attribute__((visibility("hidden")))
@interface CKTextEntryLayoutManager : EMKLayoutManager
{
    id <CKTextEntryLayoutManagerMentionsDelegate> _mentionsDelegate;	// 8 = 0x8
    NSMutableAttributedString *_mentionAttributes;	// 16 = 0x10
    UIColor *_currentMentionColor;	// 24 = 0x18
    double _currentMentionScale;	// 32 = 0x20
    UIColor *_currentMentionShadowColor;	// 40 = 0x28
    NSMutableDictionary *_animationsByIdentifier;	// 48 = 0x30
    NSTimer *_mentionTimer;	// 56 = 0x38
    struct CGSize _currentMentionOffset;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001e0fff
@property(retain, nonatomic) NSTimer *mentionTimer; // @synthesize mentionTimer=_mentionTimer;
@property(retain, nonatomic) NSMutableDictionary *animationsByIdentifier; // @synthesize animationsByIdentifier=_animationsByIdentifier;
@property(retain, nonatomic) UIColor *currentMentionShadowColor; // @synthesize currentMentionShadowColor=_currentMentionShadowColor;
@property(nonatomic) struct CGSize currentMentionOffset; // @synthesize currentMentionOffset=_currentMentionOffset;
@property(nonatomic) double currentMentionScale; // @synthesize currentMentionScale=_currentMentionScale;
@property(retain, nonatomic) UIColor *currentMentionColor; // @synthesize currentMentionColor=_currentMentionColor;
@property(retain, nonatomic) NSMutableAttributedString *mentionAttributes; // @synthesize mentionAttributes=_mentionAttributes;
@property(nonatomic) __weak id <CKTextEntryLayoutManagerMentionsDelegate> mentionsDelegate; // @synthesize mentionsDelegate=_mentionsDelegate;
- (void)showCGGlyphs:(const unsigned short *)arg1 positions:(const struct CGPoint *)arg2 count:(long long)arg3 font:(id)arg4 textMatrix:(struct CGAffineTransform)arg5 attributes:(id)arg6 inContext:(struct CGContext *)arg7;	// IMP=0x00000000001e0b07
- (void)drawAttributedMentionGlyphsForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x00000000001e05b6
- (void)drawGlyphsForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x00000000001e04e3
- (void)updateDisplayForMentionGlyphRangeRemovingAttribute:(_Bool)arg1;	// IMP=0x00000000001e0307
- (void)updateMentionDisplay;	// IMP=0x00000000001e02bb
- (void)stopTimerRemovingAttribute:(_Bool)arg1;	// IMP=0x00000000001e0254
- (void)startTimerIfNeeded;	// IMP=0x00000000001e014f
- (_Bool)isAnyMentionAnimationActive;	// IMP=0x00000000001dfee1
- (void)updateMentionAttributes:(id)arg1;	// IMP=0x00000000001dfcc2
- (id)init;	// IMP=0x00000000001dfbf4

@end
