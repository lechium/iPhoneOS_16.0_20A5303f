//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PDDatabaseValue;

@interface PDDashboardAppRegisterState : NSObject
{
    NSString *_appIdentifier;	// 8 = 0x8
    long long _state;	// 16 = 0x10
}

+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x002000000016d303
+ (id)identityColumnName;	// IMP=0x001000000016d2f6
+ (id)entityName;	// IMP=0x001000000016d2e9
- (void).cxx_destruct;	// IMP=0x002000000016d490
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
- (void)bindTo:(id)arg1;	// IMP=0x001000000016d3ad
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x001000000016d231
@property(readonly, copy) NSString *description;
- (id)initWithAppIdentifier:(id)arg1;	// IMP=0x001000000016d0ce
- (id)init;	// IMP=0x001000000016d011

// Remaining properties
@property(readonly, nonatomic) unsigned long long changeHash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
