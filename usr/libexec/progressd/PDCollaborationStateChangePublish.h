//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface PDCollaborationStateChangePublish
{
    long long _totalStateChanges;	// 24 = 0x18
    NSArray *_requestedStateChanges;	// 32 = 0x20
    NSMutableDictionary *_statesByError;	// 40 = 0x28
    NSMutableArray *_statesFromServer;	// 48 = 0x30
    NSMutableArray *_statesInConflict;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000185e4f
@property(readonly, nonatomic) NSMutableArray *statesInConflict; // @synthesize statesInConflict=_statesInConflict;
@property(readonly, nonatomic) NSMutableArray *statesFromServer; // @synthesize statesFromServer=_statesFromServer;
@property(readonly, nonatomic) NSMutableDictionary *statesByError; // @synthesize statesByError=_statesByError;
@property(readonly, nonatomic) NSArray *requestedStateChanges; // @synthesize requestedStateChanges=_requestedStateChanges;
- (id)errorWithUserInfo;	// IMP=0x0010000000185c09
- (_Bool)processPayloadFromResponse:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001854b4
- (_Bool)stopProcessingIfResponseStatusPayloadFailed;	// IMP=0x00100000001854ac
- (id)requestData;	// IMP=0x00100000001844ee
- (void)consolidateChangesByTargetAndOwner;	// IMP=0x0010000000184175
- (id)assetsPayloadsForStateChange:(id)arg1;	// IMP=0x00100000001836ec
- (void)mergeExistingLocalStateIntoRequestStateChange:(id)arg1;	// IMP=0x0010000000182f95
- (long long)maxExecutionCount;	// IMP=0x0010000000182e67
- (_Bool)wantsToExecute;	// IMP=0x0010000000182e43
- (Class)expectedResponseClass;	// IMP=0x0010000000182e32
- (id)acceptContentType;	// IMP=0x0010000000182e25
- (id)requestContentType;	// IMP=0x0010000000182e18
- (id)endpointIdentifier;	// IMP=0x0010000000182e0b
- (_Bool)acceptsPayloadType:(int)arg1;	// IMP=0x0010000000182df2
- (_Bool)shouldProcessPayloadWithStatusCode:(int)arg1;	// IMP=0x0010000000182de0
- (_Bool)shouldSaveStateChangeWithStatusCode:(int)arg1;	// IMP=0x0010000000182dc9
- (_Bool)allowMixedResponseStatusCode;	// IMP=0x0010000000182dc1
- (id)logSubsystem;	// IMP=0x0010000000182dad
- (id)initWithDatabase:(id)arg1 changedStates:(id)arg2;	// IMP=0x0010000000182cc6

@end

