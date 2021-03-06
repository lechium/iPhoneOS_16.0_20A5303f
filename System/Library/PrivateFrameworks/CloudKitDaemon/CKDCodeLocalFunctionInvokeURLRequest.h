//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSData, NSString, NSURL;

@interface CKDCodeLocalFunctionInvokeURLRequest : CKDURLRequest
{
    CDUnknownBlockType _serializedResultsCallback;	// 8 = 0x8
    NSString *_serviceName;	// 16 = 0x10
    NSString *_functionName;	// 24 = 0x18
    NSData *_serializedParameters;	// 32 = 0x20
    NSURL *_resolvedBaseURL;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000d02e2
@property(copy, nonatomic) NSURL *resolvedBaseURL; // @synthesize resolvedBaseURL=_resolvedBaseURL;
@property(retain, nonatomic) NSData *serializedParameters; // @synthesize serializedParameters=_serializedParameters;
@property(copy, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(copy, nonatomic) CDUnknownBlockType serializedResultsCallback; // @synthesize serializedResultsCallback=_serializedResultsCallback;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x00000000000d0180
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000000d00ae
- (Class)expectedResponseClass;	// IMP=0x00000000000d009d
- (Class)requestMessageClass;	// IMP=0x00000000000d008c
- (id)requestBodyStream;	// IMP=0x00000000000cfbb7
- (_Bool)parsingStandaloneMessage;	// IMP=0x00000000000cfbaf
- (_Bool)shouldCompressBody;	// IMP=0x00000000000cfba7
- (id)additionalHeaderValues;	// IMP=0x00000000000cfb31
- (id)url;	// IMP=0x00000000000cfb1f
- (long long)serverType;	// IMP=0x00000000000cfb14
- (long long)databaseScope;	// IMP=0x00000000000cfa75
- (long long)partitionType;	// IMP=0x00000000000cfa4c
- (_Bool)allowsAnonymousAccount;	// IMP=0x00000000000cfa32
- (_Bool)requestGETPreAuth;	// IMP=0x00000000000cf9e7
- (id)initWithOperation:(id)arg1 serviceName:(id)arg2 functionName:(id)arg3 serializedParameters:(id)arg4 resolvedBaseURL:(id)arg5;	// IMP=0x00000000000cf8ec

@end

