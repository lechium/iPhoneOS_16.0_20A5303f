//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GQPProcessorFactory : NSObject
{
}

+ (id)retainedProcessorForDocument:(struct __CFURL *)arg1 zipArchive:(id)arg2 uti:(struct __CFString *)arg3 outputType:(int)arg4 outputPath:(struct __CFString *)arg5 previewRequest:(struct __QLPreviewRequest *)arg6 progressiveHelper:(id)arg7;	// IMP=0x008000000003f019
+ (id)retainedProcessorForDocument:(struct __CFURL *)arg1 zipArchive:(id)arg2 uti:(struct __CFString *)arg3 outputType:(int)arg4 outputPath:(struct __CFString *)arg5 previewRequest:(struct __QLPreviewRequest *)arg6 progressiveHelper:(id)arg7 cryptoKey:(id)arg8;	// IMP=0x008000000003eea3
+ (int)applicationForDocumentUti:(struct __CFString *)arg1;	// IMP=0x008000000003eccf
+ (struct __CFString *)createUtiForDocument:(struct __CFString *)arg1;	// IMP=0x008000000003ec0d
+ (struct __CFURL *)newEmbeddedSageUrlForTangierDocumentUrl:(struct __CFURL *)arg1 uti:(struct __CFString *)arg2 isBundle:(_Bool *)arg3;	// IMP=0x008000000003eab6
+ (_Bool)isTemplateUti:(struct __CFString *)arg1;	// IMP=0x008000000003ea6b
+ (_Bool)isTangierTEFDocumentUti:(struct __CFString *)arg1;	// IMP=0x008000000003ea20

@end

