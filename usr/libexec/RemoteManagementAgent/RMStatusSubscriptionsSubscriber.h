//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSSet, NSString;

@interface RMStatusSubscriptionsSubscriber : NSObject
{
    NSManagedObjectContext *_context;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000077a77
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (id)_makeStatusSubscriptionWithManagementSource:(id)arg1 declaration:(id)arg2 context:(id)arg3;	// IMP=0x0010000000076ff7
- (id)_getActiveStatusSubscriptionConfigurationsFromManagementSource:(id)arg1;	// IMP=0x0010000000076c00
- (id)_getStatusSubscriptionsFromManagementSource:(id)arg1;	// IMP=0x00100000000767fd
- (_Bool)_updateStatusSubscriptionsForManagementSource:(id)arg1;	// IMP=0x0010000000075570
- (void)applyChangedConfigurationsTypes:(id)arg1;	// IMP=0x0010000000074f90
@property(readonly, copy, nonatomic) NSSet *configurationTypes;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)initWithContext:(id)arg1;	// IMP=0x0010000000074ef5
- (id)init;	// IMP=0x0010000000074e0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
// Error: Property attributes should begin with the type ('T') attribute, property name: hash
// Property attributes: (null)

@property(readonly) Class superclass;

@end

