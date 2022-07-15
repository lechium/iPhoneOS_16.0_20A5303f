//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface BKSystemShellDescriptor : NSObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSString *_bundlePath;	// 16 = 0x10
    NSString *_jobLabel;	// 24 = 0x18
    int _pid;	// 32 = 0x20
    double _systemIdleSleepInterval;	// 40 = 0x28
    long long _watchdogType;	// 48 = 0x30
}

+ (id)new;	// IMP=0x002000000006551f
+ (id)build:(CDUnknownBlockType)arg1;	// IMP=0x00100000000654ae
- (void).cxx_destruct;	// IMP=0x00200000000651f0
@property(readonly, nonatomic) long long watchdogType;
@property(readonly, nonatomic) double systemIdleSleepInterval;
@property(readonly, nonatomic) int pid;
@property(readonly, copy, nonatomic) NSString *jobLabel;
@property(readonly, copy, nonatomic) NSString *bundlePath;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x0010000000065066
@property(readonly, copy) NSString *description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000065024
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000064ffe
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000064f40
@property(readonly) unsigned long long hash;
- (id)init;	// IMP=0x0010000000064cc3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
