//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@protocol PKScribbleInteractionDelegate;

@interface UIView (PKAdditions)
- (_Bool)PK_isBelowViewInDepth:(id)arg1;	// IMP=0x00300000001f5b6b
- (id)pk_autoFadeOutShapePointLayer;	// IMP=0x00300000001f586c
- (id)pk_autoFadeOutShapeRectLayer;	// IMP=0x00300000001f57b8
- (struct CGRect)PK_convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;	// IMP=0x00300000001f56d0
- (struct CGRect)PK_convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;	// IMP=0x00300000001f55e8
- (struct CGPoint)PK_convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;	// IMP=0x00300000001f5583
- (struct CGPoint)PK_convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;	// IMP=0x00300000001f551e
- (struct CGRect)PK_convertRect:(struct CGRect)arg1 fromView:(id)arg2;	// IMP=0x00300000001f54cb
- (struct CGRect)PK_convertRect:(struct CGRect)arg1 toView:(id)arg2;	// IMP=0x00300000001f5146
- (struct CGPoint)PK_convertPoint:(struct CGPoint)arg1 toView:(id)arg2;	// IMP=0x00300000001f50e1
- (struct CGPoint)PK_convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;	// IMP=0x00300000001f50c6
- (id)PK_enclosingScrollableScrollView;	// IMP=0x00300000001f503f
@property(retain, nonatomic) id <PKScribbleInteractionDelegate> fakeScribbleInteractionDelegate;
@end
