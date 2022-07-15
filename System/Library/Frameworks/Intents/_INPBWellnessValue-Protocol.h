//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBDouble, _INPBInteger, _INPBValueMetadata;

@protocol _INPBWellnessValue <NSObject>
@property(readonly, nonatomic) _Bool hasValueMetadata;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property(readonly, nonatomic) _Bool hasOrdinalValue;
@property(retain, nonatomic) _INPBInteger *ordinalValue;
@property(readonly, nonatomic) _Bool hasPbDoubleValue;
@property(retain, nonatomic) _INPBDouble *pbDoubleValue;
@end
