//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;

@interface PDASMPayloadOperation
{
    NSMutableSet *_unresolvedMissingEntityIDs;	// 24 = 0x18
}

+ (id)serviceID;	// IMP=0x0040000000095074
- (void).cxx_destruct;	// IMP=0x0020000000099bed
- (_Bool)_deleteEntity:(Class)arg1 identity:(id)arg2;	// IMP=0x0010000000099994
- (_Bool)deleteClassMemberWithClassID:(id)arg1 personIDs:(id)arg2;	// IMP=0x00100000000995fa
- (_Bool)forgetAboutDeletedEntity:(Class)arg1 withObjectID:(id)arg2;	// IMP=0x001000000009942a
- (_Bool)deleteClassWithObjectID:(id)arg1 deletePersons:(_Bool)arg2;	// IMP=0x0010000000099026
- (_Bool)deletePersonWithObjectID:(id)arg1;	// IMP=0x0010000000098df4
- (_Bool)_deleteWithPayload:(id)arg1 error:(id *)arg2;	// IMP=0x001000000009855d
- (_Bool)insertEntity:(id)arg1;	// IMP=0x0010000000098202
- (_Bool)handleZoneRemoved:(id)arg1;	// IMP=0x0010000000097ee3
- (_Bool)processAdminRequestAccountPayload:(id)arg1;	// IMP=0x0010000000097be6
- (_Bool)processAdminRequest:(id)arg1;	// IMP=0x00100000000979bb
- (_Bool)processOrganization:(id)arg1;	// IMP=0x001000000009752a
- (_Bool)processLocation:(id)arg1;	// IMP=0x00100000000974de
- (_Bool)processClassMember:(id)arg1;	// IMP=0x00100000000971e8
- (_Bool)processClassPayload:(id)arg1;	// IMP=0x00100000000970fb
- (_Bool)processPerson:(id)arg1;	// IMP=0x001000000009702f
- (void)_forceNoCache:(id)arg1;	// IMP=0x0010000000096fdd
- (_Bool)processResponseZone:(id)arg1;	// IMP=0x0010000000096fd5
- (_Bool)processStatusPayload:(id)arg1 allowMixedResponse:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000096c80
- (_Bool)processPayloadFromResponse:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000096422
- (_Bool)shouldProcessPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000961a9
- (_Bool)shouldProcessPayloadWithStatusCode:(int)arg1;	// IMP=0x0010000000096193
- (_Bool)processPayloads:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000095c34
- (_Bool)processPayloadWithinWriteTransaction:(id)arg1 error:(id *)arg2 stop:(_Bool *)arg3;	// IMP=0x0010000000095765
- (void)finishedResponseProcessing;	// IMP=0x001000000009575f
- (_Bool)processResponseObject:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000095574
- (_Bool)writePayload:(id)arg1 toRequest:(id)arg2 writer:(id)arg3;	// IMP=0x001000000009528c
- (_Bool)hasBigResponses;	// IMP=0x0010000000095284
- (int)actionForPayload:(id)arg1;	// IMP=0x001000000009526f
- (_Bool)readStreamablePayload:(id)arg1 reader:(id)arg2 error:(id *)arg3;	// IMP=0x001000000009510a
- (long long)streamablePayloadClassTagValue;	// IMP=0x00100000000950ff
- (Class)streamablePayloadClass;	// IMP=0x00100000000950ee
- (_Bool)acceptsPayloadType:(int)arg1;	// IMP=0x00100000000950e6
- (_Bool)allowMixedResponseStatusCode;	// IMP=0x00100000000950de
- (id)initWithDatabase:(id)arg1;	// IMP=0x0010000000095081

@end

