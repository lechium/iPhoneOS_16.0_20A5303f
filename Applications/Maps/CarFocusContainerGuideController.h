//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, UIView;

@interface CarFocusContainerGuideController : NSObject
{
    UIView *_hostView;	// 8 = 0x8
    unsigned long long _activeEdges;	// 16 = 0x10
    NSDictionary *_focusContainerGuidesByEdge;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000005dd85e
@property(retain, nonatomic) NSDictionary *focusContainerGuidesByEdge; // @synthesize focusContainerGuidesByEdge=_focusContainerGuidesByEdge;
@property(nonatomic) unsigned long long activeEdges; // @synthesize activeEdges=_activeEdges;
- (id)_addGuideForEdge:(unsigned long long)arg1;	// IMP=0x00100000005dcc00
- (id)initWithHostView:(id)arg1;	// IMP=0x00100000005dcb9c

@end

