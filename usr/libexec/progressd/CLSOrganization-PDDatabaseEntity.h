//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSOrganization.h>

@class NSArray, NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSOrganization (PDDatabaseEntity)
+ (id)searchColumnName;	// IMP=0x002000000005863d
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x001000000005855a
+ (id)entityName;	// IMP=0x0010000000057f9c
- (id)tokensForSearchableColumn:(id)arg1 withValue:(id)arg2 tokenize:(_Bool)arg3;	// IMP=0x0020000000058725
@property(readonly, nonatomic) NSArray *immutableColumnNames;
@property(readonly, nonatomic) NSArray *tokenizableColumnNames;
@property(readonly, nonatomic) NSArray *searchableColumnNames;
@property(readonly, nonatomic) unsigned long long changeHash;
- (void)bindTo:(id)arg1;	// IMP=0x001000000005822d
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x0010000000057fa9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isImmutabilityEnforced) _Bool enforceImmutability;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end
