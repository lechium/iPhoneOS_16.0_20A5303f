//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFHomeThreadNetworkPublicExtensions-Protocol.h>
#import <HomeKitDaemon/MKFModel-Protocol.h>

@class MKFHomeThreadNetworkDatabaseID, NSString;
@protocol MKFHome;

@protocol MKFHomeThreadNetwork <MKFModel, MKFHomeThreadNetworkPublicExtensions>
@property(readonly, copy, nonatomic) MKFHomeThreadNetworkDatabaseID *databaseID;
@property(readonly, retain, nonatomic) id <MKFHome> home;
@property(copy, nonatomic) NSString *threadNetworkID;
@end
