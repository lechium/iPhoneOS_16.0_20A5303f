//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@interface UIViewController (VSAdditions)
- (void)vs_checkUserInterfaceStyleForViewModel:(id)arg1;	// IMP=0x009000000002b620
- (id)vs_addFocusGuideFromView:(id)arg1 toViews:(id)arg2 withDirection:(unsigned long long)arg3;	// IMP=0x009000000002b128
- (void)vs_endIgnoringInteraction;	// IMP=0x009000000002b0a9
- (void)vs_beginIgnoringInteraction;	// IMP=0x009000000002b02d
- (void)vs_setIgnoreInteractionCount:(long long)arg1;	// IMP=0x009000000002afe0
- (long long)vs_ignoreInteractionCount;	// IMP=0x009000000002af9e
- (void)vs_adjustContentScrollViewInsets;	// IMP=0x009000000002af98
@end

