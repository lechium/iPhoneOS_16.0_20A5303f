//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIASCIIArtFramesRenderer : NSObject
{
    NSArray *_frames;	// 8 = 0x8
    double _outputLineWidth;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000028d8bc
- (id)_normalizeFrames:(id)arg1;	// IMP=0x000000000028d60b
- (struct CGRect)scaledRectForRect:(struct CGRect)arg1 scaleSize:(struct CGSize)arg2;	// IMP=0x000000000028d525
- (id)renderedLines;	// IMP=0x000000000028c7c6
@property(readonly, nonatomic) double outputLineWidth;
@property(readonly, nonatomic) NSArray *frames;
- (id)description;	// IMP=0x000000000028c79b
- (id)visualDescription;	// IMP=0x000000000028c672
- (id)initWithFrames:(id)arg1;	// IMP=0x000000000028c658
- (id)initWithFrames:(id)arg1 outputLineWidth:(double)arg2;	// IMP=0x000000000028c5cb

@end

