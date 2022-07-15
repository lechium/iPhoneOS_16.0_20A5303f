//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (HKUUID)
+ (id)hk_randomDataOfLength:(long long)arg1;	// IMP=0x0010000000126a09
+ (id)hk_nilDataMD5;	// IMP=0x001000000012685b
+ (id)hk_dataWithSHA256Fingerprint:(id)arg1 error:(out id *)arg2;	// IMP=0x00100000001265ec
- (id)hk_dataForAllUUIDs;	// IMP=0x001000000006ac37
- (_Bool)hk_enumerateUUIDsWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x001000000006a927
- (unsigned long long)hk_countOfUUIDs;	// IMP=0x001000000006a902
- (void)hk_enumerateUUIDBytesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000006a86e
- (void)hk_enumerateUUIDsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000161d8
- (id)hk_SHA256;	// IMP=0x0010000000126969
- (id)hk_MD5;	// IMP=0x00100000001268c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
