//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INCodableCurrencyAmountAttributeMetadata.h>

@interface INCodableCurrencyAmountAttributeMetadata (Workflow)
- (void)wf_updateWithParameterValue:(id)arg1;	// IMP=0x00900000000ded1e
- (void)wf_updateWithParameterState:(id)arg1;	// IMP=0x00900000000dec87
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;	// IMP=0x00900000000deb03
- (_Bool)wf_processParameterValue:(id)arg1 forParameter:(id)arg2 parameterState:(id)arg3 codableAttribute:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00900000000de9d8
- (void)wf_updateParameterDictionary:(id)arg1 forCodableAttribute:(id)arg2 localizer:(id)arg3;	// IMP=0x00900000000de8e3
- (Class)wf_parameterClass;	// IMP=0x00900000000de8d2
- (Class)wf_objectClass;	// IMP=0x00900000000de8c1
@end
