//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (TVMLKitAdditions)
+ (id)tvs_hexStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2 lowercase:(_Bool)arg3;	// IMP=0x00800000000b92f2
+ (id)tv_lowercaseHexStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00800000000b92da
- (id)tv_SHA256String;	// IMP=0x00100000000b921a
- (id)tv_MD5String;	// IMP=0x00100000000b915a
- (id)tv_filenameSafeString;	// IMP=0x00100000000b9080
@end
