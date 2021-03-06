//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSString, USRegisteredBudget, USRegisteredDeviceActivityEvent;

@interface USBudgetedApplication : NSManagedObject
{
}

- (_Bool)_validateBudget:(id)arg1 andEvent:(id)arg2 error:(out id *)arg3;	// IMP=0x002000000000295e
- (_Bool)validateEvent:(inout id *)arg1 error:(out id *)arg2;	// IMP=0x00100000000028f9
- (_Bool)validateBudget:(inout id *)arg1 error:(out id *)arg2;	// IMP=0x0010000000002894

// Remaining properties
@property(retain, nonatomic) USRegisteredBudget *budget; // @dynamic budget;
@property(copy, nonatomic) NSString *bundleIdentifier; // @dynamic bundleIdentifier;
@property(retain, nonatomic) USRegisteredDeviceActivityEvent *event; // @dynamic event;

@end

