//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _UIAttributedStringView : UIView
{
    NSAttributedString *_string;	// 184 = 0xb8
}

+ (Class)layerClass;	// IMP=0x006000000149be18
- (void)setTextRotationAngle:(double)arg1;	// IMP=0x000000000149c156
- (void)setString:(id)arg1;	// IMP=0x000000000149c0f7
- (void)didMoveToSuperview;	// IMP=0x000000000149c077
- (void)_updateContentsScale:(id)arg1;	// IMP=0x000000000149bfd8
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000149bf76
- (void)dealloc;	// IMP=0x000000000149bf08
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000149be29

@end

