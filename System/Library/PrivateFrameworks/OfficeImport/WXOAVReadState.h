//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, WDParagraph, WXReadState;

__attribute__((visibility("hidden")))
@interface WXOAVReadState
{
    WXReadState *mWxState;	// 72 = 0x48
    WDParagraph *mParagraph;	// 80 = 0x50
    NSMutableDictionary *mNextVmlShapeIdToTextBoxMap;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000412232
- (id)nextVmlShapeIdToTextBoxMap;	// IMP=0x000000000041221d
- (void)setCurrentParagraph:(id)arg1;	// IMP=0x0000000000412209
- (id)currentParagraph;	// IMP=0x00000000004121f4
- (id)wxReadState;	// IMP=0x00000000004121db
- (id)initWithWXReadState:(id)arg1;	// IMP=0x00000000004120b0

@end

