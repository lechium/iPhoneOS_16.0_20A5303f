//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PDASMBootstrapOperation
{
}

+ (id)defaultEndpointInfo;	// IMP=0x00400000000785ff
+ (id)serviceID;	// IMP=0x00100000000785f2
- (_Bool)saveServiceConfig:(id)arg1 forEDUMAID:(_Bool)arg2;	// IMP=0x004000000007a9ca
- (id)saveASMCurrentUserInfo:(id)arg1;	// IMP=0x001000000007960a
- (_Bool)processResponseObject:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000078866
- (_Bool)shouldPurgeASMData;	// IMP=0x00100000000787dd
- (_Bool)canSkipExecution;	// IMP=0x0010000000078750
- (Class)expectedResponseClass;	// IMP=0x001000000007873f
- (id)endpointIdentifier;	// IMP=0x0010000000078732

@end
