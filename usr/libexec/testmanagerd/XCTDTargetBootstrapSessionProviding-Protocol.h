//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSError;

@protocol XCTDTargetBootstrapSessionProviding <NSObject>
- (void)setObserverForConnectionTransferToTargetWithPID:(int)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)connectionTransferToTargetWithPID:(int)arg1 completedWithSuccess:(_Bool)arg2 error:(NSError *)arg3;
- (void)requestTargetBootstrapSessionForPID:(int)arg1 timeout:(double)arg2 reply:(void (^)(id <XCTTargetBootstrapSession>, NSError *))arg3;
@end

