//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AUAudioUnitProperty : NSObject
{
    NSString *_key;	// 8 = 0x8
    unsigned int _v2propID;	// 16 = 0x10
    unsigned int _scope;	// 20 = 0x14
    unsigned int _element;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000075f00
+ (id)propertyWithKey:(id)arg1 v2propID:(unsigned int)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4;	// IMP=0x0010000000075e7f
+ (id)propertyWithKey:(id)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;	// IMP=0x0010000000075e0d
+ (id)propertyWithKey:(id)arg1;	// IMP=0x0010000000075daf
- (void).cxx_destruct;	// IMP=0x0000000000075d9f
- (void)dealloc;	// IMP=0x0000000000075d70
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000075c33
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000075b8c
- (id)initWithKey:(id)arg1 v2propID:(unsigned int)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4;	// IMP=0x0000000000075ae8
- (id)initWithKey:(id)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;	// IMP=0x0000000000075a4c
- (id)initWithKey:(id)arg1;	// IMP=0x00000000000759bd

@end
