//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, NSString, RouteStepItem, RouteStepListView;

@interface RouteStepListCollectionCell : UICollectionViewCell
{
    RouteStepListView *_stepView;	// 8 = 0x8
    NSLayoutConstraint *_heightConstraint;	// 16 = 0x10
}

+ (double)heightForItem:(id)arg1 width:(double)arg2 maximumHeight:(double)arg3;	// IMP=0x00200000009fa7ac
+ (Class)stepViewClass;	// IMP=0x00100000009fa537
- (void).cxx_destruct;	// IMP=0x00200000009fa85a
@property(retain, nonatomic) RouteStepItem *item;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000009fa548

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
