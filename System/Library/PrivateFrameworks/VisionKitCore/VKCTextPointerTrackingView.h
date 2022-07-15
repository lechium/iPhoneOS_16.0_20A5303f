//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, VKQuad;

__attribute__((visibility("hidden")))
@interface VKCTextPointerTrackingView : UIView
{
    VKQuad *_quad;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000009e647
@property(readonly, nonatomic) VKQuad *quad; // @synthesize quad=_quad;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;	// IMP=0x000000000009e624
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x000000000009e488
- (id)initWithQuad:(id)arg1;	// IMP=0x000000000009e366

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
