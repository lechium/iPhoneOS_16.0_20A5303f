//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LSMIRevertInstallCall : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000df90f
- (void).cxx_destruct;	// IMP=0x00000000000dffc3
- (_Bool)validateEntitlementsOfConnection:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000dfb3d
- (id)invokeWithOptions:(id)arg1 error:(id *)arg2 progressCallback:(CDUnknownBlockType)arg3;	// IMP=0x00000000000dfac5
- (_Bool)isUninstall;	// IMP=0x00000000000dfabd
- (id)bundleIdentifier;	// IMP=0x00000000000dfaaf
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000dfa3e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000dfa1b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000df98a
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x00000000000df917

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

