//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class IMConversationListTypingIndicatorLayer;

__attribute__((visibility("hidden")))
@interface CKConversationListTypingIndicatorView : UIView
{
    _Bool _highlightedState;	// 8 = 0x8
    _Bool _flipForRTLLayout;	// 9 = 0x9
    _Bool _isDarkAqua;	// 10 = 0xa
    IMConversationListTypingIndicatorLayer *_typingLayer;	// 16 = 0x10
    double _typingIndicatorScale;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000036c73e
@property(nonatomic) _Bool isDarkAqua; // @synthesize isDarkAqua=_isDarkAqua;
@property(nonatomic) _Bool flipForRTLLayout; // @synthesize flipForRTLLayout=_flipForRTLLayout;
@property(nonatomic, getter=isHighlighted) _Bool highlightedState; // @synthesize highlightedState=_highlightedState;
@property(nonatomic) double typingIndicatorScale; // @synthesize typingIndicatorScale=_typingIndicatorScale;
- (void)resetTypingLayer;	// IMP=0x000000000036c676
- (void)_updateTypingLayerTransform;	// IMP=0x000000000036c0df
- (void)stopAnimation;	// IMP=0x000000000036c09c
- (void)startShrinkAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000036bfd1
- (void)startPulseAnimation;	// IMP=0x000000000036bf94
- (void)startGrowAnimation;	// IMP=0x000000000036bf00
- (void)destroyTypingLayer;	// IMP=0x000000000036beec
@property(retain, nonatomic) IMConversationListTypingIndicatorLayer *typingLayer; // @synthesize typingLayer=_typingLayer;
- (id)init;	// IMP=0x000000000036bcc6

@end

