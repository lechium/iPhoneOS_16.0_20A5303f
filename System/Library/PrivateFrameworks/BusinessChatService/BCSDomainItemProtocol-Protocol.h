//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BusinessChatService/BCSDomainItemIdentifying-Protocol.h>
#import <BusinessChatService/BCSExpiring-Protocol.h>

@class BCSDomainBundleIdPatterns, NSString;

@protocol BCSDomainItemProtocol <BCSDomainItemIdentifying, BCSExpiring>
@property(readonly, nonatomic) BCSDomainBundleIdPatterns *domainBundleIDPatterns;
@property(readonly, nonatomic) NSString *base64EncodedShardString;
@end
