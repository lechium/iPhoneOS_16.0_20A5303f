//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INCodableMeasurementAttributeMetadata.h>

@class NSString;

@interface INCodableMeasurementAttributeMetadata (Workflow)
- (void)wf_updateWithParameterValue:(id)arg1;	// IMP=0x000000000026efb2
- (void)wf_updateWithParameterState:(id)arg1;	// IMP=0x000000000026ee91
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;	// IMP=0x000000000026ecd1
- (_Bool)wf_processParameterValue:(id)arg1 forParameter:(id)arg2 parameterState:(id)arg3 codableAttribute:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000026e9ae
- (void)wf_updateParameterDictionary:(id)arg1 forCodableAttribute:(id)arg2 localizer:(id)arg3;	// IMP=0x000000000026e5bf
- (Class)wf_parameterClass;	// IMP=0x000000000026e5ae
- (Class)wf_objectClass;	// IMP=0x000000000026e59d
@property(readonly, nonatomic) NSString *wf_measurementType;
@end

