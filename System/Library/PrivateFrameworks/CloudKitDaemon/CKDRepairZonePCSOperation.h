//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, NSMutableDictionary;
@protocol CKRepairZonePCSOperationCallbacks;

@interface CKDRepairZonePCSOperation
{
    CDUnknownBlockType _zonePCSRepairProgressBlock;	// 8 = 0x8
    NSArray *_zoneIDs;	// 16 = 0x10
    NSMutableArray *_fetchedZones;	// 24 = 0x18
    NSMutableArray *_fixedZones;	// 32 = 0x20
    NSMutableDictionary *_pcsInfoByZoneID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001589cd
@property(retain, nonatomic) NSMutableDictionary *pcsInfoByZoneID; // @synthesize pcsInfoByZoneID=_pcsInfoByZoneID;
@property(retain, nonatomic) NSMutableArray *fixedZones; // @synthesize fixedZones=_fixedZones;
@property(retain, nonatomic) NSMutableArray *fetchedZones; // @synthesize fetchedZones=_fetchedZones;
@property(retain, nonatomic) NSArray *zoneIDs; // @synthesize zoneIDs=_zoneIDs;
@property(copy, nonatomic) CDUnknownBlockType zonePCSRepairProgressBlock; // @synthesize zonePCSRepairProgressBlock=_zonePCSRepairProgressBlock;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000001588b1
- (void)main;	// IMP=0x00000000001586e2
- (void)_fetchZones;	// IMP=0x0000000000158257
- (void)_checkZonePCS;	// IMP=0x0000000000157788
- (id)_checkPCSDataForZone:(id)arg1;	// IMP=0x000000000015761e
- (void)_uploadRepairedZones;	// IMP=0x000000000015714e
- (id)nameForState:(unsigned long long)arg1;	// IMP=0x00000000001570f8
- (_Bool)makeStateTransition;	// IMP=0x0000000000156fee
- (id)activityCreate;	// IMP=0x0000000000156fc5
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000156ed4

// Remaining properties
@property(retain, nonatomic) id <CKRepairZonePCSOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

