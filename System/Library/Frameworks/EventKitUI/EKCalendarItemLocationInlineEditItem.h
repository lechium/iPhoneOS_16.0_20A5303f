//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "EKEventEditItem.h"

@class EKCalendarItemEditor, EKLocationEditItemViewController, EKUILocationEditItemModel, NSString;

__attribute__((visibility("hidden")))
@interface EKCalendarItemLocationInlineEditItem : EKEventEditItem
{
    EKUILocationEditItemModel *_viewModel;	// 32 = 0x20
    EKCalendarItemEditor *_editor;	// 40 = 0x28
    EKLocationEditItemViewController *_currentLocationEditController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001bcf9a
- (void)_scribbleInteraction:(id)arg1 focusElement:(id)arg2 initialFocusSelectionReferencePoint:(struct CGPoint)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001bcced
- (struct CGRect)_scribbleInteraction:(id)arg1 frameForElement:(id)arg2;	// IMP=0x00000000001bcc92
- (void)_scribbleInteraction:(id)arg1 requestElementsInRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001bcc73
- (void)_scribbleInteraction:(id)arg1 didFinishWritingInElement:(id)arg2;	// IMP=0x00000000001bc961
- (void)_scribbleInteraction:(id)arg1 willBeginWritingInElement:(id)arg2;	// IMP=0x00000000001bc7eb
- (_Bool)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2;	// IMP=0x00000000001bc7e3
- (id)searchStringForEventAutocomplete;	// IMP=0x00000000001bc767
- (_Bool)textFieldShouldClear:(id)arg1;	// IMP=0x00000000001bc752
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000000001bc6dc
- (void)textFieldDidChange:(id)arg1;	// IMP=0x00000000001bc6ca
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x00000000001bc61f
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x00000000001bc575
- (void)eventDetailPredictedLocationCellAcceptedPrediction:(id)arg1 disambiguatedLocation:(id)arg2;	// IMP=0x00000000001bc058
- (void)eventDetailPredictedLocationCellRejectedPrediction:(id)arg1;	// IMP=0x00000000001bbf14
- (void)editItemPendingVideoConferenceCompleted:(id)arg1;	// IMP=0x00000000001bb8f1
- (_Bool)editItemViewControllerSave:(id)arg1;	// IMP=0x00000000001bb31a
- (_Bool)isSubitemAtIndexSaveable:(unsigned long long)arg1;	// IMP=0x00000000001bb182
- (_Bool)forceRefreshURLItemOnSave;	// IMP=0x00000000001bb17a
- (_Bool)forceRefreshStartAndEndDatesOnSave;	// IMP=0x00000000001bb172
- (_Bool)forceTableReloadOnSave;	// IMP=0x00000000001bb16a
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;	// IMP=0x00000000001bb162
- (void)_clearLocationAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001bb004
- (void)_clearButtonTapped:(id)arg1;	// IMP=0x00000000001bafd0
- (unsigned long long)_supportedSearchTypesForSubitemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001baeb5
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;	// IMP=0x00000000001baa6b
- (_Bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;	// IMP=0x00000000001baa63
- (_Bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;	// IMP=0x00000000001ba996
- (void)_setEditor:(id)arg1 andUpdateScribbleInteractionOnCell:(id)arg2 addScribbleInteraction:(_Bool)arg3;	// IMP=0x00000000001ba61f
- (void)_updateVirtualConferenceCell:(id)arg1 index:(unsigned long long)arg2 virtualConference:(id)arg3;	// IMP=0x00000000001ba05e
- (void)_updateClearButtonAndMakeVisible:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000000001b9fe1
- (void)_updateMapLocationCell:(id)arg1 index:(unsigned long long)arg2 location:(id)arg3;	// IMP=0x00000000001b9c78
- (id)cellForSubitemAtIndex:(unsigned long long)arg1 inEditor:(id)arg2;	// IMP=0x00000000001b92cb
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001b92b7
- (_Bool)isSaveable;	// IMP=0x00000000001b9253
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2;	// IMP=0x00000000001b8f66
- (unsigned long long)numberOfSubitems;	// IMP=0x00000000001b8ef7
- (void)reset;	// IMP=0x00000000001b8eda
- (_Bool)isInline;	// IMP=0x00000000001b8ed2
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;	// IMP=0x00000000001b8e2a
- (void)refreshFromCalendarItemAndStore;	// IMP=0x00000000001b8e0a
- (void)dealloc;	// IMP=0x00000000001b8dc1
- (id)init;	// IMP=0x00000000001b8d64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

