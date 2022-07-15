//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKit/NSObject-Protocol.h>

@class NSString, NSURL, SKCloudServiceSetupConfiguration, SKCloudServiceSetupReloadContext;

@protocol SKCloudServiceSetupExtensionServiceInterface <NSObject>
- (void)reloadWithContext:(SKCloudServiceSetupReloadContext *)arg1;
- (void)redeemCameraCodeDetected:(NSString *)arg1;
- (void)handleSafariScriptURL:(NSURL *)arg1;
- (void)applyConfiguration:(SKCloudServiceSetupConfiguration *)arg1;
@end
