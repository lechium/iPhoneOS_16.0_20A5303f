//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDFFormPrivateVars;

__attribute__((visibility("hidden")))
@interface PDFForm : NSObject
{
    PDFFormPrivateVars *_private;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000026645
- (void)setDocument:(id)arg1;	// IMP=0x00000000000264ee
- (struct __CFDictionary *)createDictionaryRef;	// IMP=0x0000000000026370
- (void)addNeedsAppearanceToDictionaryRef:(struct __CFDictionary *)arg1;	// IMP=0x0000000000026352
- (id)fieldNamed:(id)arg1;	// IMP=0x000000000002623b
- (void)_commonResetForm:(id)arg1 inclusive:(_Bool)arg2;	// IMP=0x0000000000025f35
- (id)description;	// IMP=0x0000000000025e27
- (void)resetFormExcludingFields:(id)arg1;	// IMP=0x0000000000025e13
- (void)resetFormForFields:(id)arg1;	// IMP=0x0000000000025dfc
- (void)removeFormFieldWithFieldName:(id)arg1;	// IMP=0x0000000000025db0
- (void)addFormField:(id)arg1;	// IMP=0x0000000000025cdf
- (struct CGPDFString *)defaultDAStringRef;	// IMP=0x0000000000025cd1
- (id)defaultStringValueForFieldNamed:(id)arg1;	// IMP=0x0000000000025c78
- (id)stringValueForFieldNamed:(id)arg1;	// IMP=0x0000000000025c1f
- (void)setStringValue:(id)arg1 forFieldNamed:(id)arg2 postFormChangeNotification:(_Bool)arg3;	// IMP=0x0000000000025aca
- (id)fieldNames;	// IMP=0x00000000000259a3
- (id)document;	// IMP=0x0000000000025989
- (void)dealloc;	// IMP=0x000000000002594b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000025701
- (id)initWithDocument:(id)arg1;	// IMP=0x000000000002548c
- (id)init;	// IMP=0x00000000000253e6

@end

