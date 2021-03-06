//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioTime;

__attribute__((visibility("hidden")))
@interface AVAudioClock : NSObject
{
    void *_impl;	// 8 = 0x8
}

- (id)awaitIOCycle:(unsigned int *)arg1;	// IMP=0x000000000007bde1
- (long long)currentIONumberFrames;	// IMP=0x000000000007bdd4
- (struct AudioTimeStamp)currentAudioTimeStamp;	// IMP=0x000000000007bd6d
@property(readonly, nonatomic) AVAudioTime *currentTime;
- (void)dealloc;	// IMP=0x000000000007bcba
- (id)initWithNode:(void *)arg1;	// IMP=0x000000000007ba8d
- (id)init;	// IMP=0x000000000007ba1d

@end

