//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class SHMediaLibraryQueryParameters;

@protocol SHMediaLibraryQuery <NSObject>
- (void)_queryLibraryWithParameters:(SHMediaLibraryQueryParameters *)arg1 completionHandler:(void (^)(NSArray *, NSArray *, NSError *))arg2;
- (void)_libraryInfoWithCompletionHandler:(void (^)(SHMediaLibraryInfo *, NSError *))arg1;
@end

