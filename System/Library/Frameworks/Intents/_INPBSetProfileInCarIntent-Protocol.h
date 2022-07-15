//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBDataString, _INPBInteger, _INPBIntentMetadata, _INPBString;

@protocol _INPBSetProfileInCarIntent <NSObject>
@property(readonly, nonatomic) _Bool hasProfileNumber;
@property(retain, nonatomic) _INPBInteger *profileNumber;
@property(readonly, nonatomic) _Bool hasProfileName;
@property(retain, nonatomic) _INPBString *profileName;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(nonatomic) _Bool hasDefaultProfile;
@property(nonatomic) _Bool defaultProfile;
@property(readonly, nonatomic) _Bool hasCarName;
@property(retain, nonatomic) _INPBDataString *carName;
@end
