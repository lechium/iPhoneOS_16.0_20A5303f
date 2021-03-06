//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface UIView (FRAdditions)
+ (id)fr_adjacentSiblingViewsFromViews:(id)arg1;	// IMP=0x00200000000f933c
+ (void)fr_animateWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3 options:(unsigned long long)arg4 animations:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000f88b7
@property(readonly, nonatomic) _Bool visible;
- (void)fr_recolorLabelSubviewsWithColor:(id)arg1;	// IMP=0x00100000000f98c9
- (void)fr_setBlurred:(_Bool)arg1 radius:(double)arg2 animated:(_Bool)arg3 duration:(double)arg4;	// IMP=0x00100000000f899e
- (struct CGRect)fr_adjustedWidthAndXOriginFromFrame:(struct CGRect)arg1;	// IMP=0x00100000000f887b
- (id)fr_subviewsOfType:(Class)arg1;	// IMP=0x00100000000f86ca
- (id)fr_selfOrFirstAncestorOfType:(Class)arg1;	// IMP=0x00100000000f863a
- (id)fr_firstAncestorOfType:(Class)arg1;	// IMP=0x00100000000f859f
- (_Bool)fr_hasAncestorOfType:(Class)arg1;	// IMP=0x00100000000f856c
- (void)fr_accessibilityWorkaroundFor20458918ByClearingParentTableCellsChildCache;	// IMP=0x00100000000f84ff
- (void)fr_setHeight:(double)arg1;	// IMP=0x00100000000f8499
@property(nonatomic) double fr_height;
@property(nonatomic) double fr_width;
- (void)fr_setMaxY:(double)arg1;	// IMP=0x00100000000f8340
- (void)fr_setMinY:(double)arg1;	// IMP=0x00100000000f82da
- (void)fr_setMaxX:(double)arg1;	// IMP=0x00100000000f8270
- (void)fr_setMinX:(double)arg1;	// IMP=0x00100000000f820b
- (void)roundOrigin;	// IMP=0x00100000000f818e
@end

