//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIStackView.h>

@class MISSING_TYPE, _TtC5Files17DOCItemSourcePair;

@interface _TtC5Files15DOCMetadataView : UIStackView
{
    MISSING_TYPE *itemSourcePair;	// 8 = 0x8
    MISSING_TYPE *showsItemLocation;	// 16 = 0x10
    MISSING_TYPE *showsSeparators;	// 17 = 0x11
    MISSING_TYPE *columnWidth;	// 24 = 0x18
    MISSING_TYPE *metadataViewDelegate;	// 32 = 0x20
    MISSING_TYPE *labelAlignment;	// 48 = 0x30
    MISSING_TYPE *initialMetadataKeys;	// 56 = 0x38
    MISSING_TYPE *metadataEntries;	// 64 = 0x40
    MISSING_TYPE *canShowAdditionalMetadataValues;	// 72 = 0x48
    MISSING_TYPE *configuration;	// 80 = 0x50
    MISSING_TYPE *levelOfDetail;	// 88 = 0x58
}

+ (Class)layerClass;	// IMP=0x0020000000315e60
- (void).cxx_destruct;	// IMP=0x00400000003181c0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000318130
- (void)didMoveToWindow;	// IMP=0x00100000003167b0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000003165e0
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000003163d0
- (id)init;	// IMP=0x00100000003160a0
@property(nonatomic) long long levelOfDetail; // @synthesize levelOfDetail;
@property(nonatomic) double columnWidth; // @synthesize columnWidth;
@property(nonatomic) _Bool showsSeparators; // @synthesize showsSeparators;
@property(nonatomic) _Bool showsItemLocation; // @synthesize showsItemLocation;
@property(nonatomic, retain) _TtC5Files17DOCItemSourcePair *itemSourcePair; // @synthesize itemSourcePair;

@end
