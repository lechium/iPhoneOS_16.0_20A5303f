//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface TCCDBundle : NSObject
{
    struct __CFBundle *_cfBundle;	// 8 = 0x8
}

+ (id)bundleWithIdentifier:(id)arg1;	// IMP=0x004000000002f4a2
+ (id)bundleWithURL:(id)arg1;	// IMP=0x001000000002f455
- (_Bool)isPathContainedWithin:(id)arg1;	// IMP=0x002000000002fc3c
- (_Bool)isPathTheMainExecutable:(id)arg1;	// IMP=0x001000000002fb4c
@property(readonly, getter=isRunsIndependentlyOfCompanionApp) _Bool runsIndependentlyOfCompanionApp;
@property(readonly, getter=isWatchOnly) _Bool watchOnly;
@property(readonly, getter=isWatchKitApp) _Bool watchKitApp;
- (id)localizedUsageDescriptionForKey:(id)arg1;	// IMP=0x001000000002f943
@property(readonly, getter=isLSUIElement) _Bool LSUIElement;
@property(readonly) NSString *extensionPointIdentifier;
@property(readonly) NSString *bundleVersion;
@property(readonly) NSDictionary *localizedInfoDictionary;
@property(readonly) NSDictionary *infoDictionary;
@property(readonly) NSURL *executableURL;
@property(readonly) NSString *executablePath;
- (id)description;	// IMP=0x001000000002f571
@property(readonly) NSURL *bundleURL;
@property(readonly) NSString *bundlePath;
@property(readonly) NSString *bundleIdentifier;
- (void)dealloc;	// IMP=0x001000000002f416
- (id)initWithIdentifier:(id)arg1;	// IMP=0x001000000002f2f4
- (id)initWithURL:(id)arg1;	// IMP=0x001000000002f22a

@end

