//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntentSlotDescription.h>

@class NSString;

@interface INIntentSlotDescription (Workflow)
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;	// IMP=0x002000000024df2d
- (id)wf_outputContentItemForOutput:(id)arg1;	// IMP=0x002000000024df25
- (void)wf_getProcessedIntentValueForParameterValue:(id)arg1 parameter:(id)arg2 parameterState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x002000000024df12
- (void)wf_updateParameterDictionary:(id)arg1 parameterClass:(Class)arg2 localizer:(id)arg3;	// IMP=0x002000000024db30
- (id)wf_processedParameterValueForValue:(id)arg1;	// IMP=0x002000000024db28
- (id)wf_contentItemForValue:(id)arg1;	// IMP=0x002000000024db20
@property(readonly, nonatomic) Class wf_contentItemClass;
- (id)wf_outputDisplayNameWithLocalizer:(id)arg1;	// IMP=0x002000000024db10
@property(readonly, nonatomic) Class wf_parameterClass;
@property(readonly, nonatomic) _Bool wf_multipleValues;
@property(readonly, nonatomic) Class wf_facadeClass;
@property(readonly, nonatomic) Class wf_objectClass;
@property(readonly, nonatomic) NSString *wf_slotName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

