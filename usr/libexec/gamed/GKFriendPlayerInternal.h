//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKGameInternal, NSDate, NSString;

@interface GKFriendPlayerInternal
{
    NSString *_status;	// 256 = 0x100
    NSDate *_lastPlayedDate;	// 264 = 0x108
    GKGameInternal *_lastPlayedGame;	// 272 = 0x110
}

+ (id)secureCodedPropertyKeys;	// IMP=0x002000000017b3ba
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000017b3b2
+ (int)familiarity;	// IMP=0x001000000018bf18
+ (id)propertiesToFetch;	// IMP=0x001000000018be37
- (void).cxx_destruct;	// IMP=0x002000000017b5d9
- (void)setLastPlayedGame:(id)arg1;	// IMP=0x001000000017b5c5
- (id)lastPlayedGame;	// IMP=0x001000000017b5b4
- (void)setLastPlayedDate:(id)arg1;	// IMP=0x001000000017b5a0
- (id)lastPlayedDate;	// IMP=0x001000000017b58f
- (void)setStatus:(id)arg1;	// IMP=0x001000000017b57b
- (id)status;	// IMP=0x001000000017b56a
- (int)defaultFamiliarity;	// IMP=0x001000000017b55f
- (_Bool)isFriend;	// IMP=0x001000000017b557
- (void)updateWithProperties:(id)arg1;	// IMP=0x001000000018bf23
- (void)updateWithCacheObject:(id)arg1;	// IMP=0x001000000018bd6c

@end

