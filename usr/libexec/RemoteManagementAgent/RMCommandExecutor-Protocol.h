//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class RMManagementChannel;

@protocol RMCommandExecutor <NSObject>
- (_Bool)rm_requestExecutesWithoutReturning;
- (void)rm_executeRequestOnBehalfOfManagementChannel:(RMManagementChannel *)arg1 completionHandler:(void (^)(NSString *, short, NSDictionary *, NSArray *, NSArray *, NSError *))arg2;
@end
