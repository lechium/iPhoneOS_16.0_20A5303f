//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSSet, NSString, NSURL, NSUserActivity, TUCallProvider, TUDialRequest;
@protocol CSDCallProviderManagerDataSourceDelegate;

@protocol CSDCallProviderManagerDataSource <NSObject>
@property(readonly, copy, nonatomic) NSSet *providerIdentifiersForExistingCalls;
@property(readonly, nonatomic, getter=isDevicePasscodeLocked) _Bool devicePasscodeLocked;
@property(copy, nonatomic) NSDictionary *registeredPairedHostDeviceProvidersByIdentifier;
@property(copy, nonatomic) NSDictionary *registeredLocalProvidersByIdentifier;
@property(readonly, nonatomic, getter=isRelayCallingGuaranteed) _Bool relayCallingGuaranteed;
@property(nonatomic) __weak id <CSDCallProviderManagerDataSourceDelegate> delegate;
- (_Bool)isProviderInstalled:(TUCallProvider *)arg1;
- (void)removeLinksForFilenamesNotInArray:(NSArray *)arg1;
- (NSURL *)createLinkIfNecessaryWithFilename:(NSString *)arg1 toURL:(NSURL *)arg2;
- (_Bool)isSymbolicLinkAtURL:(NSURL *)arg1;
- (void)openUserActivity:(NSUserActivity *)arg1 usingApplicationWithBundleIdentifier:(NSString *)arg2 frontBoardOptions:(NSDictionary *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (TUDialRequest *)dialAssistedDialRequestForDialRequest:(TUDialRequest *)arg1;
@end

