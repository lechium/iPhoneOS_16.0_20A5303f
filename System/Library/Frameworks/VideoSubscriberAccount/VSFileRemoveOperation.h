//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VSAsyncOperation.h"

@class NSError, NSURL;

__attribute__((visibility("hidden")))
@interface VSFileRemoveOperation : VSAsyncOperation
{
    NSURL *_fileURL;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006a91e
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void)executionDidBegin;	// IMP=0x000000000006a744

@end
