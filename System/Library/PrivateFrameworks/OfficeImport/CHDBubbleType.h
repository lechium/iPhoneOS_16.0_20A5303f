//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CHDBubbleType
{
    _Bool mShowNegativeBubbles;	// 41 = 0x29
    _Bool mSizeRepresentsRadius;	// 42 = 0x2a
    int mBubbleScale;	// 44 = 0x2c
}

- (void)setSizeRepresentsRadius:(_Bool)arg1;	// IMP=0x00000000003c71a1
- (_Bool)isSizeRepresentingRadius;	// IMP=0x00000000003c7191
- (void)setBubbleScale:(int)arg1;	// IMP=0x00000000003c7181
- (int)bubbleScale;	// IMP=0x00000000003c7171
- (void)setShowNegBubbles:(_Bool)arg1;	// IMP=0x00000000003c7161
- (_Bool)isShowNegBubbles;	// IMP=0x00000000003c7151
- (_Bool)is3DType;	// IMP=0x00000000003c7005
- (int)defaultLabelPosition;	// IMP=0x00000000003c6faa
- (id)initWithChart:(id)arg1;	// IMP=0x00000000003c6f68

@end

