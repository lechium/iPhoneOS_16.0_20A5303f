//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ARUICountdownCountdown
{
    unsigned long long _step;	// 8 = 0x8
    _Bool _cancelable;	// 16 = 0x10
    double _percent;	// 24 = 0x18
}

+ (id)identifier;	// IMP=0x0010000000015687
@property(nonatomic) double percent; // @synthesize percent=_percent;
- (unsigned long long)countdownStep;	// IMP=0x00000000000159b0
- (void)applyToCountdownView:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015775
- (id)description;	// IMP=0x00000000000156ae
- (id)identifier;	// IMP=0x0000000000015694
- (_Bool)cancelable;	// IMP=0x0000000000015677
- (id)timingFunction;	// IMP=0x0000000000015648
- (double)duration;	// IMP=0x000000000001563a
- (double)delay;	// IMP=0x000000000001562c
- (id)initWithPercent:(double)arg1 andStep:(unsigned long long)arg2 cancelable:(_Bool)arg3;	// IMP=0x00000000000155c0

@end
