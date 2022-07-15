//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString, NSUUID, REMCDList;

@interface REMCDSharee
{
}

+ (id)cdEntityName;	// IMP=0x001000000006c370
+ (_Bool)isAbstract;	// IMP=0x001000000006c368
+ (_Bool)shouldSyncToCloud;	// IMP=0x001000000006c360
+ (id)fetchRequest;	// IMP=0x001000000007be44
- (void)debug_lowLevelRemoveFromParent;	// IMP=0x0020000000076614
- (_Bool)isConnectedToAccountObject:(id)arg1;	// IMP=0x001000000007659d

// Remaining properties
@property(nonatomic) short accessLevel; // @dynamic accessLevel;
@property(copy, nonatomic) NSString *address; // @dynamic address;
@property(retain, nonatomic) NSSet *assignments; // @dynamic assignments;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(copy, nonatomic) NSString *firstName; // @dynamic firstName;
@property(copy, nonatomic) NSString *lastName; // @dynamic lastName;
@property(retain, nonatomic) REMCDList *list; // @dynamic list;
@property(copy, nonatomic) NSString *middleName; // @dynamic middleName;
@property(copy, nonatomic) NSString *namePrefix; // @dynamic namePrefix;
@property(copy, nonatomic) NSString *nameSuffix; // @dynamic nameSuffix;
@property(copy, nonatomic) NSString *nickname; // @dynamic nickname;
@property(retain, nonatomic) NSSet *originatedAssignments; // @dynamic originatedAssignments;
@property(copy, nonatomic) NSUUID *owningListIdentifier; // @dynamic owningListIdentifier;
@property(nonatomic) short status; // @dynamic status;

@end
