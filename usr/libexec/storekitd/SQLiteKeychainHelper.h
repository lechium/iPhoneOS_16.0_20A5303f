//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SQLiteKeychainHelper : NSObject
{
}

+ (id)_valueFromKeychainForKey:(id)arg1 error:(id *)arg2;	// IMP=0x004000000008622c
+ (_Bool)_saveValueToKeychain:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000860d0
+ (id)_generateKeyDataError:(id *)arg1;	// IMP=0x0010000000085ffd
+ (id)_copyErrorForOSStatus:(int)arg1;	// IMP=0x0010000000085ecc
+ (id)generateKeyWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000085d8f
+ (id)fetchKeyWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000085d11

@end
