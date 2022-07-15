//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServicesCore/PLAssetsdPhotoKitCommonServiceProtocol-Protocol.h>

@class NSSet, NSString;

@protocol PLAssetsdPhotoKitServiceProtocol <PLAssetsdPhotoKitCommonServiceProtocol>
- (void)processUniversalSearchJITForAssetUUID:(NSString *)arg1 processingTypes:(unsigned long long)arg2 reply:(void (^)(NSError *))arg3;
- (void)processUniversalSearchJITForCoreSpotlightUniqueIdentifier:(NSString *)arg1 bundleID:(NSString *)arg2 processingTypes:(unsigned long long)arg3 reply:(void (^)(NSString *, NSError *))arg4;
- (void)getUUIDsForCloudIdentifiers:(NSSet *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
@end
