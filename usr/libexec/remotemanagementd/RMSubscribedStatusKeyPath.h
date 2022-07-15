//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet, NSString, RMManagementSource;

@interface RMSubscribedStatusKeyPath : NSManagedObject
{
}

+ (id)fetchRequestWithKeyPaths:(id)arg1;	// IMP=0x002000000008d07a
- (id)reportDetails;	// IMP=0x002000000008d121
- (void)_validateSetOncePropertiesWithErrors:(id)arg1;	// IMP=0x001000000008cd0c
- (void)_validateManagementSourceWithErrors:(id)arg1;	// IMP=0x001000000008cc6f
- (_Bool)validateForUpdate:(id *)arg1;	// IMP=0x001000000008ca53
- (_Bool)validateForInsert:(id *)arg1;	// IMP=0x001000000008c837
- (void)awakeFromInsert;	// IMP=0x001000000008c7d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *keyPath; // @dynamic keyPath;
@property(retain, nonatomic) NSDate *lastAcknowledgedDate; // @dynamic lastAcknowledgedDate;
@property(retain, nonatomic) NSDate *lastReceivedDate; // @dynamic lastReceivedDate;
@property(retain, nonatomic) RMManagementSource *managementSource; // @dynamic managementSource;
@property(retain, nonatomic) NSSet *statusSubscriptionItems; // @dynamic statusSubscriptionItems;
@property(readonly) Class superclass;

@end
