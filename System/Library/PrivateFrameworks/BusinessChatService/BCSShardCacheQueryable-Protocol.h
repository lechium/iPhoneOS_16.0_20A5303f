//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BusinessChatService/BCSShardCaching-Protocol.h>

@protocol BCSShardCacheQueryable <BCSShardCaching>
- (long long)countOfExpiredShardsOfType:(long long)arg1;
- (long long)countOfShardsOfType:(long long)arg1;
@end
