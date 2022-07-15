//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary;

@interface PDHandoutPublish
{
    NSMutableDictionary *_objectMap;	// 24 = 0x18
    NSArray *_handoutGraph;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000146ac3
@property(readonly, nonatomic) NSArray *handoutGraph; // @synthesize handoutGraph=_handoutGraph;
- (void)_addDependentObject:(id)arg1 to:(id)arg2;	// IMP=0x001000000014680d
- (void)_buildDependencyHashMap:(id)arg1;	// IMP=0x001000000014643c
- (id)_findDependencyObjects:(id)arg1 from:(id)arg2;	// IMP=0x0010000000146335
- (_Bool)stopProcessingIfResponseStatusPayloadFailed;	// IMP=0x001000000014632d
- (id)requestData;	// IMP=0x0010000000145638
- (_Bool)processPayloadStatus:(id)arg1 allowMixedResponse:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000001452b9
- (_Bool)shouldProcessPayload:(id)arg1;	// IMP=0x0010000000145223
- (_Bool)allowMixedResponseStatusCode;	// IMP=0x001000000014521b
- (Class)expectedResponseClass;	// IMP=0x001000000014520a
- (id)acceptContentType;	// IMP=0x00100000001451fd
- (id)requestContentType;	// IMP=0x00100000001451f0
- (id)endpointIdentifier;	// IMP=0x00100000001451e3
- (_Bool)acceptsPayloadType:(int)arg1;	// IMP=0x00100000001451ca
- (id)logSubsystem;	// IMP=0x00100000001451b6
- (id)initWithDatabase:(id)arg1 handoutGraph:(id)arg2;	// IMP=0x0010000000145110

@end
