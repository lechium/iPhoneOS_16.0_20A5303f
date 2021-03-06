//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMStoreEventAtomValue;

@interface BMSyncAtomValue : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    BMStoreEventAtomValue *_value;	// 16 = 0x10
    long long _version;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000027b10
+ (id)atomValueFromData:(id)arg1 version:(long long)arg2;	// IMP=0x00100000000275f6
- (void).cxx_destruct;	// IMP=0x0020000000027caf
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, nonatomic) BMStoreEventAtomValue *value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000027bb8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000027b18
- (id)serialize;	// IMP=0x0010000000027824
- (id)proto;	// IMP=0x001000000002755d
- (id)initWithProtoData:(id)arg1;	// IMP=0x00100000000274c1
- (id)initWithProto:(id)arg1;	// IMP=0x0010000000027321
- (id)encodeAsProto;	// IMP=0x00000000000272d1
- (id)serializeProto;	// IMP=0x00100000000272bf
- (id)initWithAtomType:(unsigned long long)arg1 value:(id)arg2 version:(long long)arg3;	// IMP=0x001000000002723e

@end

