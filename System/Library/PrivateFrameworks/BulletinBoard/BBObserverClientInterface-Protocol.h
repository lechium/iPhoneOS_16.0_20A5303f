//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BBBulletin, BBBulletinUpdateTransaction, BBGlobalSettings, BBSectionInfo, BBSectionParameters, NSString;

@protocol BBObserverClientInterface
- (void)getObserverDebugInfo:(void (^)(NSString *))arg1;
- (void)noteBulletinsLoadedForSectionID:(NSString *)arg1;
- (void)noteServerReceivedResponseForBulletin:(BBBulletin *)arg1;
- (void)updateGlobalSettings:(BBGlobalSettings *)arg1;
- (void)removeSection:(NSString *)arg1;
- (void)updateSectionParameters:(BBSectionParameters *)arg1 forSectionID:(NSString *)arg2;
- (void)updateSectionInfo:(BBSectionInfo *)arg1;
- (void)updateBulletin:(BBBulletinUpdateTransaction *)arg1 withHandler:(void (^)(_Bool, NSError *))arg2;
@end

