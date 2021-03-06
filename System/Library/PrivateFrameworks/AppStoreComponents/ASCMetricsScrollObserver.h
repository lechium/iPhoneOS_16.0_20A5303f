//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableSet, NSString, UIScrollView;

__attribute__((visibility("hidden")))
@interface ASCMetricsScrollObserver : NSObject
{
    UIScrollView *_scrollView;	// 8 = 0x8
    NSHashTable *_delegates;	// 16 = 0x10
    NSMutableSet *_appearedModelIDs;	// 24 = 0x18
    NSMutableSet *_renderedModelIDs;	// 32 = 0x20
}

+ (id)observerForScrollView:(id)arg1;	// IMP=0x001000000003c38e
- (void).cxx_destruct;	// IMP=0x000000000003cc7f
@property(readonly, nonatomic) NSMutableSet *renderedModelIDs; // @synthesize renderedModelIDs=_renderedModelIDs;
@property(readonly, nonatomic) NSMutableSet *appearedModelIDs; // @synthesize appearedModelIDs=_appearedModelIDs;
@property(readonly, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(readonly, nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)_observeScrollViewDidScroll:(id)arg1;	// IMP=0x000000000003cbff
- (_Bool)hasModelRendered:(id)arg1;	// IMP=0x000000000003cb69
- (void)modelDidRender:(id)arg1;	// IMP=0x000000000003cad9
- (_Bool)hasModelAppeared:(id)arg1;	// IMP=0x000000000003ca43
- (void)modelDidAppear:(id)arg1;	// IMP=0x000000000003c9b3
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000003c83e
- (void)removeDelegate:(id)arg1;	// IMP=0x000000000003c7cc
- (void)addDelegate:(id)arg1;	// IMP=0x000000000003c75a
- (_Bool)isDelegateAdded:(id)arg1;	// IMP=0x000000000003c6e3
- (struct CGPoint)centerOfView:(id)arg1;	// IMP=0x000000000003c5e1
@property(readonly, nonatomic) struct CGRect visibleRect;
- (void)dealloc;	// IMP=0x000000000003c526
- (id)initWithScrollView:(id)arg1;	// IMP=0x000000000003c42e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

