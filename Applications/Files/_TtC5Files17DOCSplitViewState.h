//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC5Files17DOCSplitViewState : NSObject
{
    MISSING_TYPE *_impl;	// 8 = 0x8
}

+ (_Bool)isShowOverlayTransitionFromState:(id)arg1 toState:(id)arg2;	// IMP=0x0020000000268120
+ (_Bool)isHideOverlayTransitionFromState:(id)arg1 toState:(id)arg2;	// IMP=0x00100000002680c0
- (id)init;	// IMP=0x00400000002681a0
- (id)withDisplayMode:(long long)arg1;	// IMP=0x0010000000268020
- (id)withIsCollapsed:(_Bool)arg1;	// IMP=0x0010000000267f50
- (id)initFor:(id)arg1;	// IMP=0x0010000000267e50
@property(nonatomic, readonly) _Bool isSidebarShown;
@property(nonatomic, readonly) _Bool isSidebarShownInline;
@property(nonatomic, readonly) _Bool isSidebarShownInOverlay;
@property(nonatomic, readonly) long long displayMode;
@property(nonatomic, readonly) _Bool isCollapsed;

@end
