//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol ADService;

@interface ADServiceRecord : NSObject
{
    id <ADService> _service;	// 8 = 0x8
    long long _precedence;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000a99bb
- (_Bool)hasEqualOrHigherPrecedenceThanServiceRecord:(id)arg1;	// IMP=0x00100000000a994e
- (long long)precedence;	// IMP=0x00100000000a9944
- (id)service;	// IMP=0x00100000000a9936
- (id)description;	// IMP=0x00100000000a98b6
- (id)initWithService:(id)arg1 precedence:(long long)arg2;	// IMP=0x00100000000a9840

@end

