//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNActionMenuHelper, CNActionView, CNContact, CNContactActionsController, CNUIUserActionListDataSource, NSArray, NSDictionary, NSString, UIContextMenuInteraction, UILabel;
@protocol CNCustomPresentation, CNPropertyCellDelegate, CNSchedulerProvider;

__attribute__((visibility("hidden")))
@interface CNFaceTimeCell
{
    _Bool _isFaceTimeAudioAvailable;	// 8 = 0x8
    CNUIUserActionListDataSource *_actionsDataSource;	// 16 = 0x10
    id <CNPropertyCellDelegate> _delegate;	// 24 = 0x18
    CNContact *_contact;	// 32 = 0x20
    UILabel *_faceTimeLabel;	// 40 = 0x28
    CNActionView *_actionView1;	// 48 = 0x30
    CNActionView *_actionView2;	// 56 = 0x38
    NSArray *_supportedActionTypes;	// 64 = 0x40
    id <CNCustomPresentation> _actionsControllerPresentation;	// 72 = 0x48
    CNContactActionsController *_actionsController;	// 80 = 0x50
    CNActionMenuHelper *_actionMenuHelper;	// 88 = 0x58
    UIContextMenuInteraction *_contextMenuInteraction;	// 96 = 0x60
    NSArray *_tokens;	// 104 = 0x68
    id <CNSchedulerProvider> _schedulerProvider;	// 112 = 0x70
    double _throttleDelay;	// 120 = 0x78
    NSDictionary *_defaultActionPerType;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000000b5917
@property(copy, nonatomic) NSDictionary *defaultActionPerType; // @synthesize defaultActionPerType=_defaultActionPerType;
@property(readonly, nonatomic) double throttleDelay; // @synthesize throttleDelay=_throttleDelay;
@property(retain, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(copy, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
@property(retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction; // @synthesize contextMenuInteraction=_contextMenuInteraction;
@property(retain, nonatomic) CNActionMenuHelper *actionMenuHelper; // @synthesize actionMenuHelper=_actionMenuHelper;
@property(retain, nonatomic) CNContactActionsController *actionsController; // @synthesize actionsController=_actionsController;
@property(retain, nonatomic) id <CNCustomPresentation> actionsControllerPresentation; // @synthesize actionsControllerPresentation=_actionsControllerPresentation;
@property(retain, nonatomic) NSArray *supportedActionTypes; // @synthesize supportedActionTypes=_supportedActionTypes;
@property(readonly, nonatomic) CNActionView *actionView2; // @synthesize actionView2=_actionView2;
@property(readonly, nonatomic) CNActionView *actionView1; // @synthesize actionView1=_actionView1;
@property(nonatomic) _Bool isFaceTimeAudioAvailable; // @synthesize isFaceTimeAudioAvailable=_isFaceTimeAudioAvailable;
@property(readonly, nonatomic) UILabel *faceTimeLabel; // @synthesize faceTimeLabel=_faceTimeLabel;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <CNPropertyCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CNUIUserActionListDataSource *actionsDataSource; // @synthesize actionsDataSource=_actionsDataSource;
- (_Bool)actionViewShouldPresentDisambiguationUI:(id)arg1;	// IMP=0x00000000000b5739
- (void)contactActionsController:(id)arg1 didSelectAction:(id)arg2;	// IMP=0x00000000000b558f
- (void)didSelectActionType:(id)arg1 withSourceView:(id)arg2 longPress:(_Bool)arg3;	// IMP=0x00000000000b53e0
- (void)contactActionsController:(id)arg1 didUpdateWithMenu:(id)arg2;	// IMP=0x00000000000b52b5
- (void)performAction:(id)arg1;	// IMP=0x00000000000b514d
- (void)didPressActionView:(id)arg1 longPress:(_Bool)arg2;	// IMP=0x00000000000b4ec7
- (void)updateHorizontalTouchAreas;	// IMP=0x00000000000b4daa
- (void)tintColorDidChange;	// IMP=0x00000000000b4da4
- (id)variableConstraints;	// IMP=0x00000000000b4a0f
- (id)constantConstraints;	// IMP=0x00000000000b4884
- (id)rightMostView;	// IMP=0x00000000000b4872
- (double)minCellHeight;	// IMP=0x00000000000b4864
- (void)performDefaultAction;	// IMP=0x00000000000b47ed
- (id)labelView;	// IMP=0x00000000000b4713
- (id)actionViewForType:(id)arg1;	// IMP=0x00000000000b461b
- (void)processModels:(id)arg1;	// IMP=0x00000000000b4532
- (id)allModelsObservable;	// IMP=0x00000000000b43c4
- (void)discoverAvailableActionTypes;	// IMP=0x00000000000b3fe9
- (void)loadCachedActions;	// IMP=0x00000000000b3ef2
- (void)reset;	// IMP=0x00000000000b3ed9
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000b3814

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

