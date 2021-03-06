//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BusinessChatService/NSObject-Protocol.h>

@class BCSConfigItem, BCSItem, NSString;
@protocol BCSItemIdentifying, BCSResolutionMetricProtocol;

@protocol BCSItemResolving <NSObject>
- (void)itemMatching:(id <BCSItemIdentifying>)arg1 config:(BCSConfigItem *)arg2 clientBundleID:(NSString *)arg3 metric:(id <BCSResolutionMetricProtocol>)arg4 completion:(void (^)(BCSItem *, NSError *))arg5;
- (BCSItem *)cachedItemMatching:(id <BCSItemIdentifying>)arg1;
@end

