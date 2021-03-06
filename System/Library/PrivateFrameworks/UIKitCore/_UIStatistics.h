//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIStatistics : NSObject
{
    NSString *_key;	// 8 = 0x8
    double _sampleValue;	// 16 = 0x10
    NSMutableSet *_children;	// 24 = 0x18
    double _sampleRate;	// 32 = 0x20
}

+ (unsigned long long)currentTime;	// IMP=0x0060000001285f11
+ (id)_sharedStatisticWithDomain:(id)arg1 statisticsClass:(Class)arg2 identifierReporting:(long long)arg3;	// IMP=0x006000000128852e
+ (id)coverSheetButtonMaximumForceWithActivation:(_Bool)arg1 category:(id)arg2;	// IMP=0x00600000012884a7
+ (id)coverSheetButtonFirstActivationDurationWithCategory:(id)arg1;	// IMP=0x006000000128842d
+ (id)coverSheetButtonInteractionDurationWithCategory:(id)arg1;	// IMP=0x00600000012883b3
+ (id)coverSheetButtonInteractionCountWithActivation:(_Bool)arg1 category:(id)arg2;	// IMP=0x006000000128832c
+ (id)recentsInputViewNewEntryCount;	// IMP=0x00600000012882b9
+ (id)recentsInputViewItemSelectedCount;	// IMP=0x0060000001288246
+ (id)recentsInputViewNumberOfItems;	// IMP=0x00600000012881d3
+ (id)recentsInputViewPresentationCount;	// IMP=0x0060000001288160
+ (id)feedbackGeneratorPlayCountWithSuffix:(id)arg1;	// IMP=0x00600000012880ef
+ (id)feedbackGeneratorPreparationCountWithSuffix:(id)arg1;	// IMP=0x006000000128807e
+ (id)feedbackGeneratorActivationTimeOutCountWithSuffix:(id)arg1;	// IMP=0x006000000128800d
+ (id)feedbackGeneratorActivationDurationWithSuffix:(id)arg1;	// IMP=0x0060000001287f9c
+ (id)feedbackGeneratorActivationCountWithSuffix:(id)arg1;	// IMP=0x0060000001287f2b
+ (id)feedbackEngineOutOfChannelsCountWithSuffix:(id)arg1;	// IMP=0x0060000001287eba
+ (id)feedbackEnginePrewarmDurationWithSuffix:(id)arg1;	// IMP=0x0060000001287e49
+ (id)feedbackEnginePrewarmCountWithSuffix:(id)arg1;	// IMP=0x0060000001287dd8
+ (id)feedbackEngineActivationDurationWithSuffix:(id)arg1;	// IMP=0x0060000001287d67
+ (id)feedbackEngineActivationCountWithSuffix:(id)arg1;	// IMP=0x0060000001287cf6
+ (id)scrollBounceCount;	// IMP=0x0060000001287c80
+ (id)zoomGestureCount;	// IMP=0x0060000001287c0a
+ (id)pinchGestureCount;	// IMP=0x0060000001287b94
+ (id)alertButtonTapCount;	// IMP=0x0060000001287b79
+ (id)controlInteractionDurationDistributionWithCategory:(id)arg1 suffix:(id)arg2;	// IMP=0x0060000001287b06
+ (id)controlValueChangeEmittedCountWithCategory:(id)arg1 suffix:(id)arg2;	// IMP=0x0060000001287a93
+ (id)controlTapCountWithCategory:(id)arg1 suffix:(id)arg2;	// IMP=0x00600000012878fd
+ (id)scrubberUsageTime;	// IMP=0x006000000128788f
+ (id)scrubberUsageCount;	// IMP=0x0060000001287821
+ (id)maxForce;	// IMP=0x006000000128772f
+ (id)previewInteractionPopForce;	// IMP=0x0060000001287667
+ (id)previewInteractionPeekForce;	// IMP=0x006000000128759f
+ (id)previewInteractionAlertPresentationCount;	// IMP=0x00600000012874d4
+ (id)previewInteractionTapCount;	// IMP=0x0060000001287443
+ (id)previewInteractionPopCount;	// IMP=0x0060000001287378
+ (id)previewInteractionPeekDuration;	// IMP=0x00600000012872ad
+ (id)previewInteractionPeekCount;	// IMP=0x00600000012871e2
- (void).cxx_destruct;	// IMP=0x0000000001286ec4
@property(nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
- (id)description;	// IMP=0x0000000001286df7
- (void)_incrementValueBy:(long long)arg1;	// IMP=0x0000000001286c6c
- (void)_setValue:(long long)arg1;	// IMP=0x0000000001286ae1
- (void)_resetValue;	// IMP=0x0000000001286983
- (void)_recordDistributionTime:(unsigned long long)arg1;	// IMP=0x00000000012867f8
- (void)_recordDistributionValue:(double)arg1;	// IMP=0x0000000001286665
- (void)_resetDistributionToValue:(double)arg1;	// IMP=0x00000000012864a1
- (void)_resetDistribution;	// IMP=0x0000000001286343
- (void)randomizeSampleValue;	// IMP=0x0000000001286315
- (_Bool)_shouldSample;	// IMP=0x00000000012862c2
- (void)_removeChildStatistic:(id)arg1;	// IMP=0x0000000001286260
- (void)_addChildStatistic:(id)arg1;	// IMP=0x000000000128620b
- (id)initWithDomain:(id)arg1;	// IMP=0x00000000012861dc
- (id)_key;	// IMP=0x00000000012861ce
- (id)initWithDomain:(id)arg1 identifierReporting:(long long)arg2;	// IMP=0x0000000001285fc8
- (id)init;	// IMP=0x0000000001285f19

@end

