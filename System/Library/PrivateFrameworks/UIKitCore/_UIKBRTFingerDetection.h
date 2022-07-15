//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSMutableDictionary, UIView, _UIKBRTFingerDetectionView, _UIKBRTFingerInfo;

__attribute__((visibility("hidden")))
@interface _UIKBRTFingerDetection
{
    UIView *_feedbackParentView;	// 8 = 0x8
    _UIKBRTFingerDetectionView *_feedbackView;	// 16 = 0x10
    NSMapTable *_fingerFeedbackViewMap;	// 24 = 0x18
    NSMutableDictionary *_touches;	// 32 = 0x20
    _UIKBRTFingerInfo *_fakeLeftIndex;	// 40 = 0x28
    _UIKBRTFingerInfo *_fakeRightIndex;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000c5fa4a
@property(retain, nonatomic) _UIKBRTFingerInfo *fakeRightIndex; // @synthesize fakeRightIndex=_fakeRightIndex;
@property(retain, nonatomic) _UIKBRTFingerInfo *fakeLeftIndex; // @synthesize fakeLeftIndex=_fakeLeftIndex;
@property(retain, nonatomic) NSMutableDictionary *touches; // @synthesize touches=_touches;
@property(retain, nonatomic) NSMapTable *fingerFeedbackViewMap; // @synthesize fingerFeedbackViewMap=_fingerFeedbackViewMap;
@property(retain, nonatomic) _UIKBRTFingerDetectionView *feedbackView; // @synthesize feedbackView=_feedbackView;
@property(nonatomic) UIView *feedbackParentView; // @synthesize feedbackParentView=_feedbackParentView;
- (void)_updateFingerFeedback:(id)arg1;	// IMP=0x0000000000c5f4d5
- (void)_updateFingerFeedback;	// IMP=0x0000000000c5ef78
- (void)_updateTouchInfoForFingerID:(unsigned long long)arg1;	// IMP=0x0000000000c5c4e1
- (void)_updateTouchInfoFromOutsideInWithArray:(id)arg1 indexes:(id)arg2 newIdentityDict:(id)arg3 fakeIndex:(id)arg4;	// IMP=0x0000000000c5b4b8
- (_Bool)_linkTouchesInArray:(id)arg1 withIndexes:(id)arg2 opposingHandIndexes:(id)arg3 unassignedIndexes:(id)arg4 thumb:(id)arg5;	// IMP=0x0000000000c5ad11
- (id)fingerIdsRelatedToTouchWithIdentifier:(id)arg1 sinceTimestamp:(double)arg2 includeThumbs:(_Bool)arg3;	// IMP=0x0000000000c5a9e8
- (struct CGPoint)touchLocationForFingerId:(unsigned long long)arg1;	// IMP=0x0000000000c5a82e
- (id)touchIdentifiersForFingerId:(unsigned long long)arg1;	// IMP=0x0000000000c5a587
- (unsigned long long)fingerIdForTouchWithIdentifier:(id)arg1;	// IMP=0x0000000000c5a52f
- (void)removeTouchWithIdentifier:(id)arg1 touchCancelled:(_Bool)arg2;	// IMP=0x0000000000c5a3a0
- (void)moveTouchWithIdentifier:(id)arg1 toLocation:(struct CGPoint)arg2 withRadius:(double)arg3 atTouchTime:(double)arg4;	// IMP=0x0000000000c5a2e2
- (void)addTouchLocation:(struct CGPoint)arg1 withRadius:(double)arg2 withTouchTime:(double)arg3 withIdentifier:(id)arg4;	// IMP=0x0000000000c5a176
- (void)updateWithFCenter:(struct CGPoint)arg1 jCenter:(struct CGPoint)arg2 keySize:(struct CGSize)arg3 rowOffsets:(id)arg4 homeRowOffsetIndex:(int)arg5;	// IMP=0x0000000000c5a116
- (void)reset;	// IMP=0x0000000000c5a0db
- (void)dealloc;	// IMP=0x0000000000c5a07c
- (id)initWithParentView:(id)arg1;	// IMP=0x0000000000c5a04f
- (id)init;	// IMP=0x0000000000c59ff2

@end
