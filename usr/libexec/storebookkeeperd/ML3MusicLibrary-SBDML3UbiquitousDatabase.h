//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MusicLibrary/ML3MusicLibrary.h>

@interface ML3MusicLibrary (SBDML3UbiquitousDatabase)
- (_Bool)supportsUPP;	// IMP=0x001000000000b83b
- (id)uppDatabase;	// IMP=0x001000000000b7d0
- (void)SBKCommitUniversalPlaybackPositionTransaction:(id)arg1 domainVersion:(id)arg2 metadataEnumerationBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000000ca73
- (void)SBKCancelUniversalPlaybackPositionTransaction:(id)arg1;	// IMP=0x001000000000ca6d
- (id)SBKBeginTransactionWithItemsToSyncEnumerationBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000c95d
- (id)SBKSQLQueryStringForItemsNeedingPush;	// IMP=0x001000000000c93b
- (id)SBKQueryForTracksNeedingPushWithEntityRevisionAnchor:(unsigned long long)arg1 orderingTerms:(id)arg2;	// IMP=0x001000000000c74e
@end

