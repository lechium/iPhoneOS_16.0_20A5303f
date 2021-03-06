//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SoundAnalysis/NSObject-Protocol.h>

@class NSError;
@protocol SNRequest, SNResult;

@protocol SNResultsObservingXPCProtocol <NSObject>
- (void)xpcRequestDidComplete:(id <SNRequest>)arg1 completionHandler:(void (^)(void))arg2;
- (void)xpcRequest:(id <SNRequest>)arg1 didFailWithError:(NSError *)arg2 completionHandler:(void (^)(void))arg3;
- (void)xpcRequest:(id <SNRequest>)arg1 didProduceResult:(id <SNResult>)arg2 completionHandler:(void (^)(void))arg3;
@end

