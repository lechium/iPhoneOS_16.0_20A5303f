//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUUID.h>

@class NSString;

@interface NSUUID (HealthKit)
+ (id)hk_v3UUIDWithNameSpace:(id)arg1 name:(id)arg2;	// IMP=0x001000000006a42f
+ (id)hk_UUIDWithData:(id)arg1;	// IMP=0x001000000000fe97
- (id)hk_shortRepresentation;	// IMP=0x001000000006a7b8
- (long long)hk_compare:(id)arg1;	// IMP=0x001000000006a6e9
- (id)hk_dataForUUIDBytes;	// IMP=0x001000000000cc59
- (id)hk_UUID;	// IMP=0x001000000006ac57

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

