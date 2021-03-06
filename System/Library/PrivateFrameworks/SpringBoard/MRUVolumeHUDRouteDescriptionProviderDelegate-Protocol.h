//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class CCUICAPackageDescription, MRUOutputDeviceAsset, MRUVolumeHUDRouteDescriptionProvider, NSString;

@protocol MRUVolumeHUDRouteDescriptionProviderDelegate <NSObject>

@optional
- (void)volumeHUDRouteDescriptionProvider:(MRUVolumeHUDRouteDescriptionProvider *)arg1 didChangePackageDescription:(CCUICAPackageDescription *)arg2 localizedDisplayTitle:(NSString *)arg3;
- (void)volumeHUDRouteDescriptionProvider:(MRUVolumeHUDRouteDescriptionProvider *)arg1 didChangeOutputDeviceAsset:(MRUOutputDeviceAsset *)arg2;
@end

