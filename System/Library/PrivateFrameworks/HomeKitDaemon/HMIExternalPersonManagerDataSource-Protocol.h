//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMIPersonManagerDataSource-Protocol.h>

@protocol HMIExternalPersonManagerDataSource <HMIPersonManagerDataSource>
- (void)fetchSettingsWithCompletion:(void (^)(HMIExternalPersonManagerSettings *, NSError *))arg1;
@end
