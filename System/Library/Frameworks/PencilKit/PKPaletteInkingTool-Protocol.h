//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/PKPaletteTool-Protocol.h>

@class PKInk, UIColor;

@protocol PKPaletteInkingTool <PKPaletteTool>
@property(readonly, nonatomic) PKInk *ink;
- (void)setInkWeight:(double)arg1;
- (void)setInkColor:(UIColor *)arg1;
@end
