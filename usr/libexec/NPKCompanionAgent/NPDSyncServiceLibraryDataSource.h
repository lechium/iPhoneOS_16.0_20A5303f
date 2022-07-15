//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PKCatalog, PKPassLibrary;

@interface NPDSyncServiceLibraryDataSource : NSObject
{
    PKPassLibrary *_passLibrary;	// 8 = 0x8
    CDUnknownBlockType _passFilter;	// 16 = 0x10
}

+ (CDUnknownBlockType)paymentPassesFilter;	// IMP=0x0020000000040e1b
+ (CDUnknownBlockType)nonPaymentPassesFilter;	// IMP=0x0010000000040bcf
- (void).cxx_destruct;	// IMP=0x0020000000041439
- (void)removePassWithUniqueID:(id)arg1 diagnosticReason:(id)arg2;	// IMP=0x0010000000041423
- (void)addPasses:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000411f0
- (id)passWithUniqueID:(id)arg1;	// IMP=0x001000000004119f
@property(readonly, nonatomic) PKCatalog *passesCatalog;
- (id)passLibrarySyncStateForDevice:(id)arg1;	// IMP=0x0010000000040e45
- (id)initWithPassLibrary:(id)arg1 passesFilter:(CDUnknownBlockType)arg2;	// IMP=0x0010000000040b2c
- (id)initWithPassLibrary:(id)arg1;	// IMP=0x0010000000040b0b
- (id)init;	// IMP=0x0010000000040ab1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
