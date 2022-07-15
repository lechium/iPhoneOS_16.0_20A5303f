//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface LSMIPackageInstallCall : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    NSURL *_packageURL;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000df56b
- (void).cxx_destruct;	// IMP=0x00000000000df8e7
- (_Bool)validateEntitlementsOfConnection:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000df8d4
- (id)invokeWithOptions:(id)arg1 error:(id *)arg2 progressCallback:(CDUnknownBlockType)arg3;	// IMP=0x00000000000df80c
- (_Bool)isUninstall;	// IMP=0x00000000000df804
- (id)bundleIdentifier;	// IMP=0x00000000000df7f6
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000df774
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000df706
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000df62c
- (id)initWithBundleIdentifier:(id)arg1 packageURL:(id)arg2;	// IMP=0x00000000000df573

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
