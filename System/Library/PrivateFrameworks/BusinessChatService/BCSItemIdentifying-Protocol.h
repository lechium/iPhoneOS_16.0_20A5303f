//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BusinessChatService/NSObject-Protocol.h>

@class NSObject;
@protocol BCSItemIdentifying;

@protocol BCSItemIdentifying <NSObject>
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) long long truncatedHash;
@property(readonly, nonatomic) NSObject *itemIdentifier;
- (_Bool)matchesItemIdentifying:(id <BCSItemIdentifying>)arg1;
@end
