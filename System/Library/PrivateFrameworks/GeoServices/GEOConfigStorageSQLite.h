//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GEOConfigStorageSQLite
{
}

- (id)getAllExpiringKeys;	// IMP=0x000000000121120e
- (void)clearConfigKeyExpiry:(id)arg1;	// IMP=0x00000000012111f7
- (void)setConfigKeyExpiry:(id)arg1 date:(id)arg2 osVersion:(id)arg3;	// IMP=0x000000000121103b
- (_Bool)getConfigKeyExpiry:(id)arg1 date:(id *)arg2 osVersion:(id *)arg3;	// IMP=0x0000000001210f24
- (_Bool)getConfigKeyIsExpired:(id)arg1;	// IMP=0x0000000001210ee0
- (id)_getExpiringKeyForKey:(id)arg1;	// IMP=0x0000000001210e2f
- (void)_instanceSpecificSetValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000001210e19
- (id)_instanceSpecificGetKeyPath:(id)arg1;	// IMP=0x0000000001210e03
- (id)_instanceSpecificGetKey:(id)arg1;	// IMP=0x0000000001210ded

@end
