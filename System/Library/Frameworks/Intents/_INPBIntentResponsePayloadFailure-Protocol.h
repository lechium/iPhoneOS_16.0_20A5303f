//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol _INPBIntentResponsePayloadFailure <NSObject>
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) int errorCode;
@property(readonly, nonatomic) _Bool hasEnumTypeName;
@property(copy, nonatomic) NSString *enumTypeName;
@property(nonatomic) _Bool hasAppLaunchRequested;
@property(nonatomic) _Bool appLaunchRequested;
@end
