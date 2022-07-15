//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LabelNavRouteContextObserverProxy : NSObject
{
    struct RouteContextChangeObserver *_observer;	// 8 = 0x8
    struct vector<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, geo::StdAllocator<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, mdm::Allocator>> _observedContexts;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x00000000003832ba
- (void).cxx_destruct;	// IMP=0x000000000038324f
- (void)routeContextStateDidChange:(id)arg1;	// IMP=0x0000000000383207
- (void)stopObserving:(id)arg1;	// IMP=0x000000000038312a
- (void)startObserving:(id)arg1;	// IMP=0x0000000000382f03
- (void)dealloc;	// IMP=0x0000000000382e41
- (id)initWithRouteContextChangeObserver:(struct RouteContextChangeObserver *)arg1;	// IMP=0x0000000000382e04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
