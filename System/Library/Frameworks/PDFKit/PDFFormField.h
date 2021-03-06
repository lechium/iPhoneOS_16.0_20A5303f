//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDFFormFieldPrivateVars;

__attribute__((visibility("hidden")))
@interface PDFFormField : NSObject
{
    PDFFormFieldPrivateVars *_private;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003da96
- (_Bool)_isRedacted;	// IMP=0x000000000003d9c0
- (void)addStringDefaultValueToDictionaryRef:(struct __CFDictionary *)arg1;	// IMP=0x000000000003d97a
- (void)addNameDefaultValueToDictionaryRef:(struct __CFDictionary *)arg1;	// IMP=0x000000000003d914
- (void)addStringValueToDictionaryRef:(struct __CFDictionary *)arg1;	// IMP=0x000000000003d8ce
- (void)addNameValueToDictionaryRef:(struct __CFDictionary *)arg1;	// IMP=0x000000000003d868
- (void)addFieldNameToDictionaryRef:(struct __CFDictionary *)arg1;	// IMP=0x000000000003d822
- (void)addFieldTypeToDictionaryRef:(struct __CFDictionary *)arg1;	// IMP=0x000000000003d7f0
- (id)description;	// IMP=0x000000000003d733
- (_Bool)writeDefaultValue;	// IMP=0x000000000003d726
- (void)setWriteDefaultValue:(_Bool)arg1;	// IMP=0x000000000003d719
- (id)defaultStringValue;	// IMP=0x000000000003d707
- (void)setDefaultStringValue:(id)arg1;	// IMP=0x000000000003d6b8
- (id)stringValue;	// IMP=0x000000000003d6a6
- (void)setStringValue:(id)arg1;	// IMP=0x000000000003d657
- (id)fieldName;	// IMP=0x000000000003d645
- (void)setFieldName:(id)arg1;	// IMP=0x000000000003d5f6
- (long long)buttonType;	// IMP=0x000000000003d5e8
- (void)setButtonType:(long long)arg1;	// IMP=0x000000000003d5da
- (int)fieldType;	// IMP=0x000000000003d5cd
- (void)setFieldType:(int)arg1;	// IMP=0x000000000003d5c0
- (id)document;	// IMP=0x000000000003d5a6
- (void)setDocument:(id)arg1;	// IMP=0x000000000003d055
- (struct __CFDictionary *)createDictionaryRef;	// IMP=0x000000000003c8df
- (void)commonCreateDictionaryRef:(struct __CFDictionary *)arg1;	// IMP=0x000000000003c853
- (struct __CFDictionary *)dictionaryRef;	// IMP=0x000000000003c801
- (void)clearDictionaryRef;	// IMP=0x000000000003c76b
- (void)dealloc;	// IMP=0x000000000003c72d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003c59e
- (void)commonInit;	// IMP=0x000000000003c4e8
- (id)initWithFormDictionary:(struct CGPDFDictionary *)arg1;	// IMP=0x000000000003c15d
- (id)initWithAnnotation:(id)arg1;	// IMP=0x000000000003bd2f

@end

