//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CSDKeychainPasswordItem : NSObject
{
    MISSING_TYPE *service;	// 8 = 0x8
    MISSING_TYPE *accessGroup;	// 24 = 0x18
    MISSING_TYPE *account;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0040000000326fb0
- (id)init;	// IMP=0x0010000000326f50
- (_Bool)deleteItemAndReturnError:(id *)arg1;	// IMP=0x0010000000326ee0
- (_Bool)savePassword:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000326ca0
- (id)readPasswordAndReturnError:(id *)arg1;	// IMP=0x00100000003266c0
- (id)initWithService:(id)arg1 account:(id)arg2 accessGroup:(id)arg3;	// IMP=0x0010000000326190

@end

