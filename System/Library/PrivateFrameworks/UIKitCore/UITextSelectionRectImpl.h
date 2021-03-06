//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextSelectionRect.h"

@class WebSelectionRect;

__attribute__((visibility("hidden")))
@interface UITextSelectionRectImpl : UITextSelectionRect
{
    WebSelectionRect *webRect;	// 8 = 0x8
}

+ (id)rectsWithWebRects:(id)arg1;	// IMP=0x0060000000cccaa0
+ (id)rectWithWebRect:(id)arg1;	// IMP=0x0060000000ccca53
- (void).cxx_destruct;	// IMP=0x0000000000ccce0f
@property(retain, nonatomic) WebSelectionRect *webRect; // @synthesize webRect;
- (_Bool)isVertical;	// IMP=0x0000000000cccda7
- (_Bool)containsEnd;	// IMP=0x0000000000cccd63
- (_Bool)containsStart;	// IMP=0x0000000000cccd1f
- (id)range;	// IMP=0x0000000000cccd17
- (long long)writingDirection;	// IMP=0x0000000000ccccd3
- (struct CGRect)rect;	// IMP=0x0000000000cccc75
- (id)initWithWebRect:(id)arg1;	// IMP=0x0000000000ccc9eb

@end

