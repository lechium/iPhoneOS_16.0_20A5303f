//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSSceneSpecification.h>

@class NSArray, NSDictionary, NSString;

@interface FBSSceneSpecification (UIKitSceneSpecification)
@property(readonly, nonatomic) _Bool allowsConfigurationByAppDelegate;
@property(readonly, nonatomic) _Bool affectsScreenOrientation;
@property(readonly, nonatomic) _Bool affectsAppLifecycleIfInternal;
@property(readonly, nonatomic) _Bool isInternal;
@property(readonly, nonatomic) Class uiSceneMinimumClass;
@property(readonly, nonatomic) Class sceneSubstrateClass;
@property(readonly, nonatomic) Class lifecycleMonitorClass;
@property(readonly, nonatomic) _Bool isUIKitManaged;
- (id)disconnectionHandlers;	// IMP=0x00300000007cb857
- (id)connectionHandlers;	// IMP=0x00300000007cb84a
@property(readonly, nonatomic) NSString *uiSceneSessionRole;
@property(readonly, nonatomic) NSDictionary *baseSceneComponentClassDictionary;
- (id)coreSceneComponentClassDictionary;	// IMP=0x00300000007cb81c
@property(readonly, nonatomic) NSArray *finalActionHandlers;
@property(readonly, nonatomic) NSArray *initialActionHandlers;
@property(readonly, nonatomic) NSArray *finalSettingsDiffActions;
@property(readonly, nonatomic) NSArray *initialSettingsDiffActions;
@property(readonly, nonatomic) NSString *overlayAppSceneConfigurationName;
@end
