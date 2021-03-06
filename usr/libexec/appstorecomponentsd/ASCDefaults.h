//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface ASCDefaults : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
}

+ (id)daemonDefaults;	// IMP=0x002000000000a243
- (void).cxx_destruct;	// IMP=0x002000000000ad9d
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)description;	// IMP=0x001000000000acf5
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000abef
- (unsigned long long)hash;	// IMP=0x001000000000ab74
@property(nonatomic) _Bool preferInternalJS;
@property(copy, nonatomic) NSString *debugPackageURL;
@property(nonatomic) _Bool forceStandaloneWatch;
@property(nonatomic) _Bool enableWebInspector;
@property(copy, nonatomic) NSNumber *overlaysLoadTimeout;
@property(copy, nonatomic) NSNumber *overlaysRateLimitTimeWindow;
@property(copy, nonatomic) NSNumber *overlaysRateLimitRequestsPerSecond;
@property(nonatomic) _Bool disableShutdownTimer;
@property(nonatomic) _Bool forceRightToLeftLayout;
@property(copy, nonatomic) NSString *storefrontLocaleID;
- (id)objectForKey:(id)arg1;	// IMP=0x001000000000a3a2
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000000a322
- (id)initWithBundleID:(id)arg1;	// IMP=0x001000000000a2af

@end

