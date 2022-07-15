//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXMVisionFeature, NSString;

@interface VOTImageExplorerTextElement
{
    _Bool _isHeader;	// 8 = 0x8
    AXMVisionFeature *_parentTextFeature;	// 16 = 0x10
    unsigned long long _rowIndex;	// 24 = 0x18
    unsigned long long _columnIndex;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000edd7
@property(nonatomic) _Bool isHeader; // @synthesize isHeader=_isHeader;
@property(nonatomic) unsigned long long columnIndex; // @synthesize columnIndex=_columnIndex;
@property(nonatomic) unsigned long long rowIndex; // @synthesize rowIndex=_rowIndex;
@property(readonly, nonatomic) __weak AXMVisionFeature *parentTextFeature; // @synthesize parentTextFeature=_parentTextFeature;
- (id)parentAccessibilityContainer;	// IMP=0x001000000000ed12
- (struct CGRect)accessibilityFrame;	// IMP=0x001000000000e91a
- (struct CGRect)_accessibilityBoundsForRange:(struct _NSRange)arg1;	// IMP=0x001000000000e795
- (id)accessibilityIdentifier;	// IMP=0x001000000000e788
- (id)accessibilityLabel;	// IMP=0x001000000000e738
- (struct _NSRange)accessibilityColumnRange;	// IMP=0x001000000000e720
- (struct _NSRange)accessibilityRowRange;	// IMP=0x001000000000e708
@property(readonly, copy) NSString *description;
- (id)initWithImageView:(id)arg1 forTextFeature:(id)arg2 withParentTextFeature:(id)arg3 hasFlippedYAxis:(_Bool)arg4;	// IMP=0x001000000000e52b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
