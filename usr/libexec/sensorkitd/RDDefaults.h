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

+ (void)initialize;	// IMP=0x004000000002e880
- (void)updateAuthorizationVersions:(id)arg1 forBundleId:(id)arg2;	// IMP=0x0020000000030900
- (void)dealloc;	// IMP=0x001000000002f680
- (id)init;	// IMP=0x001000000002e8d0

@end
