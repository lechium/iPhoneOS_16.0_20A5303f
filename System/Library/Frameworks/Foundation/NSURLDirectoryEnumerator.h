//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSDirectoryEnumerator.h"

__attribute__((visibility("hidden")))
@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator
{
    struct __CFURLEnumerator *_enumerator;	// 8 = 0x8
    CDUnknownBlockType _errorHandler;	// 16 = 0x10
    _Bool shouldContinue;	// 24 = 0x18
    _Bool isPostOrderDirectory;	// 25 = 0x19
}

@property(copy) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
- (void)dealloc;	// IMP=0x00000000004a0b57
- (_Bool)isEnumeratingDirectoryPostOrder;	// IMP=0x00000000004a0b47
- (id)directoryAttributes;	// IMP=0x00000000004a0b3f
- (id)fileAttributes;	// IMP=0x00000000004a0b37
- (unsigned long long)level;	// IMP=0x00000000004a0b22
- (void)skipDescendants;	// IMP=0x00000000004a0b0d
- (void)skipDescendents;	// IMP=0x00000000004a0afb
- (id)nextObject;	// IMP=0x00000000004a0975
- (id)initWithURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 errorHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000004a0883

@end

