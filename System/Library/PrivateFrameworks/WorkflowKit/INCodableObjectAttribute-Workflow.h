//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INCodableObjectAttribute.h>

@interface INCodableObjectAttribute (Workflow)
- (id)mediaTypeFromIntentMediaType:(long long)arg1;	// IMP=0x00900000000f5a1c
- (id)wf_processedParameterValueForValue:(id)arg1;	// IMP=0x00900000000f5976
- (id)wf_contentItemForValue:(id)arg1;	// IMP=0x00900000000f589e
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;	// IMP=0x00900000000f5349
- (void)wf_getProcessedIntentValueForParameterValue:(id)arg1 parameter:(id)arg2 parameterState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00900000000f508d
- (void)wf_updateParameterDictionary:(id)arg1 parameterClass:(Class)arg2 localizer:(id)arg3;	// IMP=0x00900000000f4fc1
- (Class)wf_parameterClass;	// IMP=0x00900000000f4f71
- (Class)wf_objectClass;	// IMP=0x00900000000f4f06
- (Class)wf_facadeClass;	// IMP=0x00900000000f4eae
@end

