//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, PEAutoAdjustmentController, PEValuesCalculator, PICompositionController;
@protocol PUAdjustmentsDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface PUAdjustmentsDataSource : NSObject
{
    NSMutableArray *_adjustmentInfoSections;	// 8 = 0x8
    id <PUAdjustmentsDataSourceDelegate> _delegate;	// 16 = 0x10
    PICompositionController *_compositionController;	// 24 = 0x18
    PEAutoAdjustmentController *_autoEnhanceController;	// 32 = 0x20
    PEValuesCalculator *_valuesCalculator;	// 40 = 0x28
    NSString *_lastAdjustmentLocalizedName;	// 48 = 0x30
    unsigned long long _assetType;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000079f47
@property(nonatomic) unsigned long long assetType; // @synthesize assetType=_assetType;
@property(copy, nonatomic) NSString *lastAdjustmentLocalizedName; // @synthesize lastAdjustmentLocalizedName=_lastAdjustmentLocalizedName;
@property(retain, nonatomic) PEValuesCalculator *valuesCalculator; // @synthesize valuesCalculator=_valuesCalculator;
@property(retain, nonatomic) PEAutoAdjustmentController *autoEnhanceController; // @synthesize autoEnhanceController=_autoEnhanceController;
@property(retain, nonatomic) PICompositionController *compositionController; // @synthesize compositionController=_compositionController;
@property(nonatomic) __weak id <PUAdjustmentsDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *adjustmentInfoSections; // @synthesize adjustmentInfoSections=_adjustmentInfoSections;
- (void)compositionControllerDidChange;	// IMP=0x0000000000079e38
- (void)_resetEnabledStateForAutoEnhancedInfos;	// IMP=0x0000000000079a6f
- (void)resetInfoAtIndexPath:(id)arg1;	// IMP=0x0000000000079958
- (void)modifyValue:(double)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000797d0
- (void)_modifyAdjustmentForInfo:(id)arg1;	// IMP=0x00000000000795d7
- (void)setAdjustmentEnabled:(_Bool)arg1 atIndexPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000079341
- (void)endInteractiveChange;	// IMP=0x00000000000792d1
- (void)beginInteractiveChange;	// IMP=0x0000000000079294
- (_Bool)canModifyAdjustmentAtIndexPath:(id)arg1;	// IMP=0x0000000000079221
- (id)infoForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000079082
- (long long)numberOfItemsInAllSections;	// IMP=0x0000000000079011
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x0000000000078f52
- (long long)numberOfSections;	// IMP=0x0000000000078f0e
- (void)_updateAdjustmentInfos;	// IMP=0x0000000000078947
- (void)_enableNonAutoAdjustments:(_Bool)arg1;	// IMP=0x00000000000786a5
- (id)_debugAdjustmentInfos;	// IMP=0x00000000000783f9
- (id)_smartBlackAndWhiteAdjustmentInfos;	// IMP=0x000000000007811c
- (id)_vignetteAdjustmentInfos;	// IMP=0x0000000000077fe1
- (id)_detailAdjustmentInfos;	// IMP=0x0000000000077c57
- (id)_colorAdjustmentInfos;	// IMP=0x00000000000778b8
- (id)_lightAdjustmentInfos;	// IMP=0x000000000007713a
- (id)_autoEnhanceAdjustmentInfo;	// IMP=0x0000000000076fbc
- (void)_createAdjustmentInfos;	// IMP=0x0000000000076df2
- (id)_newAdjustmentInfoWithAdjustmentKey:(id)arg1 settingKey:(id)arg2 attributeKey:(id)arg3;	// IMP=0x0000000000076dd7
- (id)_newAdjustmentInfoWithIdentifier:(id)arg1 adjustmentKey:(id)arg2 settingKey:(id)arg3 attributeKey:(id)arg4;	// IMP=0x0000000000076ce8
- (void)_setDefaultsForInfo:(id)arg1;	// IMP=0x0000000000076a96
- (id)renderer;	// IMP=0x0000000000076a37
- (void)setupWithCompositionController:(id)arg1 valuesCalculator:(id)arg2 autoAdjustmentController:(id)arg3 assetType:(unsigned long long)arg4;	// IMP=0x000000000007690f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
