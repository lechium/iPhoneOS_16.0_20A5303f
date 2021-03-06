//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

@class AVPanGestureIncrement, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVScrubbingPanGestureRecognizer : UIGestureRecognizer
{
    NSMutableArray *_candidateGestureIncrements;	// 8 = 0x8
    AVPanGestureIncrement *_lastPanGestureIncrement;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004b285
- (void)_debugLogGestureIncrements:(id)arg1 withPrefix:(id)arg2;	// IMP=0x000000000004afef
- (void)reset;	// IMP=0x000000000004afa8
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000004af32
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000004aeb8
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000004a9e9
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000004a920
@property(readonly, nonatomic) struct CGPoint translation;
@property(readonly, nonatomic) struct CGPoint velocity;

@end

