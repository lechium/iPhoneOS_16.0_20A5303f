//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSSet;

@protocol TRIXPCStatusServiceProtocol
- (void)rolloutAllocationStatusWithPrivacyFilterPolicy:(unsigned char)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)rolloutRecordsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)evaluationHistoryRecordsForMLRuntimeWithLimit:(unsigned long long)arg1 newerThanDate:(NSDate *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)activeEvaluationsForMLRuntimeWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)experimentRecordsWithDeploymentEnvironments:(NSSet *)arg1 privacyFilterPolicy:(unsigned char)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)experimentHistoryRecordsWithLimit:(unsigned long long)arg1 newerThanDate:(NSDate *)arg2 privacyFilterPolicy:(unsigned char)arg3 deploymentEnvironment:(int)arg4 completion:(void (^)(NSArray *, NSError *))arg5;
@end
