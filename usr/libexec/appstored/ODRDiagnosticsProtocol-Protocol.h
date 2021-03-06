//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSNumber, NSString, NSURL;

@protocol ODRDiagnosticsProtocol
- (void)setSpaceReduction:(unsigned long long)arg1 withReply:(void (^)(unsigned long long, NSError *))arg2;
- (void)getSpaceReductionWithReply:(void (^)(unsigned long long, NSError *))arg1;
- (void)setSimulatedBandwidth:(unsigned long long)arg1 withReply:(void (^)(unsigned long long, NSError *))arg2;
- (void)getSimulatedBandwidthWithReply:(void (^)(unsigned long long, NSError *))arg1;
- (void)purgeAssetWithIdentifier:(NSString *)arg1 withRequestCompletion:(void (^)(NSError *))arg2;
- (void)purgeAllAssetsForApplications:(NSArray *)arg1 withRequestCompletion:(void (^)(NSError *))arg2;
- (void)purgeAllAssetsForApplication:(NSString *)arg1 withRequestCompletion:(void (^)(NSError *))arg2;
- (void)testPurgeBytes:(long long)arg1 urgency:(int)arg2 withReply:(void (^)(NSMutableString *, NSError *))arg3;
- (void)purgeBytes:(long long)arg1 odrOnly:(_Bool)arg2 urgency:(int)arg3 withReply:(void (^)(long long, NSError *))arg4;
- (void)nonPurgeableAssetsWithReply:(void (^)(NSMutableString *, NSError *))arg1;
- (void)purgeableAssetsWithReply:(void (^)(NSMutableString *, NSError *))arg1;
- (void)registerManifest:(NSData *)arg1 forBundleID:(NSString *)arg2 withRequestCompletion:(void (^)(NSError *))arg3;
- (void)fetchManifestForAdamID:(NSString *)arg1 externalVersionID:(NSString *)arg2 variant:(NSString *)arg3 withFetchCompletion:(void (^)(NSData *, NSError *))arg4;
- (void)resumeRequestWithUUID:(NSString *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)pauseRequestWithUUID:(NSString *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)cancelRequestWithUUID:(NSString *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)prefetchThenRequestSourceURL:(NSURL *)arg1 intoDestinationURL:(NSURL *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)prefetchAndRequestSourceURL:(NSURL *)arg1 intoDestinationURL:(NSURL *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)prefetchSourceURL:(NSURL *)arg1 intoDestinationURL:(NSURL *)arg2 withPrefetchCompletion:(void (^)(NSError *))arg3;
- (void)loadSourceURL:(NSURL *)arg1 intoDestinationURL:(NSURL *)arg2 isUrgent:(_Bool)arg3 isStreaming:(_Bool)arg4 withRequestCompletion:(void (^)(NSError *))arg5;
- (void)setSampler:(NSString *)arg1 enabled:(_Bool)arg2 samplingInterval:(double)arg3 reply:(void (^)(NSString *, NSError *))arg4;
- (void)setLoggingEnabled:(_Bool)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)cancelMaintenanceWithReply:(void (^)(NSError *))arg1;
- (void)performMaintenanceWithReply:(void (^)(NSError *))arg1;
- (void)statusWithReply:(void (^)(NSString *, NSError *))arg1;
- (void)fakeWorkWithCount:(NSNumber *)arg1 reply:(void (^)(void))arg2;
- (void)expireAssetURLSForBundleIDs:(NSArray *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)assetsForBundleID:(NSString *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)manifestDictionaryForBundleID:(NSString *)arg1 withReply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)allRegisteredODRAppsWithReply:(void (^)(NSArray *, NSError *))arg1;
@end

