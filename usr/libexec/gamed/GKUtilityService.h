//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKUtilityService
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00200000001a6c11
+ (Class)interfaceClass;	// IMP=0x00100000001a6c00
- (oneway void)openDashboardAsRemoteAlertForGame:(id)arg1 hostPID:(int)arg2 deeplink:(id)arg3;	// IMP=0x00200000001a8254
- (oneway void)enqueAMSMetrics:(id)arg1 properties:(id)arg2;	// IMP=0x00100000001a81ca
- (oneway void)deleteCachedImageDataFromSubdirectory:(id)arg1 withFileName:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a7d2d
- (oneway void)loadCachedImageDataFromSubdirectory:(id)arg1 withFileName:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a7987
- (oneway void)cacheImageData:(id)arg1 inSubdirectory:(id)arg2 withFileName:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001a7534
- (oneway void)requestImageDataForURL:(id)arg1 subdirectory:(id)arg2 fileName:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001a743b
- (id)_bagValuesForKeys:(id)arg1;	// IMP=0x00100000001a718d
- (oneway void)getStoreBagValuesForKeys:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a6e91
- (id)validateEnvironment;	// IMP=0x00100000001a6c24
- (_Bool)requiresAuthentication;	// IMP=0x00100000001a6c1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

