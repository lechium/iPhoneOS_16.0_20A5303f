//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSPersistentHistoryToken.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _NSPersistentHistoryToken : NSPersistentHistoryToken
{
    NSDictionary *_storeTokens;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000001995a3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000019969e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001995ab
- (unsigned long long)hash;	// IMP=0x0000000000199481
- (long long)compareToken:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000198f9a
- (long long)compare:(id)arg1;	// IMP=0x0000000000198f0b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000198e96
- (id)storeTokens;	// IMP=0x0000000000198e85
- (id)description;	// IMP=0x0000000000198e55
- (void)dealloc;	// IMP=0x0000000000198e07

@end
