//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MLE5ExecutionStream : NSObject
{
    NSArray *_operations;	// 8 = 0x8
    struct e5rt_execution_stream *_streamHandle;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000015326c
@property struct e5rt_execution_stream *streamHandle; // @synthesize streamHandle=_streamHandle;
@property(copy) NSArray *operations; // @synthesize operations=_operations;
- (void)reset;	// IMP=0x0000000000152fe9
- (_Bool)_executeStream:(struct e5rt_execution_stream *)arg1 error:(id *)arg2;	// IMP=0x0000000000152dee
- (_Bool)executeAndReturnError:(id *)arg1;	// IMP=0x0000000000152a5f
- (void)dealloc;	// IMP=0x0000000000152a30
- (id)init;	// IMP=0x00000000001528e6

@end

