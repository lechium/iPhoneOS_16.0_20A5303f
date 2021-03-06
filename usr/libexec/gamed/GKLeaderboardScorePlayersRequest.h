//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface GKLeaderboardScorePlayersRequest
{
    NSArray *_playerInternals;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000a3ea2
- (void).cxx_destruct;	// IMP=0x00200000000a411f
@property(copy, nonatomic) NSArray *playerInternals; // @synthesize playerInternals=_playerInternals;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a405f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000a3f9c
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000a3eaa
- (void)loadScoresWithService:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001cb7cf
- (void)generateScoresFromServerResponse:(id)arg1 service:(id)arg2 context:(id)arg3 timeToLive:(double)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000001cb0a0
- (id)resourceIdentifier;	// IMP=0x00100000001cae56
- (id)serverRequestWithService:(id)arg1;	// IMP=0x00100000001caad7
- (id)bagKey;	// IMP=0x00100000001caaca

@end

