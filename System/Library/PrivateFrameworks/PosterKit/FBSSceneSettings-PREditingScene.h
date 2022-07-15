//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoard/FBSSceneSettings.h>

@class BSColor, NSString, PRPosterConfigurableOptions, PRPosterConfiguredProperties, PRSServerPosterPath;

@interface FBSSceneSettings (PREditingScene)
@property(readonly, nonatomic, getter=pr_areComplicationsDisallowed) _Bool pr_complicationsDisallowed;
@property(readonly, nonatomic, getter=pr_areControlsHidden) _Bool pr_controlsHidden;
@property(readonly, nonatomic) long long pr_focusedComplicationElement;
@property(readonly, nonatomic) _Bool pr_usesEditingLayout;
@property(readonly, nonatomic) struct CGRect pr_trailingTopButtonFrame;
@property(readonly, nonatomic) struct CGRect pr_leadingTopButtonFrame;
@property(readonly, nonatomic) long long pr_editingContext;
@property(readonly, nonatomic) long long pr_editingVariant;
@property(readonly, nonatomic) long long pr_editingAcceptButtonType;
@property(readonly, nonatomic, getter=pr_isCoveredByModalPresentation) _Bool pr_coveredByModalPresentation;
- (long long)pr_adjustedLuminance;	// IMP=0x0020000000050323
@property(readonly, nonatomic) _Bool pr_floatingLayerAlphaInverted;
@property(readonly, nonatomic) unsigned long long pr_significantEventsCounter;
@property(readonly, nonatomic) double pr_unlockProgress;
@property(readonly, nonatomic) long long pr_content;
@property(readonly, nonatomic) long long pr_mode;
@property(readonly, nonatomic, getter=pr_showsComplications) _Bool pr_showsComplications;
@property(readonly, nonatomic, getter=pr_isAlternateDateEnabled) _Bool pr_alternateDateEnabled;
@property(readonly, nonatomic, getter=pr_isComplicationRowConfigured) _Bool pr_complicationRowConfigured;
@property(readonly, nonatomic, getter=pr_isInlineComplicationConfigured) _Bool pr_inlineComplicationConfigured;
@property(readonly, nonatomic, getter=pr_isParallaxEnabled) _Bool pr_parallaxEnabled;
@property(readonly, nonatomic, getter=pr_isDepthEffectDisallowed) _Bool pr_depthEffectDisallowed;
@property(readonly, copy, nonatomic) NSString *pr_snapshotLogIdentifier;
@property(readonly, nonatomic) PRPosterConfiguredProperties *pr_posterConfiguredProperties;
@property(readonly, nonatomic) PRPosterConfigurableOptions *pr_posterConfigurableOptions;
@property(readonly, nonatomic) PRSServerPosterPath *pr_posterContents;
@property(readonly, nonatomic) long long pr_userInterfaceStyle;
@property(readonly, nonatomic) BSColor *pr_caseColor;
@property(readonly, copy, nonatomic) NSString *pr_previewIdentifier;
@property(readonly, copy, nonatomic) NSString *pr_provider;
@property(readonly, copy, nonatomic) NSString *pr_role;
@end
