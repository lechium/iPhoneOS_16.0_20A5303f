//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDuetContext/_CDAsyncContext-Protocol.h>
#import <CoreDuetContext/_CDUserContext-Protocol.h>

@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@protocol _CDAsyncUserContext <_CDUserContext, _CDAsyncContext>
- (void)valuesForKeyPaths:(NSArray *)arg1 responseQueue:(NSObject<OS_dispatch_queue> *)arg2 withCompletion:(void (^)(NSDictionary *))arg3;
@end

