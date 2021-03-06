//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextView.h>

@class NSString;

@interface UITextView (PKUIUtilities)
+ (id)pkui_plainNonInteractiveTextViewWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000f7dbf
+ (id)pkui_plainInteractiveTextViewWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000f7d60
+ (void)pkui_styleTextView:(id)arg1;	// IMP=0x00100000000f7c95
- (struct CGRect)pkui_textFrame;	// IMP=0x00100000000f8282
- (struct CGRect)pkui_frameForTextFrame:(struct CGRect)arg1;	// IMP=0x00100000000f820f
- (struct CGSize)pkui_textSizeThatFits:(struct CGSize)arg1;	// IMP=0x00100000000f7e3e
- (void)pk_setAttributedTextRespectingTextAndBackgroundColors:(id)arg1;	// IMP=0x00100000001cf252
- (void)pk_applyAppearance:(id)arg1;	// IMP=0x00100000001cf10d
- (id)pk_childrenForAppearance;	// IMP=0x00100000001ceff8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

