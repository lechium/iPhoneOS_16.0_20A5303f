//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI29SessionIntroSequencePresenter : NSObject
{
    MISSING_TYPE *display;	// 8 = 0x8
    MISSING_TYPE *sessionCountdownCoordinator;	// 24 = 0x18
    MISSING_TYPE *audioPlayer;	// 64 = 0x40
    MISSING_TYPE *onStartCountdown;	// 72 = 0x48
    MISSING_TYPE *onCountdownSequenceStarted;	// 88 = 0x58
    MISSING_TYPE *onCountdownSequenceCompleted;	// 104 = 0x68
    MISSING_TYPE *timerProvider;	// 120 = 0x78
    MISSING_TYPE *subscriptionToken;	// 160 = 0xa0
    MISSING_TYPE *timer;	// 168 = 0xa8
    MISSING_TYPE *audioSessionCategory;	// 208 = 0xd0
    MISSING_TYPE *audioSessionMode;	// 216 = 0xd8
    MISSING_TYPE *watchConnectionState;	// 224 = 0xe0
    MISSING_TYPE *platform;	// 225 = 0xe1
    MISSING_TYPE *catalogWorkout;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000148ab0
- (id)init;	// IMP=0x0000000000148a50
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;	// IMP=0x0000000000148a00

@end

