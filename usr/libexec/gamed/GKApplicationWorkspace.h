//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LSApplicationWorkspace;

@interface GKApplicationWorkspace : NSObject
{
    LSApplicationWorkspace *_lsWorkspace;	// 8 = 0x8
}

+ (long long)getPlatformForBundleID:(id)arg1;	// IMP=0x00400000000b5080
+ (id)defaultWorkspace;	// IMP=0x00100000000b470f
- (void).cxx_destruct;	// IMP=0x00200000000b5767
@property(retain, nonatomic) LSApplicationWorkspace *lsWorkspace; // @synthesize lsWorkspace=_lsWorkspace;
- (_Bool)wasProductionSignedForProcess:(int)arg1;	// IMP=0x00100000000b55ea
- (_Bool)allowProductionForProcess:(int)arg1;	// IMP=0x00100000000b55e2
- (id)availableGamesAndIdentifiers;	// IMP=0x00100000000b53ec
- (id)availableGameIdentifiers;	// IMP=0x00100000000b5173
- (id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)arg1;	// IMP=0x00100000000b4ef1
- (id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)arg1;	// IMP=0x00100000000b4c57
- (void)launchApplication:(id)arg1;	// IMP=0x00100000000b4bdc
- (_Bool)applicationIsInstalled:(id)arg1;	// IMP=0x00100000000b4b61
- (void)openGameCenterSettings;	// IMP=0x00100000000b4b4f
- (void)openURL:(id)arg1;	// IMP=0x00100000000b4984
- (void)openICloudSettings;	// IMP=0x00100000000b4927
- (void)openSettings;	// IMP=0x00100000000b48ca
- (id)applicationProxyForBundleID:(id)arg1;	// IMP=0x00100000000b487d
- (id)initWithWorkspace:(id)arg1;	// IMP=0x00100000000b4815

@end

