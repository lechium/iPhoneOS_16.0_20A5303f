//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, PFPosterConfiguration, PFPosterDescriptor, UIColor;

__attribute__((visibility("hidden")))
@interface _PUWallpaperPosterEditorDebugEnvironment : NSObject
{
    UIColor *_pu_caseColor;	// 8 = 0x8
    long long _pu_userInterfaceStyle;	// 16 = 0x10
    NSString *_pu_selectedToolbarItemIdentifier;	// 24 = 0x18
    PFPosterDescriptor *_posterDescriptor;	// 32 = 0x20
    PFPosterConfiguration *_sourcePosterConfiguration;	// 40 = 0x28
    NSURL *_sourceAssetDirectory;	// 48 = 0x30
    NSURL *_targetAssetDirectory;	// 56 = 0x38
    unsigned long long _legacyConfigurationType;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000510c06
@property(nonatomic) unsigned long long legacyConfigurationType; // @synthesize legacyConfigurationType=_legacyConfigurationType;
@property(retain, nonatomic) NSURL *targetAssetDirectory; // @synthesize targetAssetDirectory=_targetAssetDirectory;
@property(retain, nonatomic) NSURL *sourceAssetDirectory; // @synthesize sourceAssetDirectory=_sourceAssetDirectory;
@property(retain, nonatomic) PFPosterConfiguration *sourcePosterConfiguration; // @synthesize sourcePosterConfiguration=_sourcePosterConfiguration;
@property(retain, nonatomic) PFPosterDescriptor *posterDescriptor; // @synthesize posterDescriptor=_posterDescriptor;
@property(retain, nonatomic) NSString *pu_selectedToolbarItemIdentifier; // @synthesize pu_selectedToolbarItemIdentifier=_pu_selectedToolbarItemIdentifier;
@property(nonatomic) long long pu_userInterfaceStyle; // @synthesize pu_userInterfaceStyle=_pu_userInterfaceStyle;
@property(retain, nonatomic) UIColor *pu_caseColor; // @synthesize pu_caseColor=_pu_caseColor;
@property(readonly, nonatomic) unsigned long long pu_legacyConfigurationType;
@property(readonly, nonatomic) NSURL *pu_targetAssetDirectory;
@property(readonly, nonatomic) NSURL *pu_sourceAssetDirectory;
@property(readonly, nonatomic) PFPosterConfiguration *pu_sourcePosterConfiguration;
@property(readonly, nonatomic) PFPosterDescriptor *pu_posterDescriptor;
@property(readonly, nonatomic) long long pu_posterType;
- (id)initWithSourcePosterConfiguration:(id)arg1;	// IMP=0x00000000005109e1
- (id)initWithPosterDescriptor:(id)arg1;	// IMP=0x0000000000510987
- (id)init;	// IMP=0x0000000000510889

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
