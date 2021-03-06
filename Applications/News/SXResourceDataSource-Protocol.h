//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSURL, SXImageRequest;

@protocol SXResourceDataSource <NSObject>
- (NSURL *)translateURL:(NSURL *)arg1;
- (void)fileURLForURL:(NSURL *)arg1 onCompletion:(void (^)(NSURL *))arg2 onError:(void (^)(NSError *))arg3;
- (void (^)(void))loadImagesForImageRequest:(SXImageRequest *)arg1 completionBlock:(void (^)(NSArray *))arg2;
@end

