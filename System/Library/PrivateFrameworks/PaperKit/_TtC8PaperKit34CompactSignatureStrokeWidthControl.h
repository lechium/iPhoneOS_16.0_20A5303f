//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit34CompactSignatureStrokeWidthControl : UIControl
{
    MISSING_TYPE *width;	// 8 = 0x8
    MISSING_TYPE *unit;	// 16 = 0x10
    MISSING_TYPE *strokePreviewWidth;	// 32 = 0x20
    MISSING_TYPE *strokePreviewRotationAngle;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_strokeWidthPreview;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000177bb0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000177b50
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000000177af0
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;	// IMP=0x0000000000177a10
@property(nonatomic) _Bool selected;
- (_Bool)isSelected;	// IMP=0x00000000001779d0
- (void)layoutSubviews;	// IMP=0x00000000001778c0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000177870
@property(nonatomic, readonly) NSString *unit;
@property(nonatomic, readonly) long long width; // @synthesize width;

@end

