//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKOperationCallbacks-Protocol.h>

@class CKOperationMetrics, NSError, NSString;

@protocol CKFetchWebAuthTokenOperationCallbacks <CKOperationCallbacks>
- (void)handleOperationDidCompleteWithWebAuthToken:(NSString *)arg1 metrics:(CKOperationMetrics *)arg2 error:(NSError *)arg3;
@end
