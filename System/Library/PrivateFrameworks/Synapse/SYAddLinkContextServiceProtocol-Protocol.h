//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Synapse/NSObject-Protocol.h>

@class NSArray, NSData;

@protocol SYAddLinkContextServiceProtocol <NSObject>
- (oneway void)userEditDidAddContentItemDatas:(NSArray *)arg1;
- (oneway void)userDidRemoveContentItemDatas:(NSArray *)arg1;
- (oneway void)userWillAddLinkWithActivityData:(NSData *)arg1 completion:(void (^)(NSData *))arg2;
@end
