//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISegmentedControl.h>

@class NSArray;

@interface MapViewModeSelector : UISegmentedControl
{
    _Bool _lastLayoutWidthFits;	// 8 = 0x8
    NSArray *_orderedViewModes;	// 16 = 0x10
    double _lastLayoutWidth;	// 24 = 0x18
    NSArray *_desiredViewModes;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000026f3c7
@property(retain, nonatomic) NSArray *desiredViewModes; // @synthesize desiredViewModes=_desiredViewModes;
@property(nonatomic) _Bool lastLayoutWidthFits; // @synthesize lastLayoutWidthFits=_lastLayoutWidthFits;
@property(nonatomic) double lastLayoutWidth; // @synthesize lastLayoutWidth=_lastLayoutWidth;
@property(retain, nonatomic) NSArray *orderedViewModes; // @synthesize orderedViewModes=_orderedViewModes;
- (_Bool)updateSegmentsIfNeededToFitWidth:(double)arg1;	// IMP=0x001000000026f28d
@property(nonatomic) long long selectedViewMode;
- (id)initWithDesiredViewModes:(id)arg1;	// IMP=0x001000000026eb1d
- (id)init;	// IMP=0x001000000026eb04

@end
