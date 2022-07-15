//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface OABShapeManager
{
    void *mShape;	// 40 = 0x28
}

- (_Bool)hidden;	// IMP=0x000000000002de9a
- (_Bool)textPathStrikethrough;	// IMP=0x000000000030703d
- (_Bool)textPathSmallcaps;	// IMP=0x0000000000155080
- (_Bool)textPathUnderline;	// IMP=0x0000000000306fd9
- (_Bool)textPathItalic;	// IMP=0x0000000000154fec
- (_Bool)textPathBold;	// IMP=0x0000000000154f58
- (id)textPathFontFamily;	// IMP=0x0000000000154dfd
- (int)textPathFontSize;	// IMP=0x0000000000154ec4
- (int)textPathTextAlignment;	// IMP=0x0000000000154a16
- (id)textPathUnicodeString;	// IMP=0x0000000000154ac9
- (_Bool)isTextPath;	// IMP=0x000000000002917e
- (_Bool)isShadowed;	// IMP=0x000000000002997f
- (_Bool)isStroked;	// IMP=0x0000000000029936
- (_Bool)isFilled;	// IMP=0x0000000000029135
- (_Bool)isShadowOK;	// IMP=0x0000000000152966
- (_Bool)isStrokeOK;	// IMP=0x0000000000102626
- (_Bool)isFillOK;	// IMP=0x0000000000102c59
- (id)initWithShape:(void *)arg1;	// IMP=0x0000000000240781
- (id)initWithShape:(void *)arg1 masterShape:(void *)arg2;	// IMP=0x00000000000290bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
