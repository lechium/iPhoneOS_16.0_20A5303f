//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class NSArray, NSString;

@interface _TtC7NewsUI229StubFCIssueReadingHistoryType : _TtCs12_SwiftObject
{
}

- (void)prepareForUseWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000aaf730
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000aaf720
- (void)addObserver:(id)arg1;	// IMP=0x0000000000aaf710
@property(nonatomic, readonly) NSArray *allEngagedIssueIDs;
@property(nonatomic, readonly) NSArray *recentlyEngagedIssueIDs;
@property(nonatomic, readonly) NSArray *recentlyVisitedIssueIDs;
@property(nonatomic, readonly) NSString *mostRecentlyVisitedIssueID;
- (id)lastRemovedFromMyMagazinesDateForIssueWithID:(id)arg1;	// IMP=0x0000000000aaf810
- (id)lastSeenDateForIssueWithID:(id)arg1;	// IMP=0x0000000000aaf6d0
- (id)lastEngagedDateForIssueWithID:(id)arg1;	// IMP=0x0000000000aaf800
- (id)lastVisitedDateForIssueWithID:(id)arg1;	// IMP=0x0000000000aaf7f0
- (id)bookmarkForLastVisitToIssueWithID:(id)arg1;	// IMP=0x0000000000aaf7e0
- (_Bool)hasIssueWithIDBeenSeen:(id)arg1;	// IMP=0x0000000000aaf6c0
- (_Bool)hasIssueWithIDBeenEngaged:(id)arg1;	// IMP=0x0000000000aaf6b0
- (_Bool)hasIssueWithIDBeenBadged:(id)arg1;	// IMP=0x0000000000aaf6a0
- (_Bool)hasIssueWithIDBeenVisited:(id)arg1;	// IMP=0x0000000000aaf690
- (void)markIssueAsRemovedFromMyMagazinesWithID:(id)arg1;	// IMP=0x0000000000aaf680
- (void)markIssueAsSeenWithID:(id)arg1;	// IMP=0x0000000000aaf670
- (void)markIssueAsEngagedWithID:(id)arg1;	// IMP=0x0000000000aaf660
- (void)markIssueAsBadgedWithID:(id)arg1;	// IMP=0x0000000000aaf650
- (void)markIssueWithID:(id)arg1 asVisitedWithBookmark:(id)arg2;	// IMP=0x0000000000aaf640

@end

