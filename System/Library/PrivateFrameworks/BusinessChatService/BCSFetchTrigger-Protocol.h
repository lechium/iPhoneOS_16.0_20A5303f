//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BusinessChatService/NSObject-Protocol.h>

@protocol BCSFetchTrigger <NSObject>
- (void)triggerFetchForReason:(unsigned long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)scheduleFetchBlock:(void (^)(NSObject<OS_xpc_object> *, unsigned long long, void (^)(_Bool, NSError *)))arg1;
@end
