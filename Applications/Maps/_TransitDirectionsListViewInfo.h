//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, TransitDirectionsStepView;

@interface _TransitDirectionsListViewInfo : NSObject
{
    TransitDirectionsStepView *_stepView;	// 8 = 0x8
    NSIndexPath *_indexPath;	// 16 = 0x10
}

+ (id)infoWithStepView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00400000003f5555
- (void).cxx_destruct;	// IMP=0x00200000003f583a
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) TransitDirectionsStepView *stepView; // @synthesize stepView=_stepView;
- (id)description;	// IMP=0x00100000003f56e8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000003f5616
- (unsigned long long)hash;	// IMP=0x00100000003f55d2

@end
