//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CAShapeLayer.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9SiriSetup10ColorLayer : CAShapeLayer
{
    MISSING_TYPE *layerRedColor;	// 8 = 0x8
    MISSING_TYPE *layerBlueColor;	// 16 = 0x10
    MISSING_TYPE *layerBackgroundColor;	// 24 = 0x18
}

+ (_Bool)needsDisplayForKey:(id)arg1;	// IMP=0x006000000001e410
- (void).cxx_destruct;	// IMP=0x000000000001ee10
- (id)actionForKey:(id)arg1;	// IMP=0x000000000001ed60
- (void)display;	// IMP=0x000000000001ebc0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001e3e0
- (id)initWithLayer:(id)arg1;	// IMP=0x000000000001e2a0
- (id)init;	// IMP=0x000000000001e080

// Remaining properties
@property(nonatomic) double phase; // @dynamic phase;

@end
