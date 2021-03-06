//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSSet, NSString;

@interface ForcedUpdatesTask
{
    NSString *_logKey;	// 8 = 0x8
    NSSet *_pendingUpdates;	// 16 = 0x10
    NSArray *_updates;	// 24 = 0x18
}

+ (id)taskWithPendingUpdates:(id)arg1 andLogKey:(id)arg2;	// IMP=0x00400000002177e5
- (void).cxx_destruct;	// IMP=0x0020000000217eaf
@property(readonly, nonatomic) NSArray *updates; // @synthesize updates=_updates;
- (id)_appsByAccountMappingForCandidates:(id)arg1;	// IMP=0x0010000000217abf
- (id)_forcedUpdates;	// IMP=0x0010000000217ab7
- (id)_enforcedDRMVersionToCheck;	// IMP=0x0010000000217991
- (id)_invalidBuildToolVersionsToCheck;	// IMP=0x00100000002178e5
- (void)main;	// IMP=0x0010000000217870

@end

