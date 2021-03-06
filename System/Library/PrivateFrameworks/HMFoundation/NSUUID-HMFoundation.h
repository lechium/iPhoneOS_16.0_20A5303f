//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUUID.h>

@class NSArray, NSData, NSString;

@interface NSUUID (HMFoundation)
+ (id)shortDescription;	// IMP=0x0010000000041612
+ (id)hmf_UUIDWithBytesAsData:(id)arg1;	// IMP=0x001000000004150c
+ (id)zeroUUID;	// IMP=0x00100000000414fa
+ (id)hmf_zeroUUID;	// IMP=0x001000000004145a
+ (id)hmf_UUIDWithNamespace:(id)arg1 data:(id)arg2;	// IMP=0x0010000000041717
- (_Bool)hmf_isEqualToUUIDString:(id)arg1;	// IMP=0x0010000000041699
- (_Bool)hmf_isEqualToUUID:(id)arg1;	// IMP=0x0010000000041648
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) NSData *hmf_bytesAsData;
- (id)initWithNamespace:(id)arg1 data:(id)arg2;	// IMP=0x0010000000041920

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;
@end

