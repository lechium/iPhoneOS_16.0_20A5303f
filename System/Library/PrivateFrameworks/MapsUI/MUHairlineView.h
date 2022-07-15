//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKVibrantHairlineView.h>

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface MUHairlineView : MKVibrantHairlineView
{
    double _intrinsicThickness;	// 8 = 0x8
    _Bool _vertical;	// 16 = 0x10
    NSLayoutConstraint *_leadingMarginConstraint;	// 24 = 0x18
    NSLayoutConstraint *_trailingMarginConstraint;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000693e2
@property(retain, nonatomic) NSLayoutConstraint *trailingMarginConstraint; // @synthesize trailingMarginConstraint=_trailingMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingMarginConstraint; // @synthesize leadingMarginConstraint=_leadingMarginConstraint;
@property(nonatomic) _Bool vertical; // @synthesize vertical=_vertical;
@property(nonatomic) double trailingMargin;
@property(nonatomic) double leadingMargin;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000069065
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000006903e
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000069009
- (void)didMoveToWindow;	// IMP=0x0000000000068e8f
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000000068dba
- (void)customInit;	// IMP=0x0000000000068c11
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000068bc5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000068b68
- (id)init;	// IMP=0x0000000000068b05

@end
