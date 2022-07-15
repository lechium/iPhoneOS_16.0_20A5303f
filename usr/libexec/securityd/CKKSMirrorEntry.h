//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSItem, NSString;

@interface CKKSMirrorEntry
{
    CKKSItem *_item;	// 8 = 0x8
    unsigned long long _wasCurrent;	// 16 = 0x10
}

+ (id)pcsMirrorKeysForService:(id)arg1 matchingKeys:(id)arg2 error:(id *)arg3;	// IMP=0x00400000000af392
+ (id)countsWithContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000af0d6
+ (id)countsByZoneNameWithContextID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000aef1c
+ (id)countsByParentKeyWithContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000aeccc
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x00100000000aeb98
+ (id)sqlColumns;	// IMP=0x00100000000aeb3a
+ (id)sqlTable;	// IMP=0x00100000000aeb2d
+ (id)allWithUUID:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000ae9a2
+ (id)tryFromDatabase:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000ae784
+ (id)fromDatabase:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000ae566
- (void).cxx_destruct;	// IMP=0x00200000000ae553
@property unsigned long long wasCurrent; // @synthesize wasCurrent=_wasCurrent;
@property(retain) CKKSItem *item; // @synthesize item=_item;
- (id)sqlValues;	// IMP=0x00100000000ae41a
- (id)whereClauseToFindSelf;	// IMP=0x00100000000ae3ca
@property(retain) NSString *uuid;
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x00100000000ae156
- (void)setFromCKRecord:(id)arg1;	// IMP=0x00100000000ae0a7
- (id)description;	// IMP=0x00100000000adf3d
- (id)initWithCKRecord:(id)arg1 contextID:(id)arg2;	// IMP=0x00100000000ade47
- (id)initWithCKKSItem:(id)arg1;	// IMP=0x00100000000addca

@end
