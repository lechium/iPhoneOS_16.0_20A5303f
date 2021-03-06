//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface CKActionMenuItemImageView : UIImageView
{
    UIColor *_unhighlightedTintColor;	// 8 = 0x8
    UIColor *_highlightedTintColor;	// 16 = 0x10
    _Bool _enabled;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000429935
- (void)updateTintColor;	// IMP=0x00000000004298ec
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000429818
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000429755
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000429741
- (id)initWithImage:(id)arg1 tintColor:(id)arg2 highlightedTintColor:(id)arg3;	// IMP=0x000000000042967c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

