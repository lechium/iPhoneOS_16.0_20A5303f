//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PDAbstractClassZoneOperation
{
    _Bool _responseStatusPayloadFailed;	// 24 = 0x18
}

+ (id)serviceID;	// IMP=0x00400000000587f0
- (void)_setAuthorizationForAttachmentWithObjectID:(id)arg1 shouldAuthorize:(_Bool)arg2;	// IMP=0x00200000000612b4
- (_Bool)_deleteSurveyStep:(id)arg1;	// IMP=0x0010000000060b0f
- (_Bool)_deleteSurvey:(id)arg1;	// IMP=0x0010000000060645
- (_Bool)_deleteStateChanges:(id)arg1;	// IMP=0x001000000006027b
- (_Bool)_deleteDraftAnswer:(id)arg1;	// IMP=0x00100000000600f5
- (_Bool)_deleteEntity:(Class)arg1 identity:(id)arg2;	// IMP=0x001000000005fdac
- (_Bool)deleteClassWithObjectID:(id)arg1 deletePersons:(_Bool)arg2;	// IMP=0x001000000005fa7b
- (_Bool)deleteHandoutWithObjectID:(id)arg1;	// IMP=0x001000000005f893
- (_Bool)_deleteWithPayload:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005ed48
- (_Bool)_insertOrUpdateArchivedSurveyStep:(id)arg1;	// IMP=0x001000000005e9cb
- (_Bool)_insertOrUpdateSurveyStep:(id)arg1;	// IMP=0x001000000005e3c4
- (_Bool)_insertOrUpdateCollectionItem:(id)arg1;	// IMP=0x001000000005e229
- (_Bool)_insertOrUpdateEntity:(id)arg1;	// IMP=0x001000000005e085
- (void)setHandoutClosedStatusForStateChange:(id)arg1 andStateChangePayload:(id)arg2 forHandout:(id)arg3;	// IMP=0x001000000005e02e
- (void)setCompletionAndLockedStatusForStateChange:(id)arg1 andStateChangePayload:(id)arg2 forAttachment:(id)arg3;	// IMP=0x001000000005dd48
- (_Bool)setCompletionStatus:(int)arg1 forAttachment:(id)arg2 locked:(_Bool)arg3 dateCompleted:(id)arg4 dateModified:(id)arg5;	// IMP=0x001000000005dc57
- (id)_applyStateChangesToParentHandoutEntity:(id)arg1;	// IMP=0x001000000005d62b
- (_Bool)resolveMissingEntityWithObjectID:(id)arg1;	// IMP=0x001000000005d547
- (_Bool)validateStateChangePayload:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005c257
- (_Bool)processStateChange:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005ba78
- (_Bool)processCompletionStatus:(id)arg1;	// IMP=0x001000000005b5c7
- (_Bool)processAuthorizationStatus:(id)arg1;	// IMP=0x001000000005b44b
- (_Bool)processAttachment:(id)arg1;	// IMP=0x001000000005b31b
- (_Bool)processPayloadStatus:(id)arg1 allowMixedResponse:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000005afc1
- (_Bool)deleteCollectionItemsWithReferenceObjectID:(id)arg1;	// IMP=0x001000000005aedd
- (_Bool)updateCollectionItemsReferenceObjectID:(id)arg1 toType:(long long)arg2 andObjectID:(id)arg3;	// IMP=0x001000000005ac40
- (_Bool)_insertOrUpdateArchivedHandout:(id)arg1;	// IMP=0x001000000005ab73
- (_Bool)_insertOrUpdateSurveyAnswer:(id)arg1;	// IMP=0x001000000005a9da
- (_Bool)processPayloadFromResponse:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000596f5
- (_Bool)processPayloadsFromResponse:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000590bc
- (_Bool)processResponse:(id *)arg1;	// IMP=0x0010000000058f48
- (_Bool)stopProcessingIfResponseStatusPayloadFailed;	// IMP=0x0010000000058f40
- (_Bool)processPayloadWithinWriteTransaction:(id)arg1 error:(id *)arg2 stop:(_Bool *)arg3;	// IMP=0x0010000000058bce
- (_Bool)processResponseObject:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000589ff
- (_Bool)parseStreamedResponse:(id)arg1;	// IMP=0x00100000000589a2
- (_Bool)hasBigResponses;	// IMP=0x001000000005899a
- (_Bool)readStreamablePayload:(id)arg1 reader:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000058835
- (long long)streamablePayloadClassTagValue;	// IMP=0x001000000005882a
- (Class)streamablePayloadClass;	// IMP=0x0010000000058819
- (_Bool)acceptsPayloadType:(int)arg1;	// IMP=0x0010000000058811
- (_Bool)shouldProcessPayloadWithStatusCode:(int)arg1;	// IMP=0x0010000000058805
- (_Bool)allowMixedResponseStatusCode;	// IMP=0x00100000000587fd

@end
