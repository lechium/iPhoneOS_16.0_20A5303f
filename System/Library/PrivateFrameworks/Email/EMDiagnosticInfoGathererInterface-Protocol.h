//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Email/NSObject-Protocol.h>

@protocol EMDiagnosticInfoProvidingXPC;

@protocol EMDiagnosticInfoGathererInterface <NSObject>
- (void)databaseStatisticsWithCompletionHandler:(void (^)(NSDictionary *))arg1;
- (void)fetchControllerStatusWithCompletionHandler:(void (^)(NSString *))arg1;
- (void)gatherDiagnosticsWithOptions:(unsigned long long)arg1 completionHandler:(void (^)(EFSandboxedURLWrapper *))arg2;
- (void)registerDiagnosticInfoProvider:(id <EMDiagnosticInfoProvidingXPC>)arg1 completionHandler:(void (^)(id <EFCancelable>))arg2;
@end

