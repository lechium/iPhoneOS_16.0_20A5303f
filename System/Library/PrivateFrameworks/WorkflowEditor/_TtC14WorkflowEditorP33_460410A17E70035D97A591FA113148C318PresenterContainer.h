//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC14WorkflowEditorP33_460410A17E70035D97A591FA113148C318PresenterContainer : NSObject
{
    MISSING_TYPE *presenter;	// 8 = 0x8
    MISSING_TYPE *state;	// 16 = 0x10
    MISSING_TYPE *onShowActionOutputPicker;	// 40 = 0x28
    MISSING_TYPE *onRevealAction;	// 56 = 0x38
    MISSING_TYPE *onFinish;	// 72 = 0x48
    MISSING_TYPE *parameterEditingHint;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000018c1d0
- (id)init;	// IMP=0x000000000018c170
- (void)showParameterEditingHint:(id)arg1;	// IMP=0x000000000018c110
- (void)revealAction:(id)arg1 preScrollHandler:(CDUnknownBlockType)arg2 goBackHandler:(CDUnknownBlockType)arg3 scrolledAwayHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000018be30
- (void)showActionOutputPickerAllowingShortcutInput:(_Bool)arg1 variableProvider:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000018bd50
- (void)moduleSummaryPresenterDidFinish:(id)arg1;	// IMP=0x000000000018bcc0
- (void)moduleSummaryPresenter:(id)arg1 didCommitParameterState:(id)arg2;	// IMP=0x000000000018bbc0

@end

