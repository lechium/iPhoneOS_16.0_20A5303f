//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UISVectorGlyphDrawing;

@interface PBUndoInteractionHUDIconPasteButtonDrawing : NSObject
{
    UISVectorGlyphDrawing *_glyph;	// 8 = 0x8
    double _width;	// 16 = 0x10
    struct CGPoint _glyphOffset;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000001d654
- (void)drawInContext:(struct CGContext *)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x001000000001d631
@property(readonly, nonatomic) struct CGSize drawingSize;
- (id)initWithStyle:(id)arg1 tag:(id)arg2;	// IMP=0x001000000001d3ba

// Remaining properties
@property(readonly, nonatomic) struct CGRect alignmentRect;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
