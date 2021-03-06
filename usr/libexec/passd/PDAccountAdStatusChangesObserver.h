//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PDAccountManager;

@interface PDAccountAdStatusChangesObserver : NSObject
{
    PDAccountManager *_accountManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000287762
- (void)accountManager:(id)arg1 didRemoveAccount:(id)arg2;	// IMP=0x001000000028775c
- (void)accountManager:(id)arg1 didUpdateAccount:(id)arg2 oldAccount:(id)arg3;	// IMP=0x0010000000287756
- (void)accountManager:(id)arg1 didAddAccount:(id)arg2;	// IMP=0x0010000000287750
- (void)dealloc;	// IMP=0x001000000028770b
- (id)initWithAccountManager:(id)arg1;	// IMP=0x001000000028768c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

