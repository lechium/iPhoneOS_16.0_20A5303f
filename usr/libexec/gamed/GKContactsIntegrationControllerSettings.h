//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GKContactsIntegrationControllerSettings : NSObject
{
    _Bool _allowUpdates;	// 8 = 0x8
    unsigned long long _idsV1FetchSize;	// 16 = 0x10
    unsigned long long _idsV2FetchSize;	// 24 = 0x18
    unsigned long long _idsV1BatchFetchSize;	// 32 = 0x20
    unsigned long long _idsV2BatchFetchSize;	// 40 = 0x28
    double _lastGamePlayedExpirationTime;	// 48 = 0x30
    double _contactsUpdateInterval;	// 56 = 0x38
    double _idsUpdateInterval;	// 64 = 0x40
    double _updateJitterInterval;	// 72 = 0x48
    double _contactsChangedCoalescingWaitTime;	// 80 = 0x50
    double _idsExpirationTimeOptedIn;	// 88 = 0x58
    double _idsExpirationTimeNotUpgraded;	// 96 = 0x60
    double _idsExpirationTimeNonAppleUser;	// 104 = 0x68
    double _idsExpirationTimeOptedOut;	// 112 = 0x70
    double _idsExpirationTimeNotSet;	// 120 = 0x78
    double _idsExpirationTimeUnknown;	// 128 = 0x80
}

+ (id)allBagKeys;	// IMP=0x00400000000e444e
@property(nonatomic) double idsExpirationTimeUnknown; // @synthesize idsExpirationTimeUnknown=_idsExpirationTimeUnknown;
@property(nonatomic) double idsExpirationTimeNotSet; // @synthesize idsExpirationTimeNotSet=_idsExpirationTimeNotSet;
@property(nonatomic) double idsExpirationTimeOptedOut; // @synthesize idsExpirationTimeOptedOut=_idsExpirationTimeOptedOut;
@property(nonatomic) double idsExpirationTimeNonAppleUser; // @synthesize idsExpirationTimeNonAppleUser=_idsExpirationTimeNonAppleUser;
@property(nonatomic) double idsExpirationTimeNotUpgraded; // @synthesize idsExpirationTimeNotUpgraded=_idsExpirationTimeNotUpgraded;
@property(nonatomic) double idsExpirationTimeOptedIn; // @synthesize idsExpirationTimeOptedIn=_idsExpirationTimeOptedIn;
@property(nonatomic) _Bool allowUpdates; // @synthesize allowUpdates=_allowUpdates;
@property(nonatomic) double contactsChangedCoalescingWaitTime; // @synthesize contactsChangedCoalescingWaitTime=_contactsChangedCoalescingWaitTime;
@property(nonatomic) double updateJitterInterval; // @synthesize updateJitterInterval=_updateJitterInterval;
@property(nonatomic) double idsUpdateInterval; // @synthesize idsUpdateInterval=_idsUpdateInterval;
@property(nonatomic) double contactsUpdateInterval; // @synthesize contactsUpdateInterval=_contactsUpdateInterval;
@property(nonatomic) double lastGamePlayedExpirationTime; // @synthesize lastGamePlayedExpirationTime=_lastGamePlayedExpirationTime;
@property(nonatomic) unsigned long long idsV2BatchFetchSize; // @synthesize idsV2BatchFetchSize=_idsV2BatchFetchSize;
@property(nonatomic) unsigned long long idsV1BatchFetchSize; // @synthesize idsV1BatchFetchSize=_idsV1BatchFetchSize;
@property(nonatomic) unsigned long long idsV2FetchSize; // @synthesize idsV2FetchSize=_idsV2FetchSize;
@property(nonatomic) unsigned long long idsV1FetchSize; // @synthesize idsV1FetchSize=_idsV1FetchSize;
- (double)expirationTimeForCohort:(int)arg1;	// IMP=0x00100000000e4592
- (id)initWithBagValues:(id)arg1;	// IMP=0x00100000000e3f07
- (id)init;	// IMP=0x00100000000e3ef3

@end
