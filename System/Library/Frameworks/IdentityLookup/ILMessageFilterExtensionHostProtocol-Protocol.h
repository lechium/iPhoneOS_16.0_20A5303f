//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IdentityLookup/NSObject-Protocol.h>

@protocol ILMessageFilterExtensionHostProtocol <NSObject>
- (oneway void)deferReportRequestToNetworkWithReply:(void (^)(ILNetworkResponse *, NSError *))arg1;
- (oneway void)deferQueryRequestToNetworkWithReply:(void (^)(ILNetworkResponse *, NSError *))arg1;
@end

