//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GQUProgressiveHelper, NSString;

@interface GQUProgressiveOutputBundle : NSObject
{
    GQUProgressiveHelper *mHelper;	// 8 = 0x8
    struct __CFDictionary *mQuickLookProperties;	// 16 = 0x10
    struct __CFDictionary *mAttachmentsURLs;	// 24 = 0x18
    struct __CFDictionary *mComputedAttachments;	// 32 = 0x20
    struct __CFString *mUuidStr;	// 40 = 0x28
    struct __CFString *mUriScheme;	// 48 = 0x30
    _Bool mPreviewStarted;	// 56 = 0x38
}

- (void)setCurrentSheetUri:(struct __CFString *)arg1;	// IMP=0x0000000000015915
- (struct __CFURL *)getAttachmentURL:(struct __CFString *)arg1 mimeType:(struct __CFString *)arg2;	// IMP=0x0000000000015805
- (void)closeAttachment:(struct __CFString *)arg1;	// IMP=0x00000000000157d1
- (void)startProgressiveData;	// IMP=0x0000000000015504
- (void)setPageElementXPath:(struct __CFString *)arg1 withThumbnailsOnLeft:(_Bool)arg2;	// IMP=0x00000000000154ef
- (void)setDocumentSize:(struct CGSize)arg1;	// IMP=0x000000000001542b
- (_Bool)setData:(struct __CFData *)arg1 mimeType:(struct __CFString *)arg2 forNamedResource:(struct __CFString *)arg3;	// IMP=0x00000000000152de
- (_Bool)appendData:(struct __CFData *)arg1 mimeType:(struct __CFString *)arg2 resourceName:(struct __CFString *)arg3;	// IMP=0x0000000000015293
- (_Bool)setDataForMainHtmlResource:(struct __CFData *)arg1;	// IMP=0x0000000000015275
- (struct __CFString *)createUriForResource:(struct __CFString *)arg1;	// IMP=0x0000000000015251
- (void)dealloc;	// IMP=0x00000000000151bd
- (id)initWithHandler:(id)arg1;	// IMP=0x00000000000150a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

