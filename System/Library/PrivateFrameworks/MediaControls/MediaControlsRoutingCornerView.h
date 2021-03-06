//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ControlCenterUIKit/CCUICAPackageView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MediaControlsRoutingCornerView : CCUICAPackageView
{
    _Bool _routesAvailable;	// 8 = 0x8
    _Bool _routing;	// 9 = 0x9
    long long _deviceType;	// 16 = 0x10
}

@property(nonatomic, getter=isRouting) _Bool routing; // @synthesize routing=_routing;
@property(nonatomic, getter=routesAreAvailable) _Bool routesAvailable; // @synthesize routesAvailable=_routesAvailable;
@property(nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;	// IMP=0x000000000007bff2
- (id)cursorInteraction:(id)arg1 regionForLocation:(struct CGPoint)arg2 defaultRegion:(id)arg3;	// IMP=0x000000000007bfdc
- (void)_updateGlyph;	// IMP=0x000000000007bf78
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000007bcc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

