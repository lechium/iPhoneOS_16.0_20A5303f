//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableString.h>

__attribute__((visibility("hidden")))
@interface OITSUChunkedString : NSMutableString
{
    unsigned long long _length;	// 8 = 0x8
    struct vector<std::shared_ptr<TSUStringChunk>, std::allocator<std::shared_ptr<TSUStringChunk>>> _chunks;	// 16 = 0x10
    unsigned long long _chunkLength;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x00000000002758e6
- (void).cxx_destruct;	// IMP=0x00000000002758d5
- (void)compact;	// IMP=0x00000000002758ad
- (void)appendString:(id)arg1;	// IMP=0x0000000000275868
- (void)deleteCharactersInRange:(struct _NSRange)arg1;	// IMP=0x0000000000275795
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000275676
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;	// IMP=0x0000000000275452
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000002752ff
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000275259
- (unsigned long long)length;	// IMP=0x0000000000275248
- (void)dealloc;	// IMP=0x00000000002751e3
- (id)init;	// IMP=0x00000000002751cc
- (id)initWithChunkLength:(unsigned long long)arg1;	// IMP=0x0000000000275188
- (void)p_compactChunksInRange:(struct _NSRange)arg1;	// IMP=0x00000000002769fe
- (void)p_deleteCharactersInRange:(struct _NSRange)arg1 chunkIndex:(unsigned long long)arg2;	// IMP=0x0000000000276796
- (void)p_insertCharactersInRange:(struct _NSRange)arg1 fromString:(id)arg2 atIndex:(unsigned long long)arg3 chunkIndex:(unsigned long long)arg4;	// IMP=0x0000000000275c35
- (void)p_appendRange:(struct _NSRange)arg1 fromString:(id)arg2;	// IMP=0x0000000000275906

@end

