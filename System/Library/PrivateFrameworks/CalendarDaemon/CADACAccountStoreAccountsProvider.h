//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore;

__attribute__((visibility("hidden")))
@interface CADACAccountStoreAccountsProvider : NSObject
{
    ACAccountStore *_accountStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004efab
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (id)accountWithIdentifier:(id)arg1;	// IMP=0x000000000004ef1e
- (id)accounts;	// IMP=0x000000000004eece
- (id)initWithAccountStore:(id)arg1;	// IMP=0x000000000004ee63

@end

