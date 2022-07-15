//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CADOperationGroup.h"

__attribute__((visibility("hidden")))
@interface CADSourceOperationGroup : CADOperationGroup
{
}

+ (_Bool)requiresEventAccess;	// IMP=0x0010000000049a3a
- (int)_tryPerformBlockWithSourceID:(id)arg1 forAction:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000004cd82
- (int)_tryPerformBlockWithSourceID:(id)arg1 forAction:(unsigned long long)arg2 entityType:(int)arg3 withBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000004cc99
- (void)CADSourceRemoveExchangeDelegateWithID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004c9fe
- (void)CADSourceAddExchangeDelegateWithName:(id)arg1 emailAddress:(id)arg2 toSourceWithID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000004c5b4
- (void)CADSourceUpdateGrantedDelegate:(id)arg1 action:(long long)arg2 sourceID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000004c238
- (void)CADSourceGetGrantedDelegatesList:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004bcf8
- (void)CADRemoveCalendarItemsOlderThanDate:(id)arg1 ofType:(int)arg2 inSource:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000004bba7
- (void)CADCountCalendarItemsOfType:(int)arg1 inSource:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000004ba84
- (void)CADSourceRefresh:(id)arg1 isUserRequested:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000004b6e2
- (void)CADSourceGetNotificationCollection:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004b4ea
- (void)CADSourceGetConstraints:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004a651
- (void)CADDatabaseGetLocalBirthdaySource:(CDUnknownBlockType)arg1;	// IMP=0x000000000004a31e
- (void)CADDatabaseGetLocalSourceWithEnableIfNeeded:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000049f10
- (void)CADDatabaseGetSourcesWithFaultedProperties:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000049a42

@end
