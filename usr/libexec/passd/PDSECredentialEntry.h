//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PDSECredentialEntry : NSObject
{
    _Bool _supportsExpress;	// 8 = 0x8
    _Bool _supportsInSessionExpress;	// 9 = 0x9
    _Bool _expressEnabled;	// 10 = 0xa
    _Bool _expressSuspended;	// 11 = 0xb
    _Bool _inSessionExpress;	// 12 = 0xc
    _Bool _supportsUWB;	// 13 = 0xd
    NSString *_passUniqueIdentifier;	// 16 = 0x10
    NSArray *_automaticSelectionCriteria;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000e4ced
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000e4c36
- (_Bool)_effectiveInSessionOnly;	// IMP=0x00100000000e4c1f
- (_Bool)_effectiveExpressEnabled;	// IMP=0x00100000000e4c02
- (id)createATLStateEntryWithApplicationIdentifier:(id)arg1 keyIdentifier:(id)arg2;	// IMP=0x00100000000e4bfa
- (id)_init;	// IMP=0x00100000000e4bcb
- (id)init;	// IMP=0x00100000000e4bbd

@end
