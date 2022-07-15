//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LookAroundButtonContainerViewController, NSArray, NSString;
@protocol ChromeOverlayHosting, LookAroundChromeOverlayDelegate;

@interface LookAroundChromeOverlay : NSObject
{
    LookAroundButtonContainerViewController *_lookAroundController;	// 8 = 0x8
    NSArray *_constraints;	// 16 = 0x10
    _Bool _hasLeadingEdgeLayout;	// 24 = 0x18
    _Bool _overlayHidden;	// 25 = 0x19
    double _overlayAlpha;	// 32 = 0x20
    long long _animationCount;	// 40 = 0x28
    id <ChromeOverlayHosting> _host;	// 48 = 0x30
    id <LookAroundChromeOverlayDelegate> _delegate;	// 56 = 0x38
    unsigned long long _containerStyle;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000c9006
@property(nonatomic) unsigned long long containerStyle; // @synthesize containerStyle=_containerStyle;
@property(nonatomic) __weak id <LookAroundChromeOverlayDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <ChromeOverlayHosting> host; // @synthesize host=_host;
- (void)enterLookAroundPIP:(id)arg1;	// IMP=0x00100000000c8f65
- (void)enterLookAroundForMapItem:(id)arg1 lookAroundView:(id)arg2;	// IMP=0x00100000000c8ec5
- (void)showLookAroundPreviewForMapItem:(id)arg1 willChangeHidden:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x00100000000c8eaf
@property(nonatomic) double alpha;
- (void)_updateAlpha;	// IMP=0x00100000000c8e21
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000c8ad7
@property(nonatomic, getter=isHidden) _Bool hidden;
- (id)view;	// IMP=0x00100000000c8aa4
- (void)_updateLayout;	// IMP=0x00100000000c89e1
- (void)_updateConstraintsIfNeeded;	// IMP=0x00100000000c8705
- (void)_invalidateConstraints;	// IMP=0x00100000000c86c0
- (void)_installInContentView:(id)arg1;	// IMP=0x00100000000c85c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
