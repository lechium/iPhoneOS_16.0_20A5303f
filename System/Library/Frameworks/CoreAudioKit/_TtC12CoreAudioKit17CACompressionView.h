//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray;
@protocol _TtP12CoreAudioKit32AUCompressionParameterDataSource_><_TtP12CoreAudioKit27CAAUViewParameterDataSource_;

__attribute__((visibility("hidden")))
@interface _TtC12CoreAudioKit17CACompressionView
{
    MISSING_TYPE *diagonalLayer;	// 224 = 0xe0
    MISSING_TYPE *curveFill;	// 232 = 0xe8
    MISSING_TYPE *compressionLine;	// 240 = 0xf0
    MISSING_TYPE *expansionFill;	// 248 = 0xf8
    MISSING_TYPE *compressionFill;	// 256 = 0x100
    MISSING_TYPE *compressionTriangle;	// 264 = 0x108
    MISSING_TYPE *accessibilityFormatter;	// 272 = 0x110
    MISSING_TYPE *controlList;	// 280 = 0x118
    MISSING_TYPE *activeGuides;	// 288 = 0x120
    MISSING_TYPE *paramCache;	// 296 = 0x128
    MISSING_TYPE *activeControl;	// 304 = 0x130
    MISSING_TYPE *accessibileElements;	// 312 = 0x138
    MISSING_TYPE *dataSource;	// 320 = 0x140
}

- (void).cxx_destruct;	// IMP=0x000000000007d720
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007d5c0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000007d3b0
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000007d180
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000007ce70
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000007cb40
- (void)tintColorDidChange;	// IMP=0x000000000007bd70
- (float)valueForYWithLocation:(double)arg1;	// IMP=0x000000000007b220
- (float)valueForXWithLocation:(double)arg1;	// IMP=0x000000000007b190
- (struct CGRect)graphFrame;	// IMP=0x000000000007ad70
- (void)updateGraph;	// IMP=0x000000000007a990
- (void)updateCompressionTriangle;	// IMP=0x00000000000797b0
- (void)updateCompressionExpansionPaths;	// IMP=0x0000000000078ec0
@property(nonatomic, copy) NSArray *accessibilityElements;
@property(nonatomic, retain) id <_TtP12CoreAudioKit32AUCompressionParameterDataSource_><_TtP12CoreAudioKit27CAAUViewParameterDataSource_> dataSource; // @synthesize dataSource;

@end
