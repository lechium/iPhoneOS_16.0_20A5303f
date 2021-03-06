//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSObject.h>

@class NSArray, SKUIApplicationController, SKUIJSTabBarItem;

__attribute__((visibility("hidden")))
@interface SKUIJSTabBar : IKJSObject
{
    SKUIApplicationController *_applicationController;	// 8 = 0x8
    NSArray *_tabs;	// 16 = 0x10
    SKUIJSTabBarItem *_transientTab;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000030413d
@property(readonly, nonatomic) SKUIJSTabBarItem *transientTab; // @synthesize transientTab=_transientTab;
@property(readonly, nonatomic) NSArray *tabs; // @synthesize tabs=_tabs;
- (id)_selectedTabBarItemForIndex:(long long)arg1;	// IMP=0x0000000000304095
- (void)_reloadTabBarItemsWithPreludeMainThreadWork:(CDUnknownBlockType)arg1;	// IMP=0x00000000003039ce
@property(retain, nonatomic) SKUIJSTabBarItem *selectedTab;
- (void)sendOnUpdateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003034e6
- (void)sendOnUpdate;	// IMP=0x0000000000303421
- (void)sendOnNeedsContentForTabBarItem:(id)arg1;	// IMP=0x00000000003030ac
- (id)initWithAppContext:(id)arg1 controller:(id)arg2;	// IMP=0x0000000000302feb

@end

