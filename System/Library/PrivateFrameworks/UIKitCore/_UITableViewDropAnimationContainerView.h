//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UITableViewDropAnimationContainerView
{
    long long _activeDropAnimationCount;	// 184 = 0xb8
    double _originalTargetCenterY;	// 192 = 0xc0
    struct CGPoint __tableViewContainerOffsetFromTargetCenter;	// 200 = 0xc8
}

@property(nonatomic) double originalTargetCenterY; // @synthesize originalTargetCenterY=_originalTargetCenterY;
@property(nonatomic) long long activeDropAnimationCount; // @synthesize activeDropAnimationCount=_activeDropAnimationCount;
@property(nonatomic) struct CGPoint _tableViewContainerOffsetFromTargetCenter; // @synthesize _tableViewContainerOffsetFromTargetCenter=__tableViewContainerOffsetFromTargetCenter;
@property(readonly, nonatomic) _Bool hasCompletedAllDropAnimations;
- (void)endDropAnimation;	// IMP=0x00000000010c99b3
- (void)beginDropAnimation;	// IMP=0x00000000010c978f
- (void)setCenter:(struct CGPoint)arg1;	// IMP=0x00000000010c974e
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000010c96fc
- (void)updateOffsetFromTargetCenterIfNeeded;	// IMP=0x00000000010c9693
@property(readonly, nonatomic) NSArray *cells;
- (id)init;	// IMP=0x00000000010c9454

@end
