//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _NSLineMetrics : NSObject
{
    NSAttributedString *_attributedString;	// 8 = 0x8
    struct _NSRange _lineRange;	// 16 = 0x10
    struct __CTLine *_line;	// 32 = 0x20
    double *_positions;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000060ac7
- (unsigned long long)suggestedLineBreakAfterIndex:(unsigned long long)arg1 withWidth:(double)arg2;	// IMP=0x0000000000060a77
- (double)widthOfSubstringToIndex:(unsigned long long)arg1;	// IMP=0x0000000000060a5b
- (double)widthOfSubstringWithRange:(struct _NSRange)arg1;	// IMP=0x00000000000609e3
- (void)dealloc;	// IMP=0x0000000000060996
- (id)initWithAttributedString:(id)arg1 range:(struct _NSRange)arg2 line:(const struct __CTLine *)arg3;	// IMP=0x00000000000608bb
- (id)initWithAttributedString:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000000608a6
- (void)_calculatePositions;	// IMP=0x00000000000605ea

@end

