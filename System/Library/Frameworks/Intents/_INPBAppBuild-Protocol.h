//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBAppId, _INPBBuildId;

@protocol _INPBAppBuild <NSObject>
@property(readonly, nonatomic) _Bool hasBuildId;
@property(retain, nonatomic) _INPBBuildId *buildId;
@property(readonly, nonatomic) _Bool hasAppId;
@property(retain, nonatomic) _INPBAppId *appId;
@end
