//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKXAtomBindingImplementation;

@interface CKXAtomORCSchemaFormatVersionORCv2 : NSObject
{
    CKXAtomBindingImplementation *_binding;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000e1b4f
@property(readonly, nonatomic) CKXAtomBindingImplementation *binding; // @synthesize binding=_binding;
- (unsigned long long)valueColumnIndexForField:(unsigned long long)arg1;	// IMP=0x00000000000e1a4d
- (unsigned long long)listColumnIndexForReference:(unsigned long long)arg1;	// IMP=0x00000000000e1999
- (unsigned long long)structReferenceIndexForReference:(unsigned long long)arg1;	// IMP=0x00000000000e18c9
- (unsigned long long)topLevelIndexForStruct:(unsigned long long)arg1;	// IMP=0x00000000000e17dc
- (void)configureColumnsWithRootColumn:(void *)arg1;	// IMP=0x00000000000e159d
- (id)generateSchema;	// IMP=0x00000000000e1398
- (id)initWithBinding:(id)arg1;	// IMP=0x00000000000e1319

@end

