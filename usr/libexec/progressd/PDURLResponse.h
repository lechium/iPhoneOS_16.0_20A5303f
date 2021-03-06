//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSFileHandle, NSHTTPURLResponse, NSMutableData, NSString, NSURL, NSURLSessionTaskMetrics;

@interface PDURLResponse : NSObject
{
    NSMutableData *_buffer;	// 8 = 0x8
    NSURL *_responseFileURL;	// 16 = 0x10
    NSFileHandle *_responseFileHandle;	// 24 = 0x18
    NSFileHandle *_returnFileHandle;	// 32 = 0x20
    _Bool _isComplete;	// 40 = 0x28
    NSHTTPURLResponse *_urlResponse;	// 48 = 0x30
    NSString *_operationID;	// 56 = 0x38
    long long _bytesReceived;	// 64 = 0x40
    NSURLSessionTaskMetrics *_metrics;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0010000000127aed
@property(retain, nonatomic) NSURLSessionTaskMetrics *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) NSURL *responseFileURL; // @synthesize responseFileURL=_responseFileURL;
@property(readonly, nonatomic) long long bytesReceived; // @synthesize bytesReceived=_bytesReceived;
@property(retain, nonatomic) NSString *operationID; // @synthesize operationID=_operationID;
@property(retain, nonatomic) NSHTTPURLResponse *urlResponse; // @synthesize urlResponse=_urlResponse;
@property(nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
- (void)cleanupFileResources;	// IMP=0x00100000001277f0
- (id)createFileHandleForURL:(id)arg1;	// IMP=0x00100000001273b9
- (id)valueForHTTPHeaderField:(id)arg1;	// IMP=0x00100000001271c3
@property(readonly, nonatomic) NSDictionary *allHTTPHeaderFields;
@property(readonly, nonatomic) long long httpStatusCode;
- (id)responseData;	// IMP=0x0010000000126f55
- (void)updateStats:(id)arg1;	// IMP=0x0010000000126eb3
- (_Bool)didCompleteWithError:(id *)arg1;	// IMP=0x0010000000126d62
- (_Bool)appendData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000126a4c
- (void)cleanup;	// IMP=0x00100000001269ef
- (id)createResponseFileURL;	// IMP=0x0010000000126916
- (id)initWithOperationID:(id)arg1 usingFileHandle:(id)arg2;	// IMP=0x00100000001267ad
- (id)initWithOperationID:(id)arg1 usingFiles:(_Bool)arg2;	// IMP=0x0010000000126675
- (void)_simulateHTTPResponseWithURL:(id)arg1 statusCode:(long long)arg2 headers:(id)arg3;	// IMP=0x0010000000127b4c

@end

