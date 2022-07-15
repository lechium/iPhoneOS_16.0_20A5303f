//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKAcknowledgmentGlyphView.h"

@class CKAcknowledgmentGlyphImageView;

__attribute__((visibility("hidden")))
@interface CKExclamationAcknowledgmentGlyphView : CKAcknowledgmentGlyphView
{
    CKAcknowledgmentGlyphImageView *_leftExclamationGlyph;	// 40 = 0x28
    CKAcknowledgmentGlyphImageView *_rightExclamationGlyph;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000052f1ef
@property(retain, nonatomic) CKAcknowledgmentGlyphImageView *rightExclamationGlyph; // @synthesize rightExclamationGlyph=_rightExclamationGlyph;
@property(retain, nonatomic) CKAcknowledgmentGlyphImageView *leftExclamationGlyph; // @synthesize leftExclamationGlyph=_leftExclamationGlyph;
- (double)animationDuration;	// IMP=0x000000000052f197
- (void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000052ec9b
- (struct CGPoint)glyphOffset;	// IMP=0x000000000052ec59
- (long long)acknowledgmentType;	// IMP=0x000000000052ec4e
- (void)setGlyphColor:(id)arg1;	// IMP=0x000000000052ea86
- (void)layoutSubviews;	// IMP=0x000000000052e749
- (id)initWithFrame:(struct CGRect)arg1 color:(BOOL)arg2;	// IMP=0x000000000052e505

@end
