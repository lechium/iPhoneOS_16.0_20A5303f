//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MKPolyline.h"

@class MKRoutePolyline, NSString;

__attribute__((visibility("hidden")))
@interface MKRouteStepPolyline : MKPolyline
{
    MKRoutePolyline *_fullRoute;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000007216d
@property(readonly, nonatomic, getter=_requiresModernMap) _Bool requiresModernMap;
- (struct CLLocationCoordinate2D)coordinate;	// IMP=0x00000000000720d0
- (void)dealloc;	// IMP=0x000000000007208e
- (id)_initWithRoute:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000071fa8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
