//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface VOTImageExplorerObjectClassificationElement
{
    NSSet *_matchingScenes;	// 8 = 0x8
    long long _objectIndex;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000de15
@property(nonatomic) long long objectIndex; // @synthesize objectIndex=_objectIndex;
@property(retain, nonatomic) NSSet *matchingScenes; // @synthesize matchingScenes=_matchingScenes;
- (id)axObjectLabel;	// IMP=0x001000000000ddc6
- (id)accessibilityIdentifier;	// IMP=0x001000000000ddb9
- (id)accessibilityValue;	// IMP=0x001000000000dd30
- (id)accessibilityLabel;	// IMP=0x001000000000dd1e
- (id)initWithImageView:(id)arg1 forFeature:(id)arg2 withMatchingScenes:(id)arg3 hasFlippedYAxis:(_Bool)arg4 objectIndex:(long long)arg5;	// IMP=0x001000000000dc95

@end

