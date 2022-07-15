//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFDevicePublicExtensions-Protocol.h>
#import <HomeKitDaemon/MKFModel-Protocol.h>

@class HMDHomeKitVersion, HMDRPIdentity, HMFProductInfo, MKFDeviceDatabaseID, NSArray, NSString, NSUUID;
@protocol MKFAccount, MKFAppleMediaAccessory, MKFHome, MKFHomeNetworkRouterManagingDeviceSetting, MKFResident;

@protocol MKFDevice <MKFModel, MKFDevicePublicExtensions>
@property(readonly, copy, nonatomic) MKFDeviceDatabaseID *databaseID;
@property(retain, nonatomic) id <MKFHomeNetworkRouterManagingDeviceSetting> settingRouterManager;
@property(retain, nonatomic) id <MKFResident> resident;
@property(retain, nonatomic) id <MKFHome> primaryResidentOf;
@property(readonly, retain, nonatomic) id <MKFAccount> account;
@property(readonly, retain, nonatomic) id <MKFAppleMediaAccessory> accessoryAppleMedia;
@property(retain, nonatomic) HMDHomeKitVersion *version;
@property(retain, nonatomic) HMDRPIdentity *rpIdentity;
@property(retain, nonatomic) HMFProductInfo *productInfo;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSUUID *mediaRouteID;
@property(copy, nonatomic) NSUUID *identifier;
@property(retain, nonatomic) NSArray *handles;
@end
