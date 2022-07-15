//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/SXAXAssistiveTechStatusChangeListener-Protocol.h>
#import <Silex/SXLayoutIntegrator-Protocol.h>

@class NSArray, NSSet, NSString, SXComponentView, SXLayoutBlueprint;
@protocol SXComponentControllerObserver;

@protocol SXComponentController <SXAXAssistiveTechStatusChangeListener, SXLayoutIntegrator>
@property(readonly, nonatomic) _Bool isPresented;
@property(readonly, nonatomic) NSArray *flattenedComponentViews;
@property(readonly, nonatomic) SXLayoutBlueprint *presentedBlueprint;
- (SXComponentView *)componentViewForIdentifier:(NSString *)arg1;
- (NSArray *)componentViewsForRole:(int)arg1;
- (SXComponentView *)componentViewForPoint:(struct CGPoint)arg1;
- (NSSet *)componentsInRect:(struct CGRect)arg1;
- (void)removeObserver:(id <SXComponentControllerObserver>)arg1;
- (void)addObserver:(id <SXComponentControllerObserver>)arg1;
@end
