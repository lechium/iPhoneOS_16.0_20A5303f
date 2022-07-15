//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBDataString, _INPBImageValue;

@protocol _INPBShortcutOverview <NSObject>
+ (Class)stepsType;
@property(readonly, nonatomic) _Bool hasVoiceCommand;
@property(retain, nonatomic) _INPBDataString *voiceCommand;
@property(readonly, nonatomic) unsigned long long stepsCount;
@property(copy, nonatomic) NSArray *steps;
@property(readonly, nonatomic) _Bool hasName;
@property(retain, nonatomic) _INPBDataString *name;
@property(readonly, nonatomic) _Bool hasIcon;
@property(retain, nonatomic) _INPBImageValue *icon;
@property(readonly, nonatomic) _Bool hasDescriptiveText;
@property(retain, nonatomic) _INPBDataString *descriptiveText;
- (_INPBImageValue *)stepsAtIndex:(unsigned long long)arg1;
- (void)addSteps:(_INPBImageValue *)arg1;
- (void)clearSteps;
@end
