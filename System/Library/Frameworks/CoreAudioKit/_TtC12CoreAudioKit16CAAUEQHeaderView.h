//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12CoreAudioKit16CAAUEQHeaderView : UIView
{
    MISSING_TYPE *appleLogo;	// 8 = 0x8
    MISSING_TYPE *auLabel;	// 16 = 0x10
    MISSING_TYPE *paramStack;	// 24 = 0x18
    MISSING_TYPE *border;	// 32 = 0x20
    MISSING_TYPE *viewSetup;	// 40 = 0x28
    MISSING_TYPE *auName;	// 48 = 0x30
    MISSING_TYPE *auAbbreviatedName;	// 64 = 0x40
    MISSING_TYPE *compressedHorizontalLayout;	// 80 = 0x50
    MISSING_TYPE *viewConstraints;	// 88 = 0x58
    MISSING_TYPE *params;	// 96 = 0x60
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x0010000000057c40
- (void).cxx_destruct;	// IMP=0x0000000000057ca0
- (void)adjustViewIfHorizontallyCompressed:(struct CGSize)arg1;	// IMP=0x0000000000057bf0
- (void)setConstraintsWith:(id)arg1;	// IMP=0x0000000000056370
- (void)endEditingWithId:(unsigned int)arg1;	// IMP=0x00000000000518c0
- (void)startEditingWithId:(unsigned int)arg1;	// IMP=0x00000000000513d0
- (void)endTouchWithNotification:(id)arg1;	// IMP=0x0000000000051300
- (void)beginTouchWithNotification:(id)arg1;	// IMP=0x00000000000508d0
- (void)endGestureWithId:(unsigned int)arg1;	// IMP=0x000000000004fbd0
- (void)beginGestureWithId:(unsigned int)arg1;	// IMP=0x000000000004fb00
- (void)setParameterWithId:(unsigned int)arg1 value:(float)arg2;	// IMP=0x000000000004f720
- (void)setColorForParameterWithId:(unsigned int)arg1 color:(id)arg2;	// IMP=0x000000000004f140
- (void)setTitle:(id)arg1 abbreviated:(id)arg2;	// IMP=0x000000000004ec50
- (void)addParameterWithId:(unsigned int)arg1 name:(id)arg2 shortName:(id)arg3 symbolName:(id)arg4 value:(float)arg5 min:(float)arg6 max:(float)arg7 logBase:(float)arg8 formatter:(id)arg9 unit:(id)arg10 additionalPad:(double)arg11;	// IMP=0x000000000004e9a0
- (void)addParameterWithId:(unsigned int)arg1 name:(id)arg2 shortName:(id)arg3 value:(float)arg4 min:(float)arg5 max:(float)arg6 logBase:(float)arg7 formatter:(id)arg8 unit:(id)arg9 additionalPad:(double)arg10;	// IMP=0x000000000004e630
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x000000000004e4d0
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x000000000004e410
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;	// IMP=0x000000000004e350
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x000000000004e230
- (void)textFieldEditingDidChange:(id)arg1;	// IMP=0x000000000004e150
- (void)tintColorDidChange;	// IMP=0x000000000004df10
- (void)removeFromSuperview;	// IMP=0x000000000004d6e0
- (void)didMoveToSuperview;	// IMP=0x000000000004d670
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004d630
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000004d600

@end

