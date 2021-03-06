//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthRecordServices/HKClinicalAccount.h>

@class NSString;

@interface HKClinicalAccount (WellnessDashboard)
- (void)beginReloginSessionWithClinicalSourcesDataProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00300000000631df
@property(nonatomic, readonly) NSString *displayableUploadStatus;
@property(nonatomic, readonly) NSString *displayableLastSharedToProviderDate;
@property(nonatomic, readonly) NSString *displayableSharingSinceTitle;
@property(nonatomic, readonly) _Bool isSharingToProvider;
@property(nonatomic, readonly) _Bool canEnableSharingToProvider;
@property(nonatomic, readonly) NSString *displayableStatus;
@property(nonatomic, readonly) NSString *displayableLastDownloadDate;
@property(nonatomic, readonly) _Bool needsLoginToEnableClinicalSharing;
@property(nonatomic, readonly) _Bool needsLogin;
@property(nonatomic, readonly) _Bool isSourceType;
@property(nonatomic, readonly) _Bool hasLogo;
@end

