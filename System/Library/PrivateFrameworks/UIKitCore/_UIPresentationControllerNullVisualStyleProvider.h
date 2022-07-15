//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _UISheetPresentationMetrics;

__attribute__((visibility("hidden")))
@interface _UIPresentationControllerNullVisualStyleProvider : NSObject
{
}

@property(readonly, nonatomic) _UISheetPresentationMetrics *defaultSheetMetrics;
- (long long)defaultConcreteTransitionStyleForViewController:(id)arg1;	// IMP=0x0000000000c90554
- (long long)defaultConcretePresentationStyleForViewController:(id)arg1;	// IMP=0x0000000000c90549
- (id)styleForSearchPresentationController:(id)arg1;	// IMP=0x0000000000c90541
- (id)styleForPopoverPresentationController:(id)arg1;	// IMP=0x0000000000c90539
- (id)styleForSheetPresentationController:(id)arg1;	// IMP=0x0000000000c90531
- (id)styleForAlertPresentationController:(id)arg1;	// IMP=0x0000000000c90529
- (id)styleForRootPresentationController:(id)arg1;	// IMP=0x0000000000c904dc
- (id)defaultStyleForPresentationController:(id)arg1;	// IMP=0x0000000000c9048f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
