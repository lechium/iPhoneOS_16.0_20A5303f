//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, STConfigurationChange;

@interface STOrganizationControllerConfigurationChangeContent : NSObject
{
    STConfigurationChange *_configurationChange;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000005722d
+ (long long)contentType;	// IMP=0x001000000005707f
- (void).cxx_destruct;	// IMP=0x00200000000573d6
@property(readonly, copy) STConfigurationChange *configurationChange; // @synthesize configurationChange=_configurationChange;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToOrganizationControllerConfigurationChangeContent:(id)arg1;	// IMP=0x00100000000572e1
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000005727e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000057235
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000571b4
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000057127
@property(readonly, copy) NSString *description;
- (id)initWithConfigurationChange:(id)arg1;	// IMP=0x0010000000057002

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

