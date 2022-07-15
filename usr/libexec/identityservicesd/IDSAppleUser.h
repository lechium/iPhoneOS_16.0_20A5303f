//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSAppleUser : NSObject
{
    NSString *_userName;	// 8 = 0x8
    NSString *_DSID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000242500
- (void).cxx_destruct;	// IMP=0x00200000002428a0
@property(readonly, nonatomic) NSString *DSID; // @synthesize DSID=_DSID;
@property(readonly, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000002426e0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000242660
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000242520
- (_Bool)isIdenticalToUser:(id)arg1;	// IMP=0x00100000002424a0
- (_Bool)isEqualToUser:(id)arg1;	// IMP=0x0010000000242440
- (_Bool)isEqualToAppleUser:(id)arg1;	// IMP=0x0010000000242070
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000241fd0
@property(readonly) unsigned long long hash;
- (_Bool)shouldReplace:(id)arg1;	// IMP=0x0010000000241f20
- (id)storageIdentifier;	// IMP=0x0010000000241ef0
- (id)unprefixedIdentifier;	// IMP=0x0010000000241ec0
- (id)realmPrefixedIdentifier;	// IMP=0x0010000000241db0
- (long long)realm;	// IMP=0x0010000000241d90
- (id)uniqueIdentifier;	// IMP=0x0010000000241d40
- (id)initWithUserName:(id)arg1 DSID:(id)arg2;	// IMP=0x0010000000241c50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
