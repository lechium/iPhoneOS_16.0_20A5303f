//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSFileSecurity.h"

__attribute__((visibility("hidden")))
@interface __NSFileSecurity : NSFileSecurity
{
    struct _filesec *_filesec;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000170de6
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000170b5a
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0010000000170b57
+ (id)__new:(struct _filesec *)arg1;	// IMP=0x001000000016fce9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000170de3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000170b6e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000170ae3
- (id)description;	// IMP=0x000000000017074e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001703d8
- (unsigned long long)hash;	// IMP=0x0000000000170292
- (void)dealloc;	// IMP=0x0000000000170229
- (_Bool)clearProperties:(unsigned long long)arg1;	// IMP=0x0000000000170131
- (_Bool)setAccessControlList:(struct _acl *)arg1;	// IMP=0x00000000001700d0
- (_Bool)copyAccessControlList:(struct _acl **)arg1;	// IMP=0x0000000000170048
- (_Bool)setGroupUUID:(unsigned char [16])arg1;	// IMP=0x0000000000170028
- (_Bool)getGroupUUID:(unsigned char (*)[16])arg1;	// IMP=0x000000000016ffc3
- (_Bool)setOwnerUUID:(unsigned char [16])arg1;	// IMP=0x000000000016ffa3
- (_Bool)getOwnerUUID:(unsigned char (*)[16])arg1;	// IMP=0x000000000016ff3e
- (_Bool)setMode:(unsigned short)arg1;	// IMP=0x000000000016fee9
- (_Bool)getMode:(unsigned short *)arg1;	// IMP=0x000000000016fe85
- (_Bool)setGroup:(unsigned int)arg1;	// IMP=0x000000000016fe31
- (_Bool)getGroup:(unsigned int *)arg1;	// IMP=0x000000000016fdce
- (_Bool)setOwner:(unsigned int)arg1;	// IMP=0x000000000016fd7a
- (_Bool)getOwner:(unsigned int *)arg1;	// IMP=0x000000000016fd17
- (struct _filesec *)_filesec;	// IMP=0x000000000016fd0b

@end
