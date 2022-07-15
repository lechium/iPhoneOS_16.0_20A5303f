//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKGameService
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00200000001d937d
+ (Class)interfaceClass;	// IMP=0x00100000001d936c
- (oneway void)_getPerGameFriendsPlayerIDForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00200000001dc4fd
- (oneway void)resetTCCAuthorization:(CDUnknownBlockType)arg1;	// IMP=0x00100000001dc278
- (oneway void)checkTCCAuthorization:(CDUnknownBlockType)arg1;	// IMP=0x00100000001dbf0c
- (oneway void)getPerGameFriendsForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001db627
- (oneway void)setPerGameSettings:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001da908
- (oneway void)getPerGameSettingsForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001da009
- (oneway void)getArcadeHighlightForAdamID:(id)arg1 count:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001d9388

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
