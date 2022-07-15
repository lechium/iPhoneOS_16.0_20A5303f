//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIEvent.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIWheelEvent : UIEvent
{
    long long _recentScrollDistance;	// 56 = 0x38
    NSMutableArray *_recentScrollEvents;	// 64 = 0x40
    long long lastSubtype;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000ea9f69
- (double)_wheelVelocity;	// IMP=0x0000000000ea9f14
- (_Bool)_canHaveVelocity;	// IMP=0x0000000000ea9ef4
- (void)_sendEventToResponder:(id)arg1;	// IMP=0x0000000000ea9ed9
- (long long)subtype;	// IMP=0x0000000000ea9e86
- (long long)type;	// IMP=0x0000000000ea9e7b
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000000ea9b38

@end
