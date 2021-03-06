//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProactiveSuggestionClientModel/ATXProtoBufWrapper-Protocol.h>
#import <ProactiveSuggestionClientModel/NSObject-Protocol.h>
#import <ProactiveSuggestionClientModel/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@protocol ATXUICacheProtocol <NSObject, NSSecureCoding, ATXProtoBufWrapper>
@property(retain, nonatomic) NSUUID *uuid;
- (NSString *)compactDescription;
@end

