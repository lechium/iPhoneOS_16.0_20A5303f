//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSNumber, NSString;

@interface GKAchievementChallengeCacheObject
{
}

+ (id)entityName;	// IMP=0x00400000000714f8
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x0020000000071b02
- (id)internalRepresentation;	// IMP=0x0010000000071714
- (Class)classForInternalRepresentation;	// IMP=0x0010000000071703
- (_Bool)hasDetails;	// IMP=0x0010000000071505

// Remaining properties
@property(retain, nonatomic) NSString *achievedDescription; // @dynamic achievedDescription;
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(nonatomic) _Bool hidden; // @dynamic hidden;
@property(retain, nonatomic) NSNumber *maximumPoints; // @dynamic maximumPoints;
@property(nonatomic) float percentComplete; // @dynamic percentComplete;
@property(nonatomic) _Bool replayable; // @dynamic replayable;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *unachievedDescription; // @dynamic unachievedDescription;

@end

