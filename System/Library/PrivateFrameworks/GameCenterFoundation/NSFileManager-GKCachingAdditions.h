//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (GKCachingAdditions)
- (void)_gkSetExpirationInterval:(double)arg1 ofFileAtPath:(id)arg2;	// IMP=0x0070000000004722
- (double)_gkExpirationIntervalOfFileAtPath:(id)arg1;	// IMP=0x00700000000046ca
- (void)_gkRemoveXattrNamed:(id)arg1 path:(id)arg2;	// IMP=0x0070000000004652
- (void)_gkWriteXattrBytes:(void *)arg1 count:(unsigned long long)arg2 withName:(id)arg3 path:(id)arg4;	// IMP=0x00700000000045bf
- (long long)_gkReadXattrBytes:(void *)arg1 count:(unsigned long long)arg2 withName:(id)arg3 path:(id)arg4;	// IMP=0x007000000000431a
@end

