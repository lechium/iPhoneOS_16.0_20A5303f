//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

@interface RDDefaults : NSObject
{
    long long _resendArchivesDelay;	// 8 = 0x8
    NSUserDefaults *_defaults;	// 16 = 0x10
}

+ (void)initialize;	// IMP=0x0040000000004a67
- (void)updateAuthorizationVersions:(id)arg1 forBundleId:(id)arg2;	// IMP=0x0020000000005b31
- (void)dealloc;	// IMP=0x001000000000585a
- (id)init;	// IMP=0x0010000000004aa2

@end
