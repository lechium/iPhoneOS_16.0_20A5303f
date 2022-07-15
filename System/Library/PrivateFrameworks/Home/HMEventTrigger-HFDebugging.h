//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMEventTrigger.h>

@class HMDurationEvent, NSString;

@interface HMEventTrigger (HFDebugging)
+ (id)_hf_naturalLanguageDetailsSentenceElementsWithRecurrences:(id)arg1 conditions:(id)arg2 endEvents:(id)arg3 withOptions:(id)arg4;	// IMP=0x00100000000dae12
+ (id)hf_naturalLanguageDetailsWithRecurrences:(id)arg1 conditions:(id)arg2 endEvents:(id)arg3 withOptions:(id)arg4;	// IMP=0x00100000000dacd5
+ (id)_hf_localizedStringOrNilIfNotFoundForKey:(id)arg1;	// IMP=0x00100000000daa62
+ (unsigned long long)hf_triggerRangeTypeWithCharacteristics:(id)arg1 triggerValueRange:(id)arg2 thresholdValue:(id)arg3;	// IMP=0x00100000000da603
+ (id)_hf_triggerRangeKeyComponentForRangeType:(unsigned long long)arg1;	// IMP=0x00100000000da5df
+ (id)hf_naturalLanguageTurnOffAfterDuration:(id)arg1 style:(unsigned long long)arg2;	// IMP=0x00100000000da415
+ (id)hf_localizedStringForProgrammableSwitchCharacteristic:(id)arg1 value:(id)arg2;	// IMP=0x00100000000da3b8
+ (id)hf_localizationKeyForProgrammableSwitchCharacteristic:(id)arg1 value:(id)arg2;	// IMP=0x00100000000da31f
+ (id)hf_triggerValueNaturalLanguageDescriptionWithCharacteristics:(id)arg1 triggerValueRange:(id)arg2 thresholdValue:(id)arg3;	// IMP=0x00100000000da0af
+ (id)hf_triggerRangeValueNaturalLanguageDescriptionWithCharacteristics:(id)arg1 triggerValueRange:(id)arg2 thresholdValue:(id)arg3;	// IMP=0x00100000000d9e49
+ (id)hf_triggerValueNaturalLanguageDescriptionWithCharacteristics:(id)arg1 triggerValue:(id)arg2;	// IMP=0x00100000000d97ea
+ (id)hf_triggerValueNaturalLanguageDescriptionFormatterWithCharacteristics:(id)arg1;	// IMP=0x00100000000d9585
+ (id)_hf_naturalLanguageNameWithOptions:(id)arg1 nonSensorCharacteristics:(id)arg2 triggerValue:(id)arg3;	// IMP=0x00100000000d8f3c
+ (id)_hf_alarmNaturalLanguageNameWithNameStringKey:(id)arg1 nameType:(unsigned long long)arg2 thresholdKey:(id)arg3 thresholdValueDescription:(id)arg4 roomName:(id)arg5 actionsDescription:(id)arg6;	// IMP=0x00100000000d8c95
+ (id)_hf_naturalLanguageNameWithOptions:(id)arg1 sensorCharacteristics:(id)arg2 triggerValue:(id)arg3;	// IMP=0x00100000000d8294
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 characteristics:(id)arg2 triggerValue:(id)arg3;	// IMP=0x00100000000d805d
+ (id)hf_naturalLanguageDescriptionForCharacteristic:(id)arg1;	// IMP=0x00100000000d7f57
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 presenceEvent:(id)arg2;	// IMP=0x00100000000d7d57
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 region:(id)arg2 forUser:(id)arg3;	// IMP=0x00100000000d762c
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 events:(id)arg2 recurrences:(id)arg3 forUser:(id)arg4;	// IMP=0x00100000000d6fda
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 events:(id)arg2 recurrences:(id)arg3;	// IMP=0x00100000000d6fc5
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 events:(id)arg2 forUser:(id)arg3;	// IMP=0x00100000000d6fa9
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 events:(id)arg2;	// IMP=0x00100000000d6f8d
+ (id)hf_representativeTriggerValueForCharacteristic:(id)arg1 similarToValue:(id)arg2;	// IMP=0x00100000001fa8fc
+ (_Bool)_hf_valueIsValidForCharacteristic:(id)arg1 value:(id)arg2;	// IMP=0x00100000001fa739
+ (id)hf_allTriggerValuesForCharacteristic:(id)arg1 similarToValue:(id)arg2;	// IMP=0x00100000001fa30d
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x00100000000a533e
- (id)_hf_naturalLanguageDetailsSentenceElementsWithOptions:(id)arg1;	// IMP=0x00100000000daaef
- (id)hf_naturalLanguageNameWithOptions:(id)arg1;	// IMP=0x00100000000d6e93
- (id)hf_naturalLanguageNameWithHome:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x00100000000d6e03
- (_Bool)hf_affectsCharacteristics:(id)arg1;	// IMP=0x00100000001f90a0
- (_Bool)hf_requiresConfirmationToRun;	// IMP=0x00100000001f8fa7
- (id)hf_characteristicsInEvents;	// IMP=0x00100000001fa1e7
- (id)hf_designateTrigger:(_Bool)arg1;	// IMP=0x00100000001f9c62
- (id)hf_unmarkTriggerAsHomeAppCreated;	// IMP=0x00100000001f9c4e
- (id)hf_markTriggerAsHomeAppCreated;	// IMP=0x00100000001f9c37
- (_Bool)hf_isHomeAppCreatedTrigger;	// IMP=0x00100000001f97cc
- (unsigned long long)hf_triggerType;	// IMP=0x00100000001f93ed
@property(readonly, nonatomic) HMDurationEvent *hf_durationEndEvent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
