//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLNotifierServiceProtocol-Protocol.h"

@protocol CLMotionStateProtocol <CLNotifierServiceProtocol>
- (void)queryMotionStatesWithStartTime:(double)arg1 endTime:(double)arg2 isFromInternalClient:(_Bool)arg3 withReply:(void (^)(NSMutableArray *))arg4;
- (_Bool)syncgetDoSync:(void (^)(void *))arg1;
- (void)doAsync:(void (^)(void *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(void *))arg1;
@end
