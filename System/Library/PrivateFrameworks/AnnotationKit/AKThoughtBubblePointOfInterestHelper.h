//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AKThoughtBubblePointOfInterestHelper
{
}

+ (struct CGPoint)_concreteValidatePoint:(struct CGPoint)arg1 ofDraggableArea:(unsigned long long)arg2 forAnnotation:(id)arg3 onPageController:(id)arg4;	// IMP=0x00800000000b142b
+ (struct CGPoint)_constrainPointyPointToOutset:(struct CGPoint)arg1 forAnnotation:(id)arg2 outsetIsMin:(_Bool)arg3;	// IMP=0x00800000000b102a
+ (double)maxOutset;	// IMP=0x00800000000b101c
+ (double)minOutset;	// IMP=0x00800000000b100e
+ (unsigned long long)_concreteDraggableAreaForPointOfInterestWithIndex:(unsigned long long)arg1 ofAnnotation:(id)arg2 onPageController:(id)arg3;	// IMP=0x00800000000b0fd1
+ (void)_concretePointsOfInterest:(id *)arg1 withVisualStyle:(id *)arg2 ofAnnotation:(id)arg3 pageControllerForPixelAlignment:(id)arg4;	// IMP=0x00800000000b0c80

@end

