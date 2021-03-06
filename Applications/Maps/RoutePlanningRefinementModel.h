//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol RoutePlanningRefinementDelegate;

@interface RoutePlanningRefinementModel : NSObject
{
    id _value;	// 8 = 0x8
    int _lastUpdateUsageAction;	// 16 = 0x10
    id <RoutePlanningRefinementDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000784ecb
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) __weak id <RoutePlanningRefinementDelegate> delegate; // @synthesize delegate=_delegate;
- (int)lastUpdateUsageAction;	// IMP=0x0010000000784e91
- (void)_assertValidValue;	// IMP=0x0010000000784e8b
- (void)_resetForMenuPresentation;	// IMP=0x0010000000784e7e
- (int)selectionUsageAction;	// IMP=0x0010000000784e76
- (int)pressUsageAction;	// IMP=0x0010000000784e6e
- (CDUnknownBlockType)menuProvider;	// IMP=0x0010000000784e66
- (id)menu;	// IMP=0x0010000000784e5e
- (_Bool)shouldShowChevron;	// IMP=0x0010000000784e56
- (_Bool)shouldShowHighlighted;	// IMP=0x0010000000784e4e
- (id)titleText;	// IMP=0x0010000000784e46
- (id)iconImage;	// IMP=0x0010000000784e3e
- (id)initWithDelegate:(id)arg1 value:(id)arg2;	// IMP=0x0010000000784d41

@end

