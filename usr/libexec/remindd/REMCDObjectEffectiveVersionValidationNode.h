//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectID, NSString, REMCDObject;

@interface REMCDObjectEffectiveVersionValidationNode : NSObject
{
    _Bool expanded;	// 8 = 0x8
    NSManagedObjectID *_managedObjectID;	// 16 = 0x10
    REMCDObject *_backingCDObject;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000006c806
@property(retain, nonatomic) REMCDObject *backingCDObject; // @synthesize backingCDObject=_backingCDObject;
@property(retain, nonatomic) NSManagedObjectID *managedObjectID; // @synthesize managedObjectID=_managedObjectID;
@property(nonatomic) _Bool expanded; // @synthesize expanded;
- (id)identifier;	// IMP=0x001000000006c7ac
- (void)markAsExpanded;	// IMP=0x001000000006c795
- (id)childrenNodes;	// IMP=0x001000000006c389

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
