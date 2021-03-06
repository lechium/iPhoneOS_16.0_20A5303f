//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKUIHorizontalLockupLayout : NSObject
{
    NSMutableArray *_columns;	// 8 = 0x8
    double _imageMarginRight;	// 16 = 0x10
    struct UIEdgeInsets _metadataColumnEdgeInsets;	// 24 = 0x18
    double _metadataColumnMinHeight;	// 56 = 0x38
    double _tallestNonMetadataColumnHeight;	// 64 = 0x40
}

+ (id)fontForOrdinalViewElement:(id)arg1 context:(id)arg2;	// IMP=0x0060000000246a66
+ (id)fontForLabelViewElement:(id)arg1 context:(id)arg2;	// IMP=0x006000000024696f
+ (id)fontForButtonViewElement:(id)arg1 context:(id)arg2;	// IMP=0x0060000000246871
- (void).cxx_destruct;	// IMP=0x0000000000247af7
@property(readonly, nonatomic) struct UIEdgeInsets metadataColumnEdgeInsets; // @synthesize metadataColumnEdgeInsets=_metadataColumnEdgeInsets;
@property(readonly, nonatomic) NSArray *columns; // @synthesize columns=_columns;
- (struct CGSize)_sizeForViewElement:(id)arg1 width:(long long)arg2 context:(id)arg3;	// IMP=0x00000000002479d6
- (struct CGSize)_sizeForRightAlignedColumn:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000024759c
- (double)_heightForMetadataColumn:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000024733c
- (double)topPaddingForViewElement:(id)arg1;	// IMP=0x00000000002472d7
- (void)sizeColumnsToFitWidth:(double)arg1 context:(id)arg2;	// IMP=0x0000000000246be6
- (double)columnSpacingForColumnIdentifier:(long long)arg1;	// IMP=0x0000000000246bbf
- (double)bottomPaddingForViewElement:(id)arg1;	// IMP=0x0000000000246b0f
- (id)initWithLockup:(id)arg1 context:(id)arg2;	// IMP=0x0000000000245de4

@end

