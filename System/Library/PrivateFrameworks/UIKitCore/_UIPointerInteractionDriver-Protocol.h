//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIView;
@protocol _UIPointerInteractionDriverSink;

@protocol _UIPointerInteractionDriver <NSObject>
@property(nonatomic) __weak UIView *view;
- (_Bool)isActive;
- (void)invalidate;
- (struct CGPoint)locationInView:(UIView *)arg1;
- (id)initWithSink:(id <_UIPointerInteractionDriverSink>)arg1;
@end

