//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, _EXExtensionAvailablility;

__attribute__((visibility("hidden")))
@interface _EXQueryResult : NSObject
{
    NSSet *_identities;	// 8 = 0x8
    _EXExtensionAvailablility *_availablility;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000369b1
- (void).cxx_destruct;	// IMP=0x0000000000036c0e
@property(readonly) _EXExtensionAvailablility *availablility; // @synthesize availablility=_availablility;
@property(readonly) NSSet *identities; // @synthesize identities=_identities;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000036a27
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000369b9
- (id)_initWithIdentities:(id)arg1 availablility:(id)arg2;	// IMP=0x000000000003694d
- (id)initWithIdentities:(id)arg1 availablility:(id)arg2;	// IMP=0x000000000003693b
- (id)initWithAvailablility:(id)arg1;	// IMP=0x0000000000036924
- (id)initWithIdentities:(id)arg1;	// IMP=0x0000000000036910

@end
