//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CloudSetAddToPlaylistBehaviorOperation
{
    long long _addToPlaylistBehavior;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000f9f0c
- (void)main;	// IMP=0x00200000000f9a42
- (_Bool)isPersistent;	// IMP=0x00100000000f9a3a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000f99bd
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000f9943
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 addToPlaylistBehavior:(long long)arg3;	// IMP=0x00100000000f98ff
- (id)initWithAddToPlaylistBehavior:(long long)arg1 clientIdentity:(id)arg2;	// IMP=0x00100000000f988c

@end
