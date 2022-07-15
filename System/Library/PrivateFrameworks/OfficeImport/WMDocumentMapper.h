//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, WDDocument;

__attribute__((visibility("hidden")))
@interface WMDocumentMapper
{
    NSString *mFileName;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000045cb48
- (void)setFileName:(id)arg1;	// IMP=0x00000000000ea1e3
- (id)fileName;	// IMP=0x00000000001cf6d9
- (struct CGSize)contentSizeForDevice;	// IMP=0x00000000000eae99
- (struct CGSize)pageSizeForDevice;	// IMP=0x00000000000eac0d
- (id)documentTitle;	// IMP=0x00000000000eb957
- (id)styleMatrix;	// IMP=0x000000000045ca67
- (id)archiver;	// IMP=0x00000000000ebb7b
- (void)mapWithState:(id)arg1;	// IMP=0x00000000000ea1f4
- (void)mapDefaultCssStylesAt:(id)arg1;	// IMP=0x00000000000ebb89
- (int)defaultTabWidth;	// IMP=0x00000000000f37b2
- (id)blipAtIndex:(unsigned int)arg1;	// IMP=0x000000000016709f
- (double)bottomMargin;	// IMP=0x00000000000eb7d9
- (double)headerMargin;	// IMP=0x00000000000eb608
- (double)topMargin;	// IMP=0x00000000000eb48a
- (double)rightMargin;	// IMP=0x00000000000eb30c
- (double)leftMargin;	// IMP=0x00000000000eb18e
- (_Bool)hasSessionBreakAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000ebd88

// Remaining properties
@property(readonly) WDDocument *document; // @dynamic document;

@end
