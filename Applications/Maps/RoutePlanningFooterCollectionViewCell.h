//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RoutePlanningFooterView, RouteStepItem;

@interface RoutePlanningFooterCollectionViewCell
{
    RouteStepItem *_item;	// 8 = 0x8
}

+ (double)heightForItem:(id)arg1 width:(double)arg2 maximumHeight:(double)arg3;	// IMP=0x00200000006805d2
+ (Class)_contentViewClass;	// IMP=0x001000000068044c
- (void).cxx_destruct;	// IMP=0x0020000000680703
@property(retain, nonatomic) RouteStepItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) RoutePlanningFooterView *footerView;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000068045d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

