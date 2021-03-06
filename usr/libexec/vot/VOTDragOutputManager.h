//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXDispatchTimer, _DUIAccessibilityDragStatus;
@protocol OS_dispatch_queue;

@interface VOTDragOutputManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _dragActive;	// 16 = 0x10
    _Bool _dragMoved;	// 17 = 0x11
    _Bool _dropReadyAnnounced;	// 18 = 0x12
    _DUIAccessibilityDragStatus *_currentStatus;	// 24 = 0x18
    AXDispatchTimer *_timer;	// 32 = 0x20
    double _lastDragMove;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000113071
- (void)_announceDropUnready;	// IMP=0x001000000011301d
- (void)_announceDropReady;	// IMP=0x0010000000112fc9
- (void)_announceDragCount;	// IMP=0x0010000000112e72
- (void)_announceDragPickup;	// IMP=0x0010000000112dfa
- (void)dragCancelled;	// IMP=0x0010000000112d94
- (void)dragDropped;	// IMP=0x0010000000112cd9
- (void)currentElementChanged;	// IMP=0x0010000000112c78
- (void)dragEnded;	// IMP=0x0010000000112bfb
- (void)dragStatusChanged:(id)arg1;	// IMP=0x0010000000112884
- (void)dragMoved;	// IMP=0x0010000000112777
- (void)dragSessionStarted;	// IMP=0x0010000000112716
- (id)init;	// IMP=0x0010000000112664

@end

