//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol OS_dispatch_io, OS_dispatch_queue, OS_nw_connection;

__attribute__((visibility("hidden")))
@interface NWURLLoaderFile : NSObject
{
    int _error;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    unsigned long long _fileSize;	// 32 = 0x20
    NSObject<OS_dispatch_io> *_io;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000004c6c00
@property(readonly, nonatomic) NSObject<OS_nw_connection> *underlyingConnection;
- (void)writeData:(id)arg1 complete:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000004c6bb0
@property(readonly, nonatomic) _Bool allowsWrite;
- (void)readDataOfMinimumIncompleteLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000004c6a60
- (void)readResponse:(CDUnknownBlockType)arg1;	// IMP=0x00000000004c68b0
- (void)updateClient:(id)arg1;	// IMP=0x00000000004c68a0
- (void)stop;	// IMP=0x00000000004c6850
- (void)start;	// IMP=0x00000000004c66e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
