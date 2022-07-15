//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURLSession;
@protocol OS_dispatch_queue;

@interface RMStoreAssetResolver : NSObject
{
    NSObject<OS_dispatch_queue> *_completionQueue;	// 8 = 0x8
    NSURLSession *_URLSession;	// 16 = 0x10
}

+ (id)_dataURLForAsset:(id)arg1 reference:(id)arg2 queryParameters:(id)arg3;	// IMP=0x00400000000791c0
+ (void)resolveAsset:(id)arg1 unresolvedAsset:(id)arg2 isRMDM:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000077f59
- (void).cxx_destruct;	// IMP=0x002000000007abaa
@property(retain, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
- (_Bool)_validateAsset:(id)arg1 reference:(id)arg2 url:(id)arg3 statusCode:(id)arg4 headers:(id)arg5 data:(id)arg6 error:(id *)arg7;	// IMP=0x001000000007a086
- (void)_processResponseWithAsset:(id)arg1 reference:(id)arg2 unresolvedAsset:(id)arg3 url:(id)arg4 response:(id)arg5 error:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x00100000000795cd
- (id)_userAgent;	// IMP=0x00100000000794b0
- (id)_createRequestWithURL:(id)arg1 acceptType:(id)arg2;	// IMP=0x001000000007939d
- (id)_dictionaryForResponse:(id)arg1 downloadedData:(id)arg2 downloadedURL:(id)arg3;	// IMP=0x0010000000078fc2
- (id)_downloadTaskWithAsset:(id)arg1 unresolvedAsset:(id)arg2 reference:(id)arg3 url:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000078cfe
- (id)_dataTaskWithAsset:(id)arg1 unresolvedAsset:(id)arg2 reference:(id)arg3 url:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000078a71
- (void)_resolveAssetAsFile:(id)arg1 unresolvedAsset:(id)arg2 reference:(id)arg3 url:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000788ca
- (void)_resolveAssetAsData:(id)arg1 unresolvedAsset:(id)arg2 reference:(id)arg3 url:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000078723
- (void)_resolveMDMAsset:(id)arg1 unresolvedAsset:(id)arg2 reference:(id)arg3 url:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000784b3
- (void)_resolveAsset:(id)arg1 unresolvedAsset:(id)arg2 reference:(id)arg3 url:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000078314
- (id)initWithURLSession:(id)arg1;	// IMP=0x0010000000077ea8
- (id)initWithURLSessionConfiguration:(id)arg1;	// IMP=0x0010000000077e49
- (id)init;	// IMP=0x0010000000077def

@end
