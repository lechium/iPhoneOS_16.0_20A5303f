//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface MCMClientCodeSignIndex : NSObject
{
    NSData *_cdhash;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001ba10
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b9ba
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001b92d
- (_Bool)isEqualToClientCodeSignIndex:(id)arg1;	// IMP=0x000000000001b8a5
- (unsigned long long)hash;	// IMP=0x000000000001b83b
- (id)initWithCDHash:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000001b782

@end

