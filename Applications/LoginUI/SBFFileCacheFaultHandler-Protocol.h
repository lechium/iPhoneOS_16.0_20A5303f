//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class SBFFileCache;
@protocol SBFFileCacheFileIdentifier;

@protocol SBFFileCacheFaultHandler <NSObject>
- (void)fileCache:(SBFFileCache *)arg1 loadFileForIdentifier:(id <SBFFileCacheFileIdentifier>)arg2 completionHandler:(void (^)(NSFileWrapper *, NSError *))arg3;
@end
