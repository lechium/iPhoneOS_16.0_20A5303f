//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CFPDSource;

__attribute__((visibility("hidden")))
@interface CFPDMirroredSource
{
    struct __CFSet *_mirroredKeys;	// 144 = 0x90
    CFPDSource *_mirrorSource;	// 152 = 0x98
}

- (void)clearCacheForReason:(struct __CFString *)arg1;	// IMP=0x0000000000186074
- (void)handleWritingResult:(struct __CFDictionary *)arg1;	// IMP=0x0000000000185fef
- (CDUnknownBlockType)createDiskWrite;	// IMP=0x0000000000185e70
- (void)drainPendingChanges;	// IMP=0x0000000000185df8
- (_Bool)enqueueNewKey:(id)arg1 value:(id)arg2 encoding:(int)arg3 inBatch:(_Bool)arg4 fromMessage:(id)arg5;	// IMP=0x0000000000185c69
- (int)cacheFileInfoForWriting:(_Bool)arg1 euid:(unsigned int)arg2 egid:(unsigned int)arg3 didCreate:(_Bool *)arg4;	// IMP=0x0000000000185977
- (void)unlock;	// IMP=0x0000000000185908
- (void)lock;	// IMP=0x0000000000185899
- (id)acceptMessage:(id)arg1;	// IMP=0x00000000001857a2
- (void)dealloc;	// IMP=0x000000000018572d
- (id)initWithDomain:(struct __CFString *)arg1 userName:(struct __CFString *)arg2 byHost:(_Bool)arg3 managed:(_Bool)arg4 mirroredKeys:(struct __CFArray *)arg5 shmemIndex:(short)arg6 daemon:(id)arg7;	// IMP=0x0000000000185589

@end
