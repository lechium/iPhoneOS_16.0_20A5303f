//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PDFAKAnnotationSerializationHelper : NSObject
{
}

+ (_Bool)_shouldUseAKAnnotation:(id)arg1 toRepresentCGPDFDictionary:(struct CGPDFDictionary *)arg2;	// IMP=0x008000000005c639
+ (_Bool)_annotationClassHasSeniority:(id)arg1;	// IMP=0x008000000005c403
+ (id)akAnnotationFromCGPDFAnnotation:(struct CGPDFAnnotation *)arg1 andDictionary:(struct CGPDFDictionary *)arg2;	// IMP=0x008000000005c25e
+ (void)addAKAnnotation:(id)arg1 toAnnotationDictionary:(struct __CFDictionary *)arg2;	// IMP=0x008000000005c108

@end

