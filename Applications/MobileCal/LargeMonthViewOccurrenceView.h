//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer, LargeMonthViewOccurrence;

@interface LargeMonthViewOccurrenceView : UIView
{
    CALayer *_glowLayer;	// 8 = 0x8
    CALayer *_contentLayer;	// 16 = 0x10
    LargeMonthViewOccurrence *_occurrence;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000147483
@property(retain, nonatomic) LargeMonthViewOccurrence *occurrence; // @synthesize occurrence=_occurrence;
- (void)displayLayer:(id)arg1;	// IMP=0x001000000014726c
- (void)setNeedsDisplay;	// IMP=0x001000000014722f
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00100000001470fd
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000146f11

@end

