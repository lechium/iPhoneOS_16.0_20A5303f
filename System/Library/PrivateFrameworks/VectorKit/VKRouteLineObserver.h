//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VKRouteLine;

__attribute__((visibility("hidden")))
@interface VKRouteLineObserver : NSObject
{
    void *_transitSupport;	// 8 = 0x8
    VKRouteLine *_routeLine;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000004eb8f6
- (void)routeLineDidUpdateSections:(id)arg1;	// IMP=0x00000000004eb84c
- (void)dealloc;	// IMP=0x00000000004eb7b2
- (id)initWithTransitSupport:(void *)arg1 andRouteLine:(id)arg2;	// IMP=0x00000000004eb6dc

@end
