//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSDictionary, NSProgress, NSString, UILabel, WFDialogAttribution, WFGlyphStatusAccessoryView, WFProgressStatusAccessoryView, WFWorkflowRunningContext;
@protocol BNPresentableContext, WFStatusViewControllerDelegate;

@interface WFStatusViewController : UIViewController
{
    WFProgressStatusAccessoryView *_progressAccessoryView;	// 8 = 0x8
    WFGlyphStatusAccessoryView *_glyphAccessoryView;	// 16 = 0x10
    WFWorkflowRunningContext *;	// 24 = 0x18
    id <WFStatusViewControllerDelegate> _delegate;	// 32 = 0x20
    NSProgress *_progress;	// 40 = 0x28
    WFWorkflowRunningContext *_runningContext;	// 48 = 0x30
    WFDialogAttribution *_attribution;	// 56 = 0x38
    UILabel *_titleLabel;	// 64 = 0x40
}

+ (id)requestIdentifierForContext:(id)arg1;	// IMP=0x0020000000003d2a
- (void).cxx_destruct;	// IMP=0x0020000000003c95
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) WFDialogAttribution *attribution; // @synthesize attribution=_attribution;
@property(readonly, nonatomic) WFWorkflowRunningContext *runningContext; // @synthesize runningContext=_runningContext;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(nonatomic) __weak id <WFStatusViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WFWorkflowRunningContext *associatedRunningContext; // @synthesize associatedRunningContext=_associatedRunningContext;
@property(readonly, nonatomic) WFProgressStatusAccessoryView *progressAccessoryView; // @synthesize progressAccessoryView=_progressAccessoryView;
@property(readonly, nonatomic) WFGlyphStatusAccessoryView *glyphAccessoryView; // @synthesize glyphAccessoryView=_glyphAccessoryView;
@property(readonly, nonatomic) NSDictionary *postOptions;
- (void)setCompletingSuccessfully:(_Bool)arg1;	// IMP=0x00100000000039d6
- (void)setContentSize:(struct CGSize)arg1;	// IMP=0x00100000000039c4
- (id)labelFont;	// IMP=0x0010000000003905
- (id)initWithRunningContext:(id)arg1 attribution:(id)arg2 progress:(id)arg3;	// IMP=0x00100000000035eb
- (id)initWithRunningContext:(id)arg1 attribution:(id)arg2;	// IMP=0x00100000000035d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isDraggingDismissalEnabled) _Bool draggingDismissalEnabled;
@property(readonly, nonatomic, getter=isDraggingInteractionEnabled) _Bool draggingInteractionEnabled;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long presentableBehavior;
@property(nonatomic) __weak id <BNPresentableContext> presentableContext;
@property(readonly, nonatomic) long long presentableType;
@property(readonly, nonatomic) _Bool providesHostedContent;
@property(readonly, copy, nonatomic) NSString *requestIdentifier;
@property(readonly, copy, nonatomic) NSString *requesterIdentifier;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) _Bool touchOutsideDismissalEnabled;
@property(readonly, nonatomic) UIViewController *viewController;

@end

