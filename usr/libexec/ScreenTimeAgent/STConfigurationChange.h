//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, STUserID;
@protocol NSCopying><NSSecureCoding;

@interface STConfigurationChange : NSObject
{
    STUserID *_targetUser;	// 8 = 0x8
    NSSet *_targetDevices;	// 16 = 0x10
    NSObject<NSCopying><NSSecureCoding> *_configuration;	// 24 = 0x18
    long long _configurationType;	// 32 = 0x20
    STUserID *_author;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000207a6
+ (long long)encodingVersion;	// IMP=0x001000000001fff1
- (void).cxx_destruct;	// IMP=0x0020000000020cbf
@property(readonly, copy) STUserID *author; // @synthesize author=_author;
@property(readonly) long long configurationType; // @synthesize configurationType=_configurationType;
@property(readonly, copy) NSObject<NSCopying><NSSecureCoding> *configuration; // @synthesize configuration=_configuration;
@property(readonly, copy) NSSet *targetDevices; // @synthesize targetDevices=_targetDevices;
@property(readonly, copy) STUserID *targetUser; // @synthesize targetUser=_targetUser;
- (unsigned long long)hash;	// IMP=0x0010000000020a70
- (_Bool)isEqualToConfigurationChange:(id)arg1;	// IMP=0x001000000002086d
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002080a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000207ae
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000020616
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000020288
- (id)description;	// IMP=0x0010000000020183
- (id)matchingAny:(id)arg1;	// IMP=0x001000000001fffc
- (id)initWithTargetUser:(id)arg1 targetDevices:(id)arg2 configuration:(id)arg3 configurationType:(long long)arg4 author:(id)arg5;	// IMP=0x001000000001fecb

@end

