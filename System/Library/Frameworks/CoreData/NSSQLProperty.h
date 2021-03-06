//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPropertyDescription, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLProperty : NSObject
{
    NSPropertyDescription *_propertyDescription;	// 8 = 0x8
    NSSQLEntity *_entity;	// 16 = 0x10
    unsigned char _propertyType;	// 24 = 0x18
    unsigned char _sqlType;	// 25 = 0x19
    unsigned short _fetchIndex;	// 26 = 0x1a
    unsigned short _slot;	// 28 = 0x1c
    struct _sqlColumnFlags {
        unsigned int _allowAliasing:1;
        unsigned int _unique:1;
        unsigned int _constrained:1;
        unsigned int _backedByTrigger:1;
        unsigned int _isDerivedAttribute:1;
        unsigned int _reservedFlags:11;
    } _flags;	// 32 = 0x20
}

- (void)copyValuesForReadOnlyFetch:(id)arg1;	// IMP=0x00000000001f008e
- (unsigned int)slot;	// IMP=0x00000000001f0083
- (id)description;	// IMP=0x00000000001f0003
- (id)entity;	// IMP=0x00000000001efff9
- (id)propertyDescription;	// IMP=0x00000000001effef
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001eff75
@property(nonatomic, getter=isConstrained) _Bool constrained;
- (_Bool)isToMany;	// IMP=0x00000000001eff47
- (unsigned char)sqlType;	// IMP=0x00000000001eff3d
- (unsigned char)propertyType;	// IMP=0x00000000001eff33
- (id)name;	// IMP=0x00000000001eff1d
- (id)columnName;	// IMP=0x00000000001eff15
- (void)dealloc;	// IMP=0x00000000001efedf
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;	// IMP=0x00000000001efe3e

@end

