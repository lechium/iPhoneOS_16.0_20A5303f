//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol _INPBSetLabeledSettingIntentResponse <NSObject>
@property(readonly, nonatomic) _Bool hasUpdatedValue;
@property(copy, nonatomic) NSString *updatedValue;
@property(readonly, nonatomic) _Bool hasOldValue;
@property(copy, nonatomic) NSString *oldValue;
@property(readonly, nonatomic) _Bool hasErrorDetail;
@property(copy, nonatomic) NSString *errorDetail;
@end
