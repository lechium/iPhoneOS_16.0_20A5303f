//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSURL;

__attribute__((visibility("hidden")))
@interface FPDDiskIterator
{
    NSURL *_rootURL;	// 8 = 0x8
    _Bool _stopAccessingRoot;	// 16 = 0x10
    _Bool _sentRoot;	// 17 = 0x11
    _Bool _lastItemWasPackage;	// 18 = 0x12
    _Bool _done;	// 19 = 0x13
    NSError *_error;	// 24 = 0x18
    unsigned long long _numFoldersPopped;	// 32 = 0x20
    struct __CFURLEnumerator *_enumerator;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000089852
- (void)dealloc;	// IMP=0x00000000000897e7
- (unsigned long long)numFoldersPopped;	// IMP=0x00000000000897d6
- (_Bool)done;	// IMP=0x00000000000897c6
- (id)error;	// IMP=0x00000000000897b1
- (void)skipDescendants;	// IMP=0x000000000008979c
- (id)nextWithError:(id *)arg1;	// IMP=0x0000000000089425
- (id)initWithURL:(id)arg1 isDirectory:(_Bool)arg2;	// IMP=0x0000000000089362

@end

