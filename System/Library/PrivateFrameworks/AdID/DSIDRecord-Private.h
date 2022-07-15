//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AdCore/DSIDRecord.h>

@class NSString;

@interface DSIDRecord (Private)
- (_Bool)isEqual:(id)arg1;	// IMP=0x003000000000af9f
- (void)sendPersonalizedAdsStatusToAdPlatforms:(CDUnknownBlockType)arg1;	// IMP=0x003000000000af04
- (void)sendSegmentDataToAdPlatforms:(CDUnknownBlockType)arg1;	// IMP=0x003000000000ae69
- (void)retrieveSegmentDataFromiTunes:(CDUnknownBlockType)arg1;	// IMP=0x003000000000adcd
- (_Bool)isActiveRecord;	// IMP=0x003000000000ad0f
- (void)resetiAdIDsAndDPID:(CDUnknownBlockType)arg1;	// IMP=0x003000000000abbe
- (void)resetiAdIDs;	// IMP=0x003000000000a7e1
- (void)ensureiAdIDs;	// IMP=0x003000000000a59e
- (void)removeIDForClientType:(long long)arg1;	// IMP=0x003000000000a45d
- (_Bool)hasIDForClientType:(long long)arg1;	// IMP=0x003000000000a390

// Remaining properties
@property(nonatomic) _Bool accountAgeUnknown; // @dynamic accountAgeUnknown;
@property(nonatomic) _Bool accountIsT13; // @dynamic accountIsT13;
@property(nonatomic) _Bool accountIsU13; // @dynamic accountIsU13;
@property(nonatomic) _Bool accountIsU18; // @dynamic accountIsU18;
@property(retain, nonatomic) NSString *iAdIDBeforeReset; // @dynamic iAdIDBeforeReset;
@property(retain, nonatomic) NSString *iCloudDSID; // @dynamic iCloudDSID;
@property(nonatomic) _Bool isDPIDManatee; // @dynamic isDPIDManatee;
@property(nonatomic) int lastSegmentServedTimestamp; // @dynamic lastSegmentServedTimestamp;
@property(nonatomic) int lastSentSegmentDataTimestamp; // @dynamic lastSentSegmentDataTimestamp;
@property(nonatomic) int personalizedAdsTimestamp; // @dynamic personalizedAdsTimestamp;
@property(retain, nonatomic) NSString *segmentData; // @dynamic segmentData;
@property(nonatomic) int segmentDataTimestamp; // @dynamic segmentDataTimestamp;
@end
