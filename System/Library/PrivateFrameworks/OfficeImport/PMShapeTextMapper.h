//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CMStyle, OADOrientedBounds, OADTextBody;

__attribute__((visibility("hidden")))
@interface PMShapeTextMapper
{
    OADTextBody *mTextBody;	// 40 = 0x28
    OADOrientedBounds *mBounds;	// 48 = 0x30
    CMStyle *mStyle;	// 56 = 0x38
    _Bool mRectangular;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000473e36
- (unsigned char)textAnchor;	// IMP=0x00000000001feb61
- (_Bool)isTableCellContent;	// IMP=0x00000000000a86f7
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x00000000000a7b42
- (void)setRectangular:(_Bool)arg1;	// IMP=0x00000000000a7b32
- (id)initWithOadTextBody:(id)arg1 bounds:(id)arg2 parent:(id)arg3;	// IMP=0x00000000000a7a2b

@end

