//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PDUploadEventsOperation
{
}

+ (id)serviceID;	// IMP=0x00400000000f4c70
- (_Bool)processResponseObject:(id)arg1 error:(id *)arg2;	// IMP=0x00400000000f5286
- (id)requestData;	// IMP=0x00100000000f4d6e
- (void)prepare;	// IMP=0x00100000000f4d3f
- (_Bool)wantsToExecute;	// IMP=0x00100000000f4cc9
- (Class)expectedResponseClass;	// IMP=0x00100000000f4cb8
- (id)acceptContentType;	// IMP=0x00100000000f4cab
- (id)requestContentType;	// IMP=0x00100000000f4c9e
- (id)endpointIdentifier;	// IMP=0x00100000000f4c91
- (id)logSubsystem;	// IMP=0x00100000000f4c7d

@end
