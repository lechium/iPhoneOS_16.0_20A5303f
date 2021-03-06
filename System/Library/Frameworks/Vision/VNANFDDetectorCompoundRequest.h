//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNANFDDetectorCompoundRequest
{
}

+ (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;	// IMP=0x008000000029b158
+ (Class)configurationClass;	// IMP=0x008000000029b147
+ (id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;	// IMP=0x008000000029aba0
+ (long long)compoundRequestRevisionForRequest:(id)arg1;	// IMP=0x008000000029aa46
+ (const CDStruct_7d93034e *)revisionAvailability;	// IMP=0x008000000029bb5a
- (void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2;	// IMP=0x000000000029a4d3
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000029a23a
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;	// IMP=0x000000000029a16b
- (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;	// IMP=0x000000000029a159
- (id)initWithDetectorType:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000000299b33
- (long long)dependencyProcessingOrdinality;	// IMP=0x0000000000299b21
- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000002999e5

@end

