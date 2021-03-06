//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GQUFileOutputBundle : NSObject
{
    struct __CFURL *mOutputUrl;	// 8 = 0x8
}

- (void)setPageElementXPath:(struct __CFString *)arg1 withThumbnailsOnLeft:(_Bool)arg2;	// IMP=0x000000000001509a
- (void)setDocumentSize:(struct CGSize)arg1;	// IMP=0x0000000000015094
- (_Bool)setData:(struct __CFData *)arg1 mimeType:(struct __CFString *)arg2 forNamedResource:(struct __CFString *)arg3;	// IMP=0x0000000000014eee
- (_Bool)setDataForMainHtmlResource:(struct __CFData *)arg1;	// IMP=0x0000000000014ed3
- (struct __CFString *)createUriForResource:(struct __CFString *)arg1;	// IMP=0x0000000000014ec6
- (void)dealloc;	// IMP=0x0000000000014e87
- (id)initWithOutputPath:(struct __CFString *)arg1;	// IMP=0x0000000000014ddc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

