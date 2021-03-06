//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, NavManeuverSignView, Route, SteppingSignSizeAttributesCache;
@protocol CellVendor;

@interface DrivingWalkingSteppingSignGenerator : NSObject
{
    SteppingSignSizeAttributesCache *_sizeCache;	// 8 = 0x8
    Route *_route;	// 16 = 0x10
    NSArray *_stepsWithCorrespondingSigns;	// 24 = 0x18
    id <CellVendor> _cellVendor;	// 32 = 0x20
    unsigned long long _signLayoutType;	// 40 = 0x28
    long long _options;	// 48 = 0x30
    NSMutableArray *_signs;	// 56 = 0x38
    NavManeuverSignView *_steppingSizingView;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000b128b4
@property(retain, nonatomic) NavManeuverSignView *steppingSizingView; // @synthesize steppingSizingView=_steppingSizingView;
@property(retain, nonatomic) NSMutableArray *signs; // @synthesize signs=_signs;
@property(readonly, nonatomic) long long options; // @synthesize options=_options;
@property(nonatomic) unsigned long long signLayoutType; // @synthesize signLayoutType=_signLayoutType;
@property(nonatomic) __weak id <CellVendor> cellVendor; // @synthesize cellVendor=_cellVendor;
@property(readonly, nonatomic) NSArray *stepsWithCorrespondingSigns; // @synthesize stepsWithCorrespondingSigns=_stepsWithCorrespondingSigns;
@property(readonly, nonatomic) Route *route; // @synthesize route=_route;
@property(readonly) long long numberOfSigns;
- (void)rectForSignAtIndex:(long long)arg1 currentStepIndex:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000b12793
- (double)distanceFromPageControlBaselineToTopOfAuxView;	// IMP=0x0010000000b1276a
- (id)_signSizeAttributesForSign:(id)arg1 fittingSize:(struct CGSize)arg2;	// IMP=0x0010000000b12558
- (double)distanceFromPageControlBaselineToBottomOfSignAtIndex:(long long)arg1 fittingSize:(struct CGSize)arg2;	// IMP=0x0010000000b12433
- (struct CGSize)sizeForSignAtIndex:(long long)arg1 fittingSize:(struct CGSize)arg2;	// IMP=0x0010000000b122f1
- (long long)signIndexForStepIndex:(long long)arg1;	// IMP=0x0010000000b1221b
- (long long)signIndexForStep:(id)arg1;	// IMP=0x0010000000b121e7
- (id)stepAtSignIndex:(long long)arg1;	// IMP=0x0010000000b12158
- (id)auxViewAtIndex:(long long)arg1;	// IMP=0x0010000000b12150
- (id)signAtIndex:(long long)arg1;	// IMP=0x0010000000b12050
- (void)invalidateSizeCaches;	// IMP=0x0010000000b1203a
- (id)currentViewStateForSignAtIndex:(long long)arg1;	// IMP=0x0010000000b11ffe
- (void)updateInstruction:(id)arg1 forSignAtIndex:(long long)arg2;	// IMP=0x0010000000b11ea5
- (void)updateDistance:(double)arg1 forStepAtIndex:(long long)arg2;	// IMP=0x0010000000b11d8b
- (void)updateSignForStepAtIndex:(long long)arg1 maneuverInfo:(id)arg2;	// IMP=0x0010000000b11ccc
- (void)resetDistanceForSignAtIndex:(long long)arg1;	// IMP=0x0010000000b11bcf
- (id)_distanceTextForStep:(id)arg1 distance:(double)arg2;	// IMP=0x0010000000b11acb
- (id)_distanceTextForStep:(id)arg1;	// IMP=0x0010000000b11a66
- (void)configureNavSignView:(id)arg1 withSign:(id)arg2;	// IMP=0x0010000000b11945
- (void)_configureSign:(id)arg1 forSteppingWithStep:(id)arg2;	// IMP=0x0010000000b11324
- (void)_configureSign:(id)arg1 withStep:(id)arg2;	// IMP=0x0010000000b10cee
- (void)_configureWithRoute:(id)arg1;	// IMP=0x0010000000b108d8
- (_Bool)_showDistanceInMinorText;	// IMP=0x0010000000b108bf
- (_Bool)_forWalkingNavigation;	// IMP=0x0010000000b108a7
- (id)initWithRoute:(id)arg1 options:(long long)arg2;	// IMP=0x0010000000b10834
- (id)initWithRoute:(id)arg1;	// IMP=0x0010000000b10820

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

