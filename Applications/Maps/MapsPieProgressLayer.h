//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class UIColor;

@interface MapsPieProgressLayer : CALayer
{
    UIColor *_progressColor;	// 8 = 0x8
    double _borderLineWidth;	// 16 = 0x10
}

+ (_Bool)needsDisplayForKey:(id)arg1;	// IMP=0x00400000008158e1
- (void).cxx_destruct;	// IMP=0x0020000000815b9d
@property(nonatomic) double borderLineWidth; // @synthesize borderLineWidth=_borderLineWidth;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
- (void)drawInContext:(struct CGContext *)arg1;	// IMP=0x0010000000815974
- (id)initWithLayer:(id)arg1;	// IMP=0x001000000081578a
- (id)init;	// IMP=0x00100000008156d1

// Remaining properties
@property(nonatomic) double progress; // @dynamic progress;

@end
