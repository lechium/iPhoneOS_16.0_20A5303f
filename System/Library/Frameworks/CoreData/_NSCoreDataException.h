//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSException.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSCoreDataException : NSException
{
    long long _code;	// 40 = 0x28
    NSString *_domain;	// 48 = 0x30
}

- (id)errorObjectWithUserInfo:(id)arg1;	// IMP=0x000000000005274d
- (void)dealloc;	// IMP=0x00000000000526c3
- (id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;	// IMP=0x00000000000526b1

@end

