//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GQDSStyle;

@interface GQDWPParagraph
{
    GQDSStyle *mParaStyle;	// 16 = 0x10
    long long mListLevel;	// 24 = 0x18
    _Bool mRestartList;	// 32 = 0x20
    _Bool mContinue;	// 33 = 0x21
    _Bool mIsHidden;	// 34 = 0x22
}

- (_Bool)isHidden;	// IMP=0x0000000000022088
- (_Bool)isBlank;	// IMP=0x0000000000021f88
- (_Bool)cont;	// IMP=0x0000000000021f78
- (_Bool)restartList;	// IMP=0x0000000000021f68
- (long long)listLevel;	// IMP=0x0000000000021f57
- (id)paragraphStyle;	// IMP=0x0000000000021f46
- (void)dealloc;	// IMP=0x0000000000021f04
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;	// IMP=0x0000000000022098

@end
