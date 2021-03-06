//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, NSTextAttachment;

__attribute__((visibility("hidden")))
@interface UITextAttachmentView : UIView
{
    NSTextAttachment *_attachment;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000011f0111
@property(nonatomic) __weak NSTextAttachment *attachment; // @synthesize attachment=_attachment;
- (struct CGRect)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;	// IMP=0x00000000011f002d
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;	// IMP=0x00000000011efccd
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3;	// IMP=0x00000000011efcb8
- (struct CGPoint)cellBaselineOffset;	// IMP=0x00000000011efc2c
- (struct CGSize)cellSize;	// IMP=0x00000000011efb9f
- (id)contentView;	// IMP=0x00000000011efb4f
- (id)initWithTextAttachment:(id)arg1 image:(id)arg2;	// IMP=0x00000000011ef9a7
- (id)initWithContentView:(id)arg1;	// IMP=0x00000000011ef8a3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

