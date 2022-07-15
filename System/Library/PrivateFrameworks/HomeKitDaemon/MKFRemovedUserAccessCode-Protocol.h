//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFHomeAccessCode-Protocol.h>
#import <HomeKitDaemon/MKFRemovedUserAccessCodePublicExtensions-Protocol.h>

@class MKFRemovedUserAccessCodeDatabaseID, NSDate, NSString, NSUUID;
@protocol MKFHome;

@protocol MKFRemovedUserAccessCode <MKFHomeAccessCode, MKFRemovedUserAccessCodePublicExtensions>
@property(readonly, copy, nonatomic) MKFRemovedUserAccessCodeDatabaseID *databaseID;
@property(readonly, retain, nonatomic) id <MKFHome> home;
@property(copy, nonatomic) NSString *userName;
@property(copy, nonatomic) NSUUID *userModelID;
@property(copy, nonatomic) NSString *userID;
@property(copy, nonatomic) NSUUID *hh2ModelID;
@property(copy, nonatomic) NSDate *dateRemoved;
@end
