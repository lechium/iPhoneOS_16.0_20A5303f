//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NPDCompanionPaymentPassDatabase;

@interface NPDDemoModePassCopier : NSObject
{
    NPDCompanionPaymentPassDatabase *_database;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000480c6
@property(retain, nonatomic) NPDCompanionPaymentPassDatabase *database; // @synthesize database=_database;
- (_Bool)_shouldReplaceExistingPaymentPass:(id)arg1 withCompanionPass:(id)arg2;	// IMP=0x0010000000047fda
- (void)_addCompanionPaymentPass:(id)arg1;	// IMP=0x0010000000047d64
- (void)noteCompanionPassAddedOrUpdated:(id)arg1;	// IMP=0x0010000000047c2d
- (void)performFullSyncWithPassLibrary:(id)arg1;	// IMP=0x00100000000477e4
- (id)initWithCompanionPaymentPassDatabase:(id)arg1;	// IMP=0x0010000000047779

@end

