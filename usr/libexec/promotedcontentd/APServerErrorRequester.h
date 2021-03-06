//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface APServerErrorRequester
{
    int _legacyServerErrorCode;	// 8 = 0x8
    NSString *_errorDetails;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000008588a
@property(retain, nonatomic) NSString *errorDetails; // @synthesize errorDetails=_errorDetails;
@property(nonatomic) int legacyServerErrorCode; // @synthesize legacyServerErrorCode=_legacyServerErrorCode;
- (id)protoBuffer;	// IMP=0x0010000000085789
- (_Bool)isAllowedEmptyResponse;	// IMP=0x0010000000085781
- (Class)responseClass;	// IMP=0x0010000000085770
- (id)initWithMetric:(id)arg1 internalContent:(id)arg2 context:(id)arg3 idAccount:(id)arg4 error:(id)arg5;	// IMP=0x0010000000085639

@end

