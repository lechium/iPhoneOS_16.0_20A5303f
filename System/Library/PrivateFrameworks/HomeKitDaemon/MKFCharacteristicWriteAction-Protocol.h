//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFAction-Protocol.h>
#import <HomeKitDaemon/MKFCharacteristicWriteActionPublicExtensions-Protocol.h>

@class MKFCharacteristicWriteActionDatabaseID, NSNumber, NSObject;
@protocol MKFHAPAccessory, MKFHome, MKFService;

@protocol MKFCharacteristicWriteAction <MKFAction, MKFCharacteristicWriteActionPublicExtensions>
@property(readonly) id <MKFHome> home;
@property(readonly, copy, nonatomic) MKFCharacteristicWriteActionDatabaseID *databaseID;
@property(retain, nonatomic) id <MKFService> service;
@property(retain, nonatomic) id <MKFHAPAccessory> accessory;
@property(retain, nonatomic) NSObject *targetValue;
@property(copy, nonatomic) NSNumber *characteristicID;
@end

