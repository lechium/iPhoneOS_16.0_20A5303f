//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class WFEditorViewController;

@protocol WFEditorViewControllerDelegate <NSObject>
- (void)actionsDidChangeInEditorViewController:(WFEditorViewController *)arg1;
- (void)editorViewController:(WFEditorViewController *)arg1 didChangeVariablePickingState:(_Bool)arg2;
- (void)editorViewController:(WFEditorViewController *)arg1 didChangeRunningState:(_Bool)arg2;
@end

