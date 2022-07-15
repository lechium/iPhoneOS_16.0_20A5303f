//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@protocol _UITextCanvasContext;

@protocol _UITextCanvas <NSObject>
@property(nonatomic) __weak id <_UITextCanvasContext> context;
- (void)updateContentSizeIfNeeded;
- (void)viewportBoundsDidChange;
- (void)drawTextInRect:(struct CGRect)arg1;
@end
