//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MSPHistoryEntry-Protocol.h"

@class GEOMapRegion, NSString;

@protocol MSPHistoryEntrySearch <MSPHistoryEntry>
@property(readonly, copy, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, copy, nonatomic) NSString *languageCode;
@property(readonly, copy, nonatomic) NSString *locationDisplayString;
@property(readonly, copy, nonatomic) NSString *query;
@end

