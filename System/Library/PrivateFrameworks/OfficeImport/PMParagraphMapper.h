//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADParagraph;

__attribute__((visibility("hidden")))
@interface PMParagraphMapper
{
    OADParagraph *mParagraph;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000047379e
- (void)mapAt:(id)arg1 withState:(id)arg2 isFirstParagraph:(_Bool)arg3;	// IMP=0x00000000000a887d
- (id)initWithOadParagraph:(id)arg1 parent:(id)arg2;	// IMP=0x00000000000a87f1
- (void)addEndCharacterStyleToStyle:(id)arg1;	// IMP=0x00000000000a9283
- (id)fontScheme;	// IMP=0x00000000000a9525
- (id)copyParagraphStyleWithState:(id)arg1 isFirstParagraph:(_Bool)arg2;	// IMP=0x00000000000a8c5b
- (int)firstTextRunFontSize;	// IMP=0x00000000000a9c01

@end
