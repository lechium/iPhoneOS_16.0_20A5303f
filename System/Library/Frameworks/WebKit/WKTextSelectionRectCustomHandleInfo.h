//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextSelectionRectCustomHandleInfo.h>

__attribute__((visibility("hidden")))
@interface WKTextSelectionRectCustomHandleInfo : UITextSelectionRectCustomHandleInfo
{
    struct FloatQuad _quad;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000423ac1
- (struct CGPoint)topRight;	// IMP=0x0000000000423aa9
- (struct CGPoint)bottomRight;	// IMP=0x0000000000423a91
- (struct CGPoint)topLeft;	// IMP=0x0000000000423a80
- (struct CGPoint)bottomLeft;	// IMP=0x0000000000423a68
- (id)initWithFloatQuad:(const struct FloatQuad *)arg1;	// IMP=0x0000000000423a18

@end
