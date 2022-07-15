//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UIDebugLogNode;

__attribute__((visibility("hidden")))
@interface _UIDeepestPreferredEnvironmentSearch : NSObject
{
    _Bool _allowsOverridingPreferedFocusEnvironments;	// 8 = 0x8
    _UIDebugLogNode *_debugLog;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000006e6f00
@property(retain, nonatomic) _UIDebugLogNode *debugLog; // @synthesize debugLog=_debugLog;
@property(nonatomic) _Bool allowsOverridingPreferedFocusEnvironments; // @synthesize allowsOverridingPreferedFocusEnvironments=_allowsOverridingPreferedFocusEnvironments;
- (void)_reportDidFindOverridingPreferredFocusEnvironment:(id)arg1 source:(id)arg2;	// IMP=0x00000000006e6cc4
- (void)_reportDidFinishEnumeratingPreferencesWithDeepestPreferredFocusableItem:(id)arg1;	// IMP=0x00000000006e6c0c
- (void)_reportFinishedEvaluatingAllPreferencesForEnvironmentInContext:(id)arg1 result:(long long)arg2;	// IMP=0x00000000006e68e7
- (void)_reportFoundFocusableItem:(id)arg1 inContext:(id)arg2;	// IMP=0x00000000006e6867
- (void)_reportStartingSearch;	// IMP=0x00000000006e67ef
- (id)_overridingPreferredFocusEnvironmentForPreferredEnvironment:(id)arg1 visitedFocusEnvironments:(id)arg2;	// IMP=0x00000000006e648f
- (id)deepestPreferredFocusEnvironmentForEnvironment:(id)arg1;	// IMP=0x00000000006e6168
- (id)deepestPreferredFocusableItemForEnvironment:(id)arg1 withRequest:(id)arg2;	// IMP=0x00000000006e5b2c

@end
