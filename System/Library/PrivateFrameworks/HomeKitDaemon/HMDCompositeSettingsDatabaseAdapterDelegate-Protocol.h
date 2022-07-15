//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSError;
@protocol HMDCompositeSettingsDatabaseAdapter, HMDCompositeSettingsModel;

@protocol HMDCompositeSettingsDatabaseAdapterDelegate <NSObject>
- (void)database:(id <HMDCompositeSettingsDatabaseAdapter>)arg1 didProcessUpdateForModel:(id <HMDCompositeSettingsModel>)arg2;
- (void)database:(id <HMDCompositeSettingsDatabaseAdapter>)arg1 didProcessDeletionForModel:(id <HMDCompositeSettingsModel>)arg2;
- (void)database:(id <HMDCompositeSettingsDatabaseAdapter>)arg1 didProcessCreationForModel:(id <HMDCompositeSettingsModel>)arg2;
- (void)database:(id <HMDCompositeSettingsDatabaseAdapter>)arg1 didConfigureWithError:(NSError *)arg2;
@end
