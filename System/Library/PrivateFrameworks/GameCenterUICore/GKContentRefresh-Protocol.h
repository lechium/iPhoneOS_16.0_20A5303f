//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterUICore/NSObject-Protocol.h>

@class NSDictionary;

@protocol GKContentRefresh <NSObject>
- (_Bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(NSDictionary *)arg2;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(NSDictionary *)arg2;
- (void)_gkResetContents;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(void (^)(NSError *))arg1;

@optional
- (void)_gkForceNextContentUpdate;
- (void)_gkSetContentsNeedUpdateWithHandler:(void (^)(void))arg1;
@end

