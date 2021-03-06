//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, _UIInterfaceActionSeparatorConstraintController;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionVibrantSeparatorView : UIView
{
    double _horizontalLineLeadingInset;	// 184 = 0xb8
    _UIInterfaceActionSeparatorConstraintController *_separatorViewConstraints;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x00000000000528e4
@property(readonly, retain, nonatomic) _UIInterfaceActionSeparatorConstraintController *separatorViewConstraints; // @synthesize separatorViewConstraints=_separatorViewConstraints;
@property(nonatomic) double horizontalLineLeadingInset; // @synthesize horizontalLineLeadingInset=_horizontalLineLeadingInset;
- (void)_updateContentDirectionalInsets;	// IMP=0x000000000005285a
- (void)updateConstraints;	// IMP=0x0000000000052811
- (long long)constantSizedAxis;	// IMP=0x00000000000527f4
- (void)setConstantSizedAxis:(long long)arg1;	// IMP=0x00000000000527bb
@property(nonatomic) double constantAxisDimension;
- (void)_setupEffectView;	// IMP=0x00000000000525fa
- (id)init;	// IMP=0x000000000005255e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

