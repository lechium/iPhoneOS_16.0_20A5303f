//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKPlayerProfileCacheObject, NSDate;

@interface GKRecentGameListCacheObject
{
}

+ (Class)entryClass;	// IMP=0x0040000000065ae0
+ (id)entityName;	// IMP=0x0010000000065ad3
- (id)internalRepresentation;	// IMP=0x0020000000065d78
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x0010000000065af1

// Remaining properties
@property(retain, nonatomic) GKPlayerProfileCacheObject *otherPlayer; // @dynamic otherPlayer;
@property(retain, nonatomic) GKPlayerProfileCacheObject *player; // @dynamic player;
@property(retain, nonatomic) NSDate *sinceDate; // @dynamic sinceDate;

@end

