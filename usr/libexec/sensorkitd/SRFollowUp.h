//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FLFollowUpController, NSString;

@interface SRFollowUp : NSObject
{
    FLFollowUpController *_followUpController;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x002000000002b9d0
- (void)pendingFollowUpItemsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x002000000002bc40
- (void)clearPendingFollowUpItemsWithUniqueIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002bb90
- (void)postFollowUpItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002bae0
- (void)dealloc;	// IMP=0x001000000002ba90
- (id)init;	// IMP=0x001000000002ba20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Error: Property attributes should begin with the type ('T') attribute, property name: description
// Property attributes: (null)

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

