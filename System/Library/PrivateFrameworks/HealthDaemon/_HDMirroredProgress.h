//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProgress.h>

__attribute__((visibility("hidden")))
@interface _HDMirroredProgress : NSProgress
{
    NSProgress *_originalProgress;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000025fed1
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000025fe8f
- (void)dealloc;	// IMP=0x000000000025fc12

@end

