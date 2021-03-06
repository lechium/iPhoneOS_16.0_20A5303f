//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXMVisionFeature;

@interface VOTImageExplorerFaceElement
{
    AXMVisionFeature *_peopleFeature;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000f70e
@property(readonly, nonatomic) AXMVisionFeature *peopleFeature; // @synthesize peopleFeature=_peopleFeature;
- (struct CGRect)accessibilityFrame;	// IMP=0x001000000000f44e
- (id)accessibilityIdentifier;	// IMP=0x001000000000f441
- (id)accessibilityValue;	// IMP=0x001000000000f3b8
- (id)accessibilityLabel;	// IMP=0x001000000000f26f
- (id)initWithImageView:(id)arg1 forFaceFeature:(id)arg2 withOverlappingPeopleFeature:(id)arg3 hasFlippedYAxis:(_Bool)arg4;	// IMP=0x001000000000f1f5

@end

