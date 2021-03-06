//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _TVStarHistogram : UIView
{
    UIImage *_starImage;	// 8 = 0x8
    NSArray *_starBars;	// 16 = 0x10
    UIColor *_barEmptyColor;	// 24 = 0x18
    UIColor *_barFillColor;	// 32 = 0x20
    double _lineSpacing;	// 40 = 0x28
}

+ (id)_histogramViewWithElement:(id)arg1 existingView:(id)arg2;	// IMP=0x006000000003c6ad
+ (id)histogramViewWithElement:(id)arg1 existingView:(id)arg2;	// IMP=0x006000000003c3c5
- (void).cxx_destruct;	// IMP=0x000000000003da47
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(retain, nonatomic) UIColor *barFillColor; // @synthesize barFillColor=_barFillColor;
@property(retain, nonatomic) UIColor *barEmptyColor; // @synthesize barEmptyColor=_barEmptyColor;
@property(retain, nonatomic) UIImage *starImage; // @synthesize starImage=_starImage;
@property(copy, nonatomic) NSArray *starBars; // @synthesize starBars=_starBars;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000000003cfed
- (_Bool)canBecomeFocused;	// IMP=0x000000000003cfe5

@end

