//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NSHTTPCookieInternal_Data
{
    struct CompactHTTPCookieWithData *_fromData;	// 8 = 0x8
}

- (void)dealloc;	// IMP=0x000000000015f10b
- (id)_initWithHeader:(const struct CompactCookieHeader *)arg1;	// IMP=0x000000000015f047
- (id)_initWithProperties:(id)arg1 fromString:(_Bool)arg2;	// IMP=0x000000000015edcd
- (id)_initWithCookie:(id)arg1 partition:(id)arg2;	// IMP=0x000000000015ebef
- (id)init;	// IMP=0x000000000015ebc0
- (struct HTTPCookie *)_inner;	// IMP=0x000000000015ebaf

@end

