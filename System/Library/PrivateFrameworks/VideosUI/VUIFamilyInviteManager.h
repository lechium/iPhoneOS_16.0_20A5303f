//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, AIDAAccountManager, NSString;

__attribute__((visibility("hidden")))
@interface VUIFamilyInviteManager : NSObject
{
    ACAccountStore *_store;	// 8 = 0x8
    AIDAAccountManager *_accountManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000cb02b
@property(readonly, nonatomic) AIDAAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(readonly, nonatomic) ACAccountStore *store; // @synthesize store=_store;
- (id)accountsForAccountManager:(id)arg1;	// IMP=0x00000000000caf4a
- (void)presentFamilySetupScreenWithBuyParams:(id)arg1;	// IMP=0x00000000000cadc9
- (void)presentFamilySetupScreenIfEligible:(id)arg1 checkEligibility:(_Bool)arg2;	// IMP=0x00000000000ca790
- (id)init;	// IMP=0x00000000000ca6c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
