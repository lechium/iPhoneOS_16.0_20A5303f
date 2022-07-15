//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RAPCommentQuestion, RAPPlaceCorrectableFlag, RAPPlaceCorrectableString, UIImage, VKLabelMarker;
@protocol RAPMapStateProtocol;

@interface RAPLabelCorrectionsQuestion
{
    RAPPlaceCorrectableString *_correctableName;	// 8 = 0x8
    VKLabelMarker *_labelMarker;	// 16 = 0x10
    RAPCommentQuestion *_commentQuestion;	// 24 = 0x18
    id <RAPMapStateProtocol> _labelMarkerPickingMapContext;	// 32 = 0x20
    NSString *_localizedServerControlledDescription;	// 40 = 0x28
    RAPPlaceCorrectableFlag *_removeLabelCorrectableFlag;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000001baf0a
@property(copy, nonatomic) NSString *localizedServerControlledDescription; // @synthesize localizedServerControlledDescription=_localizedServerControlledDescription;
@property(retain, nonatomic) id <RAPMapStateProtocol> labelMarkerPickingMapContext; // @synthesize labelMarkerPickingMapContext=_labelMarkerPickingMapContext;
@property(retain, nonatomic) VKLabelMarker *labelMarker; // @synthesize labelMarker=_labelMarker;
@property(readonly, nonatomic) int userAction;
@property(readonly, nonatomic) unsigned long long coordinatePickingMapType;
@property(readonly, nonatomic) RAPCommentQuestion *commentQuestion; // @synthesize commentQuestion=_commentQuestion;
- (void)_fillSubmissionParameters:(id)arg1;	// IMP=0x00100000001ba961
- (id)_alternateMapViewContext;	// IMP=0x00100000001ba94f
- (_Bool)isComplete;	// IMP=0x00100000001ba699
@property(readonly, nonatomic) RAPPlaceCorrectableFlag *removeLabelCorrectableFlag; // @synthesize removeLabelCorrectableFlag=_removeLabelCorrectableFlag;
@property(readonly, nonatomic) RAPPlaceCorrectableString *correctableName; // @synthesize correctableName=_correctableName;
- (void)setCorrectedName:(id)arg1;	// IMP=0x00100000001ba3b5
@property(readonly, nonatomic) NSString *originalName;
@property(readonly, nonatomic) _Bool isNameCorrectionRequired;
@property(readonly, nonatomic) CDStruct_02837cd9 initialLabelMarkerPickingMapRect;
@property(readonly, nonatomic) long long questionCategory;
@property(readonly, nonatomic) int analyticTarget;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) NSString *localizedLabelMarkerPickingPrompt;

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *eventValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
