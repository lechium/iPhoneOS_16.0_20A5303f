//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIWindow.h>

@class NSHashTable, NSString;

@interface EventSourceWindow : UIWindow
{
    NSHashTable *_eventTaps;	// 8 = 0x8
    _Bool _hasEventTaps;	// 16 = 0x10
    struct CGRect _keyboardFrame;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000082f4e1
- (void)sendEvent:(id)arg1;	// IMP=0x001000000082f32f
- (void)registerEventTap:(id)arg1;	// IMP=0x001000000082f2aa
- (void)_updateAnalyticsState;	// IMP=0x001000000082f226
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000082f07a
@property(readonly, nonatomic) double keyboardHeight;
- (void)_keyboardWillHide:(id)arg1;	// IMP=0x001000000082f02a
- (void)_keyboardDidShow:(id)arg1;	// IMP=0x001000000082ef7a
- (void)_commonUpdate;	// IMP=0x001000000082ee53
- (id)initWithContentRect:(struct CGRect)arg1;	// IMP=0x001000000082edf6
- (id)initWithWindowScene:(id)arg1;	// IMP=0x001000000082edaa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
