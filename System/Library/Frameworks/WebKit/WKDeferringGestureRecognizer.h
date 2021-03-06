//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface WKDeferringGestureRecognizer : UIGestureRecognizer
{
    struct WeakObjCPtr<id<WKDeferringGestureRecognizerDelegate>> _deferringGestureDelegate;	// 8 = 0x8
    _Bool _immediatelyFailsAfterTouchEnd;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x0000000000415128
- (void).cxx_destruct;	// IMP=0x0000000000415117
@property(nonatomic) _Bool immediatelyFailsAfterTouchEnd; // @synthesize immediatelyFailsAfterTouchEnd=_immediatelyFailsAfterTouchEnd;
- (void)setState:(long long)arg1;	// IMP=0x0000000000415066
- (_Bool)shouldDeferGestureRecognizer:(id)arg1;	// IMP=0x0000000000415030
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x0000000000415028
- (void)endDeferral:(_Bool)arg1;	// IMP=0x0000000000415008
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000414fc2
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000414f3c
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000414eb1
- (id)initWithDeferringGestureDelegate:(id)arg1;	// IMP=0x0000000000414e5c

@end

