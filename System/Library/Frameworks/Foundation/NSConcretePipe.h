//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSPipe.h"

@class NSFileHandle;

__attribute__((visibility("hidden")))
@interface NSConcretePipe : NSPipe
{
    NSFileHandle *_readHandle;	// 8 = 0x8
    NSFileHandle *_writeHandle;	// 16 = 0x10
}

- (void)_closeOnDealloc;	// IMP=0x000000000049e894
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000049e889
- (void)dealloc;	// IMP=0x000000000049e80e
- (id)init;	// IMP=0x000000000049e6e1
- (id)fileHandleForWriting;	// IMP=0x000000000049e6c3
- (id)fileHandleForReading;	// IMP=0x000000000049e6a5

@end

