//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBContact;

@protocol _INPBCallRecordFilter <NSObject>
+ (Class)participantsType;
@property(nonatomic) _Bool hasPreferredCallProvider;
@property(nonatomic) int preferredCallProvider;
@property(readonly, nonatomic) unsigned long long participantsCount;
@property(copy, nonatomic) NSArray *participants;
@property(readonly, nonatomic) unsigned long long callTypesCount;
@property(readonly, nonatomic) int *callTypes;
@property(nonatomic) _Bool hasCallCapability;
@property(nonatomic) int callCapability;
- (int)StringAsPreferredCallProvider:(NSString *)arg1;
- (NSString *)preferredCallProviderAsString:(int)arg1;
- (_INPBContact *)participantsAtIndex:(unsigned long long)arg1;
- (void)addParticipants:(_INPBContact *)arg1;
- (void)clearParticipants;
- (int)StringAsCallTypes:(NSString *)arg1;
- (NSString *)callTypesAsString:(int)arg1;
- (void)setCallTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)callTypesAtIndex:(unsigned long long)arg1;
- (void)addCallTypes:(int)arg1;
- (void)clearCallTypes;
- (int)StringAsCallCapability:(NSString *)arg1;
- (NSString *)callCapabilityAsString:(int)arg1;
@end
