//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WDCharacterRun, WDText;

__attribute__((visibility("hidden")))
@interface WDNote
{
    WDText *mText;	// 8 = 0x8
    WDCharacterRun *mReference;	// 16 = 0x10
    _Bool mAutomaticNumbering;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003f96d8
- (id)description;	// IMP=0x00000000003f969a
- (id)initWithParagraph:(id)arg1 footnote:(_Bool)arg2;	// IMP=0x00000000001661d8
- (int)runType;	// IMP=0x00000000001666ef
- (void)setAutomaticNumbering:(_Bool)arg1;	// IMP=0x00000000001666ca
- (_Bool)automaticNumbering;	// IMP=0x0000000000230816
- (id)reference;	// IMP=0x00000000001666da
- (id)text;	// IMP=0x0000000000166670

@end

