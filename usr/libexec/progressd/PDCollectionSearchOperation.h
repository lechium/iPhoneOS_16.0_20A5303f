//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PDCollectionSearchOperation
{
    _Bool _firstRun;	// 24 = 0x18
    _Bool _responseStatusPayloadFailed;	// 25 = 0x19
    int _searchType;	// 28 = 0x1c
}

- (id)createHandoutQueryRequest;	// IMP=0x00200000000540a9
- (id)createCollectionQueryRequest;	// IMP=0x0010000000053ec5
- (id)logSubsystem;	// IMP=0x0010000000053eb1
- (_Bool)needsToMakeNetworkRequest;	// IMP=0x0010000000053ea9
- (_Bool)wantsToExecute;	// IMP=0x0010000000053e50
- (_Bool)allowMixedResponseStatusCode;	// IMP=0x0010000000053e48
- (void)execute;	// IMP=0x0010000000053e0c
- (_Bool)handleZoneRemoved:(id)arg1;	// IMP=0x0010000000053e04
- (id)acceptContentType;	// IMP=0x0010000000053df7
- (id)requestContentType;	// IMP=0x0010000000053dea
- (_Bool)processResponseObject:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000053650
- (id)requestData;	// IMP=0x00100000000535c5
- (Class)expectedResponseClass;	// IMP=0x00100000000535b4
- (id)endpointIdentifier;	// IMP=0x00100000000535a7
- (_Bool)acceptsPayloadType:(int)arg1;	// IMP=0x001000000005358c
- (id)initForCollectionItemsWithDatabase:(id)arg1;	// IMP=0x001000000005353f
- (id)initForCollectionsWithDatabase:(id)arg1;	// IMP=0x00100000000534f2
- (id)initWithDatabase:(id)arg1;	// IMP=0x00100000000534b3

@end

