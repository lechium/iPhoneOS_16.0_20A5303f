//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@interface CALayer (WebCoreCALayerExtras)
+ (id)_web_renderLayerWithContextID:(unsigned int)arg1;	// IMP=0x0080000000c0a050
- (_Bool)_web_maskMayIntersectRect:(struct CGRect)arg1;	// IMP=0x0010000000c0a1d0
- (_Bool)_web_maskContainsPoint:(struct CGPoint)arg1;	// IMP=0x0010000000c0a0a0
- (void)_web_setLayerTopLeftPosition:(struct CGPoint)arg1;	// IMP=0x0010000000c09f80
- (void)_web_setLayerBoundsOrigin:(struct CGPoint)arg1;	// IMP=0x0010000000c09f00
- (void)web_disableAllActions;	// IMP=0x0010000000c09cf0
@end
