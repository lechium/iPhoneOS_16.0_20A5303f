//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProviderUI/NSObject-Protocol.h>

@class NSArray, NSError;
@protocol FPUIAuthenticationDelegate;

@protocol FPUIAuthenticationConnectionFlowDelegate <NSObject>
- (void)authenticationDelegate:(id <FPUIAuthenticationDelegate>)arg1 didFinishWithError:(NSError *)arg2 completionHandler:(void (^)(void))arg3;
- (void)authenticationDelegate:(id <FPUIAuthenticationDelegate>)arg1 didEncounterError:(NSError *)arg2;
- (void)authenticationDelegate:(id <FPUIAuthenticationDelegate>)arg1 didReceiveVolumeMountRepresentations:(NSArray *)arg2;
- (void)authenticationDelegate:(id <FPUIAuthenticationDelegate>)arg1 didReceiveCredentialDescriptors:(NSArray *)arg2;
@end

