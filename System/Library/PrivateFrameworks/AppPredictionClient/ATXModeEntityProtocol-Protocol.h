//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppPredictionClient/ATXModeEntityJsonProtocol-Protocol.h>
#import <AppPredictionClient/NSCopying-Protocol.h>
#import <AppPredictionClient/NSObject-Protocol.h>
#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@class ATXModeEntityScore, NSString;

@protocol ATXModeEntityProtocol <NSObject, NSSecureCoding, NSCopying, ATXModeEntityJsonProtocol>
@property(retain, nonatomic) ATXModeEntityScore *scoreMetadata;
- (NSString *)identifier;
@end

