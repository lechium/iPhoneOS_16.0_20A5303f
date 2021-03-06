//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (NLWorkoutInitiation)
+ (id)fiui_workoutPickerURL;	// IMP=0x0080000000051277
+ (id)fiui_workoutPickerURLComponents;	// IMP=0x0080000000051226
+ (id)fiui_startBackdatedWorkoutURLWithDate:(id)arg1 workoutIdentifier:(id)arg2 workoutType:(unsigned long long)arg3 isIndoor:(_Bool)arg4 swimmingLocationType:(long long)arg5 showPicker:(_Bool)arg6;	// IMP=0x0080000000050d76
+ (id)fiui_pauseWorkoutURLWithIdentifier:(id)arg1;	// IMP=0x0080000000050d5a
+ (id)fiui_endWorkoutURLWithIdentifier:(id)arg1;	// IMP=0x0080000000050d3e
+ (id)_launchURLWithHostname:(id)arg1 workoutIdentifier:(id)arg2;	// IMP=0x0080000000050c2c
+ (id)fiui_workoutInitiationURLWithWorkout:(id)arg1 presentConfiguration:(_Bool)arg2 skipCountdown:(_Bool)arg3;	// IMP=0x00800000000503c6
+ (id)fiui_URLEnergyUnit;	// IMP=0x00800000000503ad
+ (id)fiui_URLDistanceUnit;	// IMP=0x0080000000050394
+ (id)fiui_URLTimeUnit;	// IMP=0x008000000005037b
@end

