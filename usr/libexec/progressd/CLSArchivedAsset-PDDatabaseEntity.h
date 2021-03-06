//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSArchivedAsset.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSArchivedAsset (PDDatabaseEntity)
+ (long long)migrationOrder;	// IMP=0x0020000000075221
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000074e76
+ (id)entityName;	// IMP=0x0010000000074186
- (void)bindTo:(id)arg1;	// IMP=0x002000000007480e
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x0010000000074193

// Remaining properties
@property(readonly, nonatomic) unsigned long long changeHash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end

