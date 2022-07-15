//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/NSObject-Protocol.h>

@class MRExternalDeviceController, MRTransportExternalDevice;

@protocol MRExternalDeviceControllerDelegate <NSObject>

@optional
- (void)externalDeviceController:(MRExternalDeviceController *)arg1 didRemoveDevice:(MRTransportExternalDevice *)arg2;
- (void)externalDeviceController:(MRExternalDeviceController *)arg1 didDiscoverDevice:(MRTransportExternalDevice *)arg2;
@end
