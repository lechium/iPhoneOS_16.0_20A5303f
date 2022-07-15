//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKOperationCallbacks-Protocol.h>

@class NSArray, NSData;

@protocol CKCodeFunctionInvokeOperationCallbacks <CKOperationCallbacks>
- (void)handleReplaceWireSerializationsWithRecords:(NSArray *)arg1;
- (void)handleInitialResponseReceived:(NSData *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)handleReplaceLocalWithWireSerializations:(NSArray *)arg1 encryptedMasterKeys:(NSArray *)arg2 wireEnvelopes:(NSArray *)arg3 reply:(void (^)(NSData *, NSError *))arg4;
@end
